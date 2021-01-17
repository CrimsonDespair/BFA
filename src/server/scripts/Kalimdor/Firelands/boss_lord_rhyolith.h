/*
* Copyright (C) 2020 BfaCore
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#define _MIN_DAMAGE 40000.0f
#define _MAX_DAMAGE 240000.0f
#define _MAX_MOVE 192
#define _MAX_VOLCANO 32

const Position movePos[192] =
{
    {-355.225708f, -376.727631f, 99.903870f, 0.0f},
    {-355.225708f, -376.727631f, 99.903870f, 0.0f},
    {-356.720093f, -376.629517f, 99.977081f, 0.0f},
    {-360.214905f, -376.440277f, 100.009476f, 0.0f},
    {-361.733398f, -376.289398f, 99.998573f, 0.0f},
    {-361.733398f, -376.289398f, 99.998573f, 0.0f},
    {-364.844147f, -375.952271f, 100.062500f, 0.0f},
    {-366.955963f, -375.643433f, 100.126587f, 0.0f},
    {-368.990723f, -375.184570f, 100.237740f, 0.0f},
    {-368.990723f, -375.184570f, 100.237740f, 0.0f},
    {-372.396545f, -374.378052f, 100.318794f, 0.0f},
    {-374.441254f, -373.843079f, 100.264771f, 0.0f},
    {-375.895050f, -373.402771f, 100.186363f, 0.0f},
    {-379.226715f, -372.331055f, 100.032257f, 0.0f},
    {-380.959381f, -371.650146f, 100.006149f, 0.0f},
    {-381.880737f, -371.193176f, 100.048279f, 0.0f},
    {-384.416321f, -369.732941f, 100.230377f, 0.0f},
    {-386.011719f, -368.773071f, 100.337967f, 0.0f},
    {-387.294006f, -367.958771f, 100.273682f, 0.0f},
    {-388.753937f, -366.994019f, 100.173782f, 0.0f},
    {-390.012238f, -366.130676f, 100.026581f, 0.0f},
    {-391.300049f, -365.153503f, 99.969215f, 0.0f},
    {-394.021088f, -362.952179f, 99.887413f, 0.0f},
    {-394.021088f, -362.952179f, 99.887413f, 0.0f},
    {-396.742157f, -360.750824f, 99.825073f, 0.0f},
    {-398.125397f, -359.668488f, 99.812698f, 0.0f},
    {-399.144867f, -359.097565f, 99.798332f, 0.0f},
    {-400.420319f, -358.520691f, 99.784225f, 0.0f},
    {-403.485107f, -357.413696f, 99.831436f, 0.0f},
    {-403.485107f, -357.413696f, 99.831436f, 0.0f},
    {-403.485107f, -357.413696f, 99.831436f, 0.0f},
    {-406.845306f, -356.434418f, 99.850502f, 0.0f},
    {-409.531525f, -355.644379f, 99.858147f, 0.0f},
    {-411.073730f, -355.113953f, 99.849495f, 0.0f},
    {-412.484619f, -354.552155f, 99.844757f, 0.0f},
    {-413.866364f, -353.888397f, 99.818588f, 0.0f},
    {-415.501068f, -353.027252f, 99.796326f, 0.0f},
    {-416.780792f, -352.197235f, 99.778809f, 0.0f},
    {-418.659485f, -350.830872f, 99.742180f, 0.0f},
    {-420.048645f, -349.571167f, 99.735474f, 0.0f},
    {-421.154999f, -348.383179f, 99.749252f, 0.0f},
    {-422.169434f, -347.115967f, 99.765076f, 0.0f},
    {-423.736847f, -344.402618f, 99.856728f, 0.0f},
    {-424.231506f, -343.199005f, 99.881241f, 0.0f},
    {-424.689606f, -341.641205f, 99.940231f, 0.0f},
    {-425.133118f, -340.049835f, 99.979156f, 0.0f},
    {-425.598633f, -337.780731f, 99.999771f, 0.0f},
    {-425.710480f, -336.146606f, 100.070572f, 0.0f},
    {-425.912537f, -333.705414f, 100.112038f, 0.0f},
    {-426.118988f, -331.960602f, 100.130478f, 0.0f},
    {-426.281921f, -330.352478f, 100.160103f, 0.0f},
    {-426.284363f, -328.824219f, 100.287788f, 0.0f},
    {-426.284363f, -328.824219f, 100.287788f, 0.0f},
    {-426.193054f, -324.394379f, 100.462074f, 0.0f},
    {-426.060638f, -322.074432f, 100.484489f, 0.0f},
    {-426.060638f, -322.074432f, 100.484489f, 0.0f},
    {-425.861084f, -319.513184f, 100.345932f, 0.0f},
    {-425.665405f, -317.535004f, 100.351135f, 0.0f},
    {-425.410736f, -315.450531f, 100.317596f, 0.0f},
    {-424.894135f, -312.457184f, 100.405296f, 0.0f},
    {-424.580078f, -310.985413f, 100.305969f, 0.0f},
    {-424.208221f, -309.505463f, 100.214096f, 0.0f},
    {-423.542297f, -307.155029f, 100.141937f, 0.0f},
    {-423.104248f, -305.715210f, 100.119934f, 0.0f},
    {-423.104248f, -305.715210f, 100.119934f, 0.0f},
    {-422.060028f, -302.374603f, 99.978134f, 0.0f},
    {-421.523682f, -300.576965f, 99.909386f, 0.0f},
    {-421.051331f, -298.899139f, 99.880280f, 0.0f},
    {-421.051331f, -298.899139f, 99.880280f, 0.0f},
    {-420.111694f, -295.527618f, 99.783134f, 0.0f},
    {-420.111694f, -295.527618f, 99.783134f, 0.0f},
    {-419.172058f, -292.156128f, 99.739662f, 0.0f},
    {-419.172058f, -292.156128f, 99.739662f, 0.0f},
    {-418.217041f, -288.789032f, 99.749168f, 0.0f},
    {-417.612610f, -286.902740f, 99.762344f, 0.0f},
    {-416.977142f, -285.145142f, 99.766891f, 0.0f},
    {-416.256622f, -283.307434f, 99.767570f, 0.0f},
    {-414.842621f, -280.356079f, 99.757660f, 0.0f},
    {-414.842621f, -280.356079f, 99.757660f, 0.0f},
    {-412.996155f, -277.385437f, 99.776794f, 0.0f},
    {-412.062134f, -276.048431f, 99.782959f, 0.0f},
    {-411.145874f, -274.837341f, 99.785515f, 0.0f},
    {-410.164734f, -273.659454f, 99.785530f, 0.0f},
    {-408.655396f, -271.910706f, 99.782791f, 0.0f},
    {-407.262970f, -270.338806f, 99.769630f, 0.0f},
    {-406.192291f, -269.262207f, 99.764565f, 0.0f},
    {-405.049347f, -268.261719f, 99.764565f, 0.0f},
    {-402.676056f, -266.354706f, 99.771111f, 0.0f},
    {-401.381561f, -265.374146f, 99.772659f, 0.0f},
    {-401.381561f, -265.374146f, 99.772659f, 0.0f},
    {-398.675446f, -263.347900f, 99.771896f, 0.0f},
    {-397.336914f, -262.391754f, 99.767342f, 0.0f},
    {-397.336914f, -262.391754f, 99.767342f, 0.0f},
    {-394.440491f, -260.426880f, 99.760193f, 0.0f},
    {-392.904846f, -259.398895f, 99.750671f, 0.0f},
    {-392.904846f, -259.398895f, 99.750671f, 0.0f},
    {-388.607758f, -256.635376f, 99.741692f, 0.0f},
    {-386.781494f, -255.598953f, 99.740021f, 0.0f},
    {-385.212494f, -254.824921f, 99.720848f, 0.0f},
    {-383.912842f, -254.325394f, 99.719986f, 0.0f},
    {-382.437286f, -253.911896f, 99.728500f, 0.0f},
    {-380.620941f, -253.535812f, 99.746620f, 0.0f},
    {-379.012421f, -253.267136f, 99.764015f, 0.0f},
    {-376.455261f, -253.043671f, 99.774757f, 0.0f},
    {-374.936920f, -253.086807f, 99.799805f, 0.0f},
    {-373.307892f, -253.166336f, 99.801216f, 0.0f},
    {-370.303864f, -253.560028f, 99.834923f, 0.0f},
    {-370.303864f, -253.560028f, 99.834923f, 0.0f},
    {-367.315125f, -254.063202f, 99.843269f, 0.0f},
    {-365.836334f, -254.408493f, 99.842438f, 0.0f},
    {-364.390839f, -254.858429f, 99.843071f, 0.0f},
    {-361.568420f, -255.959442f, 99.835556f, 0.0f},
    {-360.208435f, -256.619995f, 99.899963f, 0.0f},
    {-358.870941f, -257.339813f, 99.861534f, 0.0f},
    {-357.559875f, -258.092834f, 99.844948f, 0.0f},
    {-354.776825f, -259.820953f, 99.794746f, 0.0f},
    {-353.347778f, -260.817566f, 99.823616f, 0.0f},
    {-352.178741f, -261.797821f, 99.846382f, 0.0f},
    {-352.178741f, -261.797821f, 99.846382f, 0.0f},
    {-349.346619f, -264.565369f, 99.892960f, 0.0f},
    {-348.156555f, -265.838837f, 99.885994f, 0.0f},
    {-348.156555f, -265.838837f, 99.885994f, 0.0f},
    {-345.770447f, -268.399384f, 100.001945f, 0.0f},
    {-345.770447f, -268.399384f, 100.001945f, 0.0f},
    {-343.376617f, -270.952759f, 99.967270f, 0.0f},
    {-343.376617f, -270.952759f, 99.967270f, 0.0f},
    {-341.140137f, -273.336914f, 99.938110f, 0.0f},
    {-339.769592f, -274.767334f, 99.921852f, 0.0f},
    {-338.133759f, -276.447479f, 99.889725f, 0.0f},
    {-336.259094f, -278.354279f, 99.884140f, 0.0f},
    {-335.094788f, -279.496307f, 99.880676f, 0.0f},
    {-333.980316f, -280.519562f, 99.881378f, 0.0f},
    {-332.230957f, -282.070343f, 99.900444f, 0.0f},
    {-330.379608f, -283.273254f, 99.851784f, 0.0f},
    {-330.379608f, -283.273254f, 99.851784f, 0.0f},
    {-327.675446f, -284.888489f, 99.794098f, 0.0f},
    {-326.398132f, -285.697235f, 99.791718f, 0.0f},
    {-324.454956f, -286.997375f, 99.789963f, 0.0f},
    {-321.969604f, -288.731750f, 99.805008f, 0.0f},
    {-320.778778f, -289.674622f, 99.787941f, 0.0f},
    {-319.622314f, -290.648529f, 99.797562f, 0.0f},
    {-318.511200f, -291.684204f, 99.797562f, 0.0f},
    {-316.851349f, -293.629517f, 99.774086f, 0.0f},
    {-316.072113f, -294.940857f, 99.789619f, 0.0f},
    {-315.564667f, -295.971313f, 99.797081f, 0.0f},
    {-314.647308f, -298.614410f, 99.808052f, 0.0f},
    {-314.377380f, -300.108643f, 99.829819f, 0.0f},
    {-314.197845f, -301.729523f, 99.850731f, 0.0f},
    {-314.062347f, -304.763245f, 99.885040f, 0.0f},
    {-314.309875f, -307.197418f, 99.958366f, 0.0f},
    {-314.461639f, -307.887573f, 99.956764f, 0.0f},
    {-315.000153f, -309.418915f, 99.936508f, 0.0f},
    {-316.399780f, -312.493500f, 99.870705f, 0.0f},
    {-317.115265f, -313.833405f, 99.834015f, 0.0f},
    {-318.125031f, -315.666718f, 99.791031f, 0.0f},
    {-318.125031f, -315.666718f, 99.791031f, 0.0f},
    {-319.272583f, -317.703644f, 99.777908f, 0.0f},
    {-319.272583f, -317.703644f, 99.777908f, 0.0f},
    {-321.009125f, -320.742462f, 99.781578f, 0.0f},
    {-322.745667f, -323.781281f, 99.781990f, 0.0f},
    {-323.537994f, -325.206787f, 99.787743f, 0.0f},
    {-324.216583f, -326.689423f, 99.802032f, 0.0f},
    {-324.981049f, -328.888763f, 99.798416f, 0.0f},
    {-325.224060f, -330.387878f, 99.793030f, 0.0f},
    {-325.224060f, -330.387878f, 99.793030f, 0.0f},
    {-325.785492f, -334.810303f, 99.838547f, 0.0f},
    {-325.887482f, -336.318787f, 99.841187f, 0.0f},
    {-325.887482f, -336.318787f, 99.841187f, 0.0f},
    {-326.096344f, -339.812561f, 99.899757f, 0.0f},
    {-326.231018f, -341.788910f, 99.811211f, 0.0f},
    {-326.445526f, -344.004395f, 99.869804f, 0.0f},
    {-326.445526f, -344.004395f, 99.869804f, 0.0f},
    {-326.870422f, -347.478424f, 99.839684f, 0.0f},
    {-327.118317f, -348.969757f, 99.823601f, 0.0f},
    {-327.533051f, -350.539185f, 99.807358f, 0.0f},
    {-328.047028f, -352.093597f, 99.818253f, 0.0f},
    {-329.609619f, -355.487183f, 99.828011f, 0.0f},
    {-330.335144f, -356.813721f, 99.825127f, 0.0f},
    {-330.335144f, -356.813721f, 99.825127f, 0.0f},
    {-332.003357f, -359.889984f, 99.800140f, 0.0f},
    {-332.824768f, -361.298828f, 99.794754f, 0.0f},
    {-334.677826f, -363.699738f, 99.842888f, 0.0f},
    {-335.875580f, -364.958801f, 99.898201f, 0.0f},
    {-336.960022f, -366.012451f, 99.944328f, 0.0f},
    {-336.960022f, -366.012451f, 99.944328f, 0.0f},
    {-339.475433f, -368.446136f, 99.870956f, 0.0f},
    {-339.475433f, -368.446136f, 99.870956f, 0.0f},
    {-341.349976f, -370.212555f, 100.060715f, 0.0f},
    {-343.760651f, -372.046234f, 100.104507f, 0.0f},
    {-345.139099f, -372.930695f, 100.189301f, 0.0f},
    {-346.568298f, -373.701172f, 100.293777f, 0.0f},
    {-347.421143f, -374.073273f, 100.319786f, 0.0f}
};

const Position volcanoPos[32] =
{
    {-396.114746f, -346.146484f, 100.684708f, 0.0f},
    {-399.102173f, -342.254395f, 100.808762f, 0.0f},
    {-402.036255f, -336.702087f, 100.971596f, 0.0f},
    {-404.010193f, -329.461914f, 101.121101f, 0.0f},
    {-402.278351f, -324.751434f, 101.021027f, 0.0f},
    {-400.215851f, -317.911469f, 100.889153f, 0.0f},
    {-398.159180f, -314.661255f, 100.770287f, 0.0f},
    {-391.131866f, -309.512695f, 100.517395f, 0.0f},
    {-387.647247f, -304.787079f, 100.448601f, 0.0f},
    {-383.155823f, -301.352203f, 100.428406f, 0.0f},
    {-379.210876f, -296.059387f, 100.191261f, 0.0f},
    {-375.965881f, -295.153931f, 100.184433f, 0.0f},
    {-367.076202f, -293.629211f, 100.118217f, 0.0f},
    {-361.091797f, -296.515869f, 100.111923f, 0.0f},
    {-361.510406f, -301.442383f, 100.508224f, 0.0f},
    {-363.406219f, -308.180603f, 100.687607f, 0.0f},
    {-361.991425f, -314.250580f, 100.521355f, 0.0f},
    {-354.600372f, -317.318604f, 100.479019f, 0.0f},
    {-350.214569f, -322.006500f, 100.419815f, 0.0f},
    {-349.793243f, -328.473724f, 100.326950f, 0.0f},
    {-354.241974f, -332.246674f, 100.254547f, 0.0f},
    {-360.345490f, -331.563904f, 100.197029f, 0.0f},
    {-365.399323f, -327.687531f, 100.208076f, 0.0f},
    {-368.650757f, -322.030670f, 100.299660f, 0.0f},
    {-371.699188f, -315.729309f, 100.477997f, 0.0f},
    {-375.469116f, -309.771362f, 100.705566f, 0.0f},
    {-380.374756f, -304.777893f, 100.737877f, 0.0f},
    {-384.650208f, -299.917542f, 100.351532f, 0.0f},
    {-382.399719f, -294.439728f, 100.204231f, 0.0f},
    {-376.535034f, -291.622772f, 100.153160f, 0.0f},
    {-369.388947f, -290.871277f, 100.099380f, 0.0f},
    {-365.565674f, -293.857117f, 100.094292f, 0.0f}
};
