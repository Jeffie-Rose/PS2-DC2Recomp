#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FlyStep__4CPotFv
// Address: 0x2cc880 - 0x2ccd14
void FlyStep__4CPotFv_0x2cc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FlyStep__4CPotFv_0x2cc880");
#endif

    switch (ctx->pc) {
        case 0x2cc880u: goto label_2cc880;
        case 0x2cc884u: goto label_2cc884;
        case 0x2cc888u: goto label_2cc888;
        case 0x2cc88cu: goto label_2cc88c;
        case 0x2cc890u: goto label_2cc890;
        case 0x2cc894u: goto label_2cc894;
        case 0x2cc898u: goto label_2cc898;
        case 0x2cc89cu: goto label_2cc89c;
        case 0x2cc8a0u: goto label_2cc8a0;
        case 0x2cc8a4u: goto label_2cc8a4;
        case 0x2cc8a8u: goto label_2cc8a8;
        case 0x2cc8acu: goto label_2cc8ac;
        case 0x2cc8b0u: goto label_2cc8b0;
        case 0x2cc8b4u: goto label_2cc8b4;
        case 0x2cc8b8u: goto label_2cc8b8;
        case 0x2cc8bcu: goto label_2cc8bc;
        case 0x2cc8c0u: goto label_2cc8c0;
        case 0x2cc8c4u: goto label_2cc8c4;
        case 0x2cc8c8u: goto label_2cc8c8;
        case 0x2cc8ccu: goto label_2cc8cc;
        case 0x2cc8d0u: goto label_2cc8d0;
        case 0x2cc8d4u: goto label_2cc8d4;
        case 0x2cc8d8u: goto label_2cc8d8;
        case 0x2cc8dcu: goto label_2cc8dc;
        case 0x2cc8e0u: goto label_2cc8e0;
        case 0x2cc8e4u: goto label_2cc8e4;
        case 0x2cc8e8u: goto label_2cc8e8;
        case 0x2cc8ecu: goto label_2cc8ec;
        case 0x2cc8f0u: goto label_2cc8f0;
        case 0x2cc8f4u: goto label_2cc8f4;
        case 0x2cc8f8u: goto label_2cc8f8;
        case 0x2cc8fcu: goto label_2cc8fc;
        case 0x2cc900u: goto label_2cc900;
        case 0x2cc904u: goto label_2cc904;
        case 0x2cc908u: goto label_2cc908;
        case 0x2cc90cu: goto label_2cc90c;
        case 0x2cc910u: goto label_2cc910;
        case 0x2cc914u: goto label_2cc914;
        case 0x2cc918u: goto label_2cc918;
        case 0x2cc91cu: goto label_2cc91c;
        case 0x2cc920u: goto label_2cc920;
        case 0x2cc924u: goto label_2cc924;
        case 0x2cc928u: goto label_2cc928;
        case 0x2cc92cu: goto label_2cc92c;
        case 0x2cc930u: goto label_2cc930;
        case 0x2cc934u: goto label_2cc934;
        case 0x2cc938u: goto label_2cc938;
        case 0x2cc93cu: goto label_2cc93c;
        case 0x2cc940u: goto label_2cc940;
        case 0x2cc944u: goto label_2cc944;
        case 0x2cc948u: goto label_2cc948;
        case 0x2cc94cu: goto label_2cc94c;
        case 0x2cc950u: goto label_2cc950;
        case 0x2cc954u: goto label_2cc954;
        case 0x2cc958u: goto label_2cc958;
        case 0x2cc95cu: goto label_2cc95c;
        case 0x2cc960u: goto label_2cc960;
        case 0x2cc964u: goto label_2cc964;
        case 0x2cc968u: goto label_2cc968;
        case 0x2cc96cu: goto label_2cc96c;
        case 0x2cc970u: goto label_2cc970;
        case 0x2cc974u: goto label_2cc974;
        case 0x2cc978u: goto label_2cc978;
        case 0x2cc97cu: goto label_2cc97c;
        case 0x2cc980u: goto label_2cc980;
        case 0x2cc984u: goto label_2cc984;
        case 0x2cc988u: goto label_2cc988;
        case 0x2cc98cu: goto label_2cc98c;
        case 0x2cc990u: goto label_2cc990;
        case 0x2cc994u: goto label_2cc994;
        case 0x2cc998u: goto label_2cc998;
        case 0x2cc99cu: goto label_2cc99c;
        case 0x2cc9a0u: goto label_2cc9a0;
        case 0x2cc9a4u: goto label_2cc9a4;
        case 0x2cc9a8u: goto label_2cc9a8;
        case 0x2cc9acu: goto label_2cc9ac;
        case 0x2cc9b0u: goto label_2cc9b0;
        case 0x2cc9b4u: goto label_2cc9b4;
        case 0x2cc9b8u: goto label_2cc9b8;
        case 0x2cc9bcu: goto label_2cc9bc;
        case 0x2cc9c0u: goto label_2cc9c0;
        case 0x2cc9c4u: goto label_2cc9c4;
        case 0x2cc9c8u: goto label_2cc9c8;
        case 0x2cc9ccu: goto label_2cc9cc;
        case 0x2cc9d0u: goto label_2cc9d0;
        case 0x2cc9d4u: goto label_2cc9d4;
        case 0x2cc9d8u: goto label_2cc9d8;
        case 0x2cc9dcu: goto label_2cc9dc;
        case 0x2cc9e0u: goto label_2cc9e0;
        case 0x2cc9e4u: goto label_2cc9e4;
        case 0x2cc9e8u: goto label_2cc9e8;
        case 0x2cc9ecu: goto label_2cc9ec;
        case 0x2cc9f0u: goto label_2cc9f0;
        case 0x2cc9f4u: goto label_2cc9f4;
        case 0x2cc9f8u: goto label_2cc9f8;
        case 0x2cc9fcu: goto label_2cc9fc;
        case 0x2cca00u: goto label_2cca00;
        case 0x2cca04u: goto label_2cca04;
        case 0x2cca08u: goto label_2cca08;
        case 0x2cca0cu: goto label_2cca0c;
        case 0x2cca10u: goto label_2cca10;
        case 0x2cca14u: goto label_2cca14;
        case 0x2cca18u: goto label_2cca18;
        case 0x2cca1cu: goto label_2cca1c;
        case 0x2cca20u: goto label_2cca20;
        case 0x2cca24u: goto label_2cca24;
        case 0x2cca28u: goto label_2cca28;
        case 0x2cca2cu: goto label_2cca2c;
        case 0x2cca30u: goto label_2cca30;
        case 0x2cca34u: goto label_2cca34;
        case 0x2cca38u: goto label_2cca38;
        case 0x2cca3cu: goto label_2cca3c;
        case 0x2cca40u: goto label_2cca40;
        case 0x2cca44u: goto label_2cca44;
        case 0x2cca48u: goto label_2cca48;
        case 0x2cca4cu: goto label_2cca4c;
        case 0x2cca50u: goto label_2cca50;
        case 0x2cca54u: goto label_2cca54;
        case 0x2cca58u: goto label_2cca58;
        case 0x2cca5cu: goto label_2cca5c;
        case 0x2cca60u: goto label_2cca60;
        case 0x2cca64u: goto label_2cca64;
        case 0x2cca68u: goto label_2cca68;
        case 0x2cca6cu: goto label_2cca6c;
        case 0x2cca70u: goto label_2cca70;
        case 0x2cca74u: goto label_2cca74;
        case 0x2cca78u: goto label_2cca78;
        case 0x2cca7cu: goto label_2cca7c;
        case 0x2cca80u: goto label_2cca80;
        case 0x2cca84u: goto label_2cca84;
        case 0x2cca88u: goto label_2cca88;
        case 0x2cca8cu: goto label_2cca8c;
        case 0x2cca90u: goto label_2cca90;
        case 0x2cca94u: goto label_2cca94;
        case 0x2cca98u: goto label_2cca98;
        case 0x2cca9cu: goto label_2cca9c;
        case 0x2ccaa0u: goto label_2ccaa0;
        case 0x2ccaa4u: goto label_2ccaa4;
        case 0x2ccaa8u: goto label_2ccaa8;
        case 0x2ccaacu: goto label_2ccaac;
        case 0x2ccab0u: goto label_2ccab0;
        case 0x2ccab4u: goto label_2ccab4;
        case 0x2ccab8u: goto label_2ccab8;
        case 0x2ccabcu: goto label_2ccabc;
        case 0x2ccac0u: goto label_2ccac0;
        case 0x2ccac4u: goto label_2ccac4;
        case 0x2ccac8u: goto label_2ccac8;
        case 0x2ccaccu: goto label_2ccacc;
        case 0x2ccad0u: goto label_2ccad0;
        case 0x2ccad4u: goto label_2ccad4;
        case 0x2ccad8u: goto label_2ccad8;
        case 0x2ccadcu: goto label_2ccadc;
        case 0x2ccae0u: goto label_2ccae0;
        case 0x2ccae4u: goto label_2ccae4;
        case 0x2ccae8u: goto label_2ccae8;
        case 0x2ccaecu: goto label_2ccaec;
        case 0x2ccaf0u: goto label_2ccaf0;
        case 0x2ccaf4u: goto label_2ccaf4;
        case 0x2ccaf8u: goto label_2ccaf8;
        case 0x2ccafcu: goto label_2ccafc;
        case 0x2ccb00u: goto label_2ccb00;
        case 0x2ccb04u: goto label_2ccb04;
        case 0x2ccb08u: goto label_2ccb08;
        case 0x2ccb0cu: goto label_2ccb0c;
        case 0x2ccb10u: goto label_2ccb10;
        case 0x2ccb14u: goto label_2ccb14;
        case 0x2ccb18u: goto label_2ccb18;
        case 0x2ccb1cu: goto label_2ccb1c;
        case 0x2ccb20u: goto label_2ccb20;
        case 0x2ccb24u: goto label_2ccb24;
        case 0x2ccb28u: goto label_2ccb28;
        case 0x2ccb2cu: goto label_2ccb2c;
        case 0x2ccb30u: goto label_2ccb30;
        case 0x2ccb34u: goto label_2ccb34;
        case 0x2ccb38u: goto label_2ccb38;
        case 0x2ccb3cu: goto label_2ccb3c;
        case 0x2ccb40u: goto label_2ccb40;
        case 0x2ccb44u: goto label_2ccb44;
        case 0x2ccb48u: goto label_2ccb48;
        case 0x2ccb4cu: goto label_2ccb4c;
        case 0x2ccb50u: goto label_2ccb50;
        case 0x2ccb54u: goto label_2ccb54;
        case 0x2ccb58u: goto label_2ccb58;
        case 0x2ccb5cu: goto label_2ccb5c;
        case 0x2ccb60u: goto label_2ccb60;
        case 0x2ccb64u: goto label_2ccb64;
        case 0x2ccb68u: goto label_2ccb68;
        case 0x2ccb6cu: goto label_2ccb6c;
        case 0x2ccb70u: goto label_2ccb70;
        case 0x2ccb74u: goto label_2ccb74;
        case 0x2ccb78u: goto label_2ccb78;
        case 0x2ccb7cu: goto label_2ccb7c;
        case 0x2ccb80u: goto label_2ccb80;
        case 0x2ccb84u: goto label_2ccb84;
        case 0x2ccb88u: goto label_2ccb88;
        case 0x2ccb8cu: goto label_2ccb8c;
        case 0x2ccb90u: goto label_2ccb90;
        case 0x2ccb94u: goto label_2ccb94;
        case 0x2ccb98u: goto label_2ccb98;
        case 0x2ccb9cu: goto label_2ccb9c;
        case 0x2ccba0u: goto label_2ccba0;
        case 0x2ccba4u: goto label_2ccba4;
        case 0x2ccba8u: goto label_2ccba8;
        case 0x2ccbacu: goto label_2ccbac;
        case 0x2ccbb0u: goto label_2ccbb0;
        case 0x2ccbb4u: goto label_2ccbb4;
        case 0x2ccbb8u: goto label_2ccbb8;
        case 0x2ccbbcu: goto label_2ccbbc;
        case 0x2ccbc0u: goto label_2ccbc0;
        case 0x2ccbc4u: goto label_2ccbc4;
        case 0x2ccbc8u: goto label_2ccbc8;
        case 0x2ccbccu: goto label_2ccbcc;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccbd4u: goto label_2ccbd4;
        case 0x2ccbd8u: goto label_2ccbd8;
        case 0x2ccbdcu: goto label_2ccbdc;
        case 0x2ccbe0u: goto label_2ccbe0;
        case 0x2ccbe4u: goto label_2ccbe4;
        case 0x2ccbe8u: goto label_2ccbe8;
        case 0x2ccbecu: goto label_2ccbec;
        case 0x2ccbf0u: goto label_2ccbf0;
        case 0x2ccbf4u: goto label_2ccbf4;
        case 0x2ccbf8u: goto label_2ccbf8;
        case 0x2ccbfcu: goto label_2ccbfc;
        case 0x2ccc00u: goto label_2ccc00;
        case 0x2ccc04u: goto label_2ccc04;
        case 0x2ccc08u: goto label_2ccc08;
        case 0x2ccc0cu: goto label_2ccc0c;
        case 0x2ccc10u: goto label_2ccc10;
        case 0x2ccc14u: goto label_2ccc14;
        case 0x2ccc18u: goto label_2ccc18;
        case 0x2ccc1cu: goto label_2ccc1c;
        case 0x2ccc20u: goto label_2ccc20;
        case 0x2ccc24u: goto label_2ccc24;
        case 0x2ccc28u: goto label_2ccc28;
        case 0x2ccc2cu: goto label_2ccc2c;
        case 0x2ccc30u: goto label_2ccc30;
        case 0x2ccc34u: goto label_2ccc34;
        case 0x2ccc38u: goto label_2ccc38;
        case 0x2ccc3cu: goto label_2ccc3c;
        case 0x2ccc40u: goto label_2ccc40;
        case 0x2ccc44u: goto label_2ccc44;
        case 0x2ccc48u: goto label_2ccc48;
        case 0x2ccc4cu: goto label_2ccc4c;
        case 0x2ccc50u: goto label_2ccc50;
        case 0x2ccc54u: goto label_2ccc54;
        case 0x2ccc58u: goto label_2ccc58;
        case 0x2ccc5cu: goto label_2ccc5c;
        case 0x2ccc60u: goto label_2ccc60;
        case 0x2ccc64u: goto label_2ccc64;
        case 0x2ccc68u: goto label_2ccc68;
        case 0x2ccc6cu: goto label_2ccc6c;
        case 0x2ccc70u: goto label_2ccc70;
        case 0x2ccc74u: goto label_2ccc74;
        case 0x2ccc78u: goto label_2ccc78;
        case 0x2ccc7cu: goto label_2ccc7c;
        case 0x2ccc80u: goto label_2ccc80;
        case 0x2ccc84u: goto label_2ccc84;
        case 0x2ccc88u: goto label_2ccc88;
        case 0x2ccc8cu: goto label_2ccc8c;
        case 0x2ccc90u: goto label_2ccc90;
        case 0x2ccc94u: goto label_2ccc94;
        case 0x2ccc98u: goto label_2ccc98;
        case 0x2ccc9cu: goto label_2ccc9c;
        case 0x2ccca0u: goto label_2ccca0;
        case 0x2ccca4u: goto label_2ccca4;
        case 0x2ccca8u: goto label_2ccca8;
        case 0x2cccacu: goto label_2cccac;
        case 0x2cccb0u: goto label_2cccb0;
        case 0x2cccb4u: goto label_2cccb4;
        case 0x2cccb8u: goto label_2cccb8;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccc0u: goto label_2cccc0;
        case 0x2cccc4u: goto label_2cccc4;
        case 0x2cccc8u: goto label_2cccc8;
        case 0x2cccccu: goto label_2ccccc;
        case 0x2cccd0u: goto label_2cccd0;
        case 0x2cccd4u: goto label_2cccd4;
        case 0x2cccd8u: goto label_2cccd8;
        case 0x2cccdcu: goto label_2cccdc;
        case 0x2ccce0u: goto label_2ccce0;
        case 0x2ccce4u: goto label_2ccce4;
        case 0x2ccce8u: goto label_2ccce8;
        case 0x2cccecu: goto label_2cccec;
        case 0x2cccf0u: goto label_2cccf0;
        case 0x2cccf4u: goto label_2cccf4;
        case 0x2cccf8u: goto label_2cccf8;
        case 0x2cccfcu: goto label_2cccfc;
        case 0x2ccd00u: goto label_2ccd00;
        case 0x2ccd04u: goto label_2ccd04;
        case 0x2ccd08u: goto label_2ccd08;
        case 0x2ccd0cu: goto label_2ccd0c;
        case 0x2ccd10u: goto label_2ccd10;
        default: break;
    }

    ctx->pc = 0x2cc880u;

label_2cc880:
    // 0x2cc880: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x2cc880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_2cc884:
    // 0x2cc884: 0x34215a60  ori         $at, $at, 0x5A60
    ctx->pc = 0x2cc884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23136);
label_2cc888:
    // 0x2cc888: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2cc888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2cc88c:
    // 0x2cc88c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2cc88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2cc890:
    // 0x2cc890: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2cc890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2cc894:
    // 0x2cc894: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2cc894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2cc898:
    // 0x2cc898: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2cc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2cc89c:
    // 0x2cc89c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cc89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2cc8a0:
    // 0x2cc8a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2cc8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2cc8a4:
    // 0x2cc8a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cc8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2cc8a8:
    // 0x2cc8a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cc8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2cc8ac:
    // 0x2cc8ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cc8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cc8b0:
    // 0x2cc8b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cc8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cc8b4:
    // 0x2cc8b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2cc8b8:
    // 0x2cc8b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2cc8bc:
    if (ctx->pc == 0x2CC8BCu) {
        ctx->pc = 0x2CC8BCu;
            // 0x2cc8bc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8C0u;
        goto label_2cc8c0;
    }
    ctx->pc = 0x2CC8B8u;
    {
        const bool branch_taken_0x2cc8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC8B8u;
            // 0x2cc8bc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8b8) {
            ctx->pc = 0x2CC8C8u;
            goto label_2cc8c8;
        }
    }
    ctx->pc = 0x2CC8C0u;
label_2cc8c0:
    // 0x2cc8c0: 0x10000107  b           . + 4 + (0x107 << 2)
label_2cc8c4:
    if (ctx->pc == 0x2CC8C4u) {
        ctx->pc = 0x2CC8C4u;
            // 0x2cc8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8C8u;
        goto label_2cc8c8;
    }
    ctx->pc = 0x2CC8C0u;
    {
        const bool branch_taken_0x2cc8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC8C0u;
            // 0x2cc8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8c0) {
            ctx->pc = 0x2CCCE0u;
            goto label_2ccce0;
        }
    }
    ctx->pc = 0x2CC8C8u;
label_2cc8c8:
    // 0x2cc8c8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2cc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_2cc8cc:
    // 0x2cc8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2cc8d0:
    // 0x2cc8d0: 0xaea20070  sw          $v0, 0x70($s5)
    ctx->pc = 0x2cc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
label_2cc8d4:
    // 0x2cc8d4: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2cc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_2cc8d8:
    // 0x2cc8d8: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x2cc8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
label_2cc8dc:
    // 0x2cc8dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2cc8e0:
    if (ctx->pc == 0x2CC8E0u) {
        ctx->pc = 0x2CC8E0u;
            // 0x2cc8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8E4u;
        goto label_2cc8e4;
    }
    ctx->pc = 0x2CC8DCu;
    {
        const bool branch_taken_0x2cc8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC8DCu;
            // 0x2cc8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8dc) {
            ctx->pc = 0x2CC8F4u;
            goto label_2cc8f4;
        }
    }
    ctx->pc = 0x2CC8E4u;
label_2cc8e4:
    // 0x2cc8e4: 0xc0b3414  jal         func_2CD050
label_2cc8e8:
    if (ctx->pc == 0x2CC8E8u) {
        ctx->pc = 0x2CC8ECu;
        goto label_2cc8ec;
    }
    ctx->pc = 0x2CC8E4u;
    SET_GPR_U32(ctx, 31, 0x2CC8ECu);
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC8ECu; }
        if (ctx->pc != 0x2CC8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC8ECu; }
        if (ctx->pc != 0x2CC8ECu) { return; }
    }
    ctx->pc = 0x2CC8ECu;
label_2cc8ec:
    // 0x2cc8ec: 0x100000fc  b           . + 4 + (0xFC << 2)
label_2cc8f0:
    if (ctx->pc == 0x2CC8F0u) {
        ctx->pc = 0x2CC8F0u;
            // 0x2cc8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CC8F4u;
        goto label_2cc8f4;
    }
    ctx->pc = 0x2CC8ECu;
    {
        const bool branch_taken_0x2cc8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC8ECu;
            // 0x2cc8f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8ec) {
            ctx->pc = 0x2CCCE0u;
            goto label_2ccce0;
        }
    }
    ctx->pc = 0x2CC8F4u;
label_2cc8f4:
    // 0x2cc8f4: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x2cc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc8f8:
    // 0x2cc8f8: 0x27be00b4  addiu       $fp, $sp, 0xB4
    ctx->pc = 0x2cc8f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_2cc8fc:
    // 0x2cc8fc: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x2cc8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc900:
    // 0x2cc900: 0x27b700b8  addiu       $s7, $sp, 0xB8
    ctx->pc = 0x2cc900u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2cc904:
    // 0x2cc904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cc908:
    // 0x2cc908: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2cc90c:
    // 0x2cc90c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2cc90cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc910:
    // 0x2cc910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc914:
    // 0x2cc914: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2cc914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2cc918:
    // 0x2cc918: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x2cc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc91c:
    // 0x2cc91c: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x2cc91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc920:
    // 0x2cc920: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc924:
    // 0x2cc924: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2cc924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_2cc928:
    // 0x2cc928: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x2cc928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc92c:
    // 0x2cc92c: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x2cc92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc930:
    // 0x2cc930: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc934:
    // 0x2cc934: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2cc934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_2cc938:
    // 0x2cc938: 0xc04bff4  jal         func_12FFD0
label_2cc93c:
    if (ctx->pc == 0x2CC93Cu) {
        ctx->pc = 0x2CC93Cu;
            // 0x2cc93c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->pc = 0x2CC940u;
        goto label_2cc940;
    }
    ctx->pc = 0x2CC938u;
    SET_GPR_U32(ctx, 31, 0x2CC940u);
    ctx->pc = 0x2CC93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC938u;
            // 0x2cc93c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC940u; }
        if (ctx->pc != 0x2CC940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC940u; }
        if (ctx->pc != 0x2CC940u) { return; }
    }
    ctx->pc = 0x2CC940u;
label_2cc940:
    // 0x2cc940: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2cc940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc944:
    // 0x2cc944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2cc944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2cc948:
    // 0x2cc948: 0xc059924  jal         func_166490
label_2cc94c:
    if (ctx->pc == 0x2CC94Cu) {
        ctx->pc = 0x2CC94Cu;
            // 0x2cc94c: 0x24a50210  addiu       $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
        ctx->pc = 0x2CC950u;
        goto label_2cc950;
    }
    ctx->pc = 0x2CC948u;
    SET_GPR_U32(ctx, 31, 0x2CC950u);
    ctx->pc = 0x2CC94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC948u;
            // 0x2cc94c: 0x24a50210  addiu       $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC950u; }
        if (ctx->pc != 0x2CC950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC950u; }
        if (ctx->pc != 0x2CC950u) { return; }
    }
    ctx->pc = 0x2CC950u;
label_2cc950:
    // 0x2cc950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cc954:
    if (ctx->pc == 0x2CC954u) {
        ctx->pc = 0x2CC958u;
        goto label_2cc958;
    }
    ctx->pc = 0x2CC950u;
    {
        const bool branch_taken_0x2cc950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc950) {
            ctx->pc = 0x2CC96Cu;
            goto label_2cc96c;
        }
    }
    ctx->pc = 0x2CC958u;
label_2cc958:
    // 0x2cc958: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cc95c:
    // 0x2cc95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc960:
    // 0x2cc960: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2cc960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2cc964:
    // 0x2cc964: 0x320f809  jalr        $t9
label_2cc968:
    if (ctx->pc == 0x2CC968u) {
        ctx->pc = 0x2CC968u;
            // 0x2cc968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC96Cu;
        goto label_2cc96c;
    }
    ctx->pc = 0x2CC964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC96Cu);
        ctx->pc = 0x2CC968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC964u;
            // 0x2cc968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC96Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC96Cu; }
            if (ctx->pc != 0x2CC96Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CC96Cu;
label_2cc96c:
    // 0x2cc96c: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2cc96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc970:
    // 0x2cc970: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2cc974:
    // 0x2cc974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cc978:
    // 0x2cc978: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cc978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cc97c:
    // 0x2cc97c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc97cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc980:
    // 0x2cc980: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2cc980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2cc984:
    // 0x2cc984: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2cc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc988:
    // 0x2cc988: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cc98c:
    // 0x2cc98c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2cc98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2cc990:
    // 0x2cc990: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x2cc990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc994:
    // 0x2cc994: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc998:
    // 0x2cc998: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2cc998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2cc99c:
    // 0x2cc99c: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x2cc99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc9a0:
    // 0x2cc9a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc9a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cc9a4:
    // 0x2cc9a4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2cc9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2cc9a8:
    // 0x2cc9a8: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x2cc9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc9ac:
    // 0x2cc9ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cc9b0:
    // 0x2cc9b0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2cc9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2cc9b4:
    // 0x2cc9b4: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x2cc9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc9b8:
    // 0x2cc9b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc9b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cc9bc:
    // 0x2cc9bc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2cc9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_2cc9c0:
    // 0x2cc9c0: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2cc9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_2cc9c4:
    // 0x2cc9c4: 0xc06421c  jal         func_190870
label_2cc9c8:
    if (ctx->pc == 0x2CC9C8u) {
        ctx->pc = 0x2CC9C8u;
            // 0x2cc9c8: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->pc = 0x2CC9CCu;
        goto label_2cc9cc;
    }
    ctx->pc = 0x2CC9C4u;
    SET_GPR_U32(ctx, 31, 0x2CC9CCu);
    ctx->pc = 0x2CC9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC9C4u;
            // 0x2cc9c8: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC9CCu; }
        if (ctx->pc != 0x2CC9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC9CCu; }
        if (ctx->pc != 0x2CC9CCu) { return; }
    }
    ctx->pc = 0x2CC9CCu;
label_2cc9cc:
    // 0x2cc9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc9d0:
    // 0x2cc9d0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2cc9d4:
    // 0x2cc9d4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2cc9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cc9d8:
    // 0x2cc9d8: 0xc0b1ed4  jal         func_2C7B50
label_2cc9dc:
    if (ctx->pc == 0x2CC9DCu) {
        ctx->pc = 0x2CC9DCu;
            // 0x2cc9dc: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2CC9E0u;
        goto label_2cc9e0;
    }
    ctx->pc = 0x2CC9D8u;
    SET_GPR_U32(ctx, 31, 0x2CC9E0u);
    ctx->pc = 0x2CC9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC9D8u;
            // 0x2cc9dc: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC9E0u; }
        if (ctx->pc != 0x2CC9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC9E0u; }
        if (ctx->pc != 0x2CC9E0u) { return; }
    }
    ctx->pc = 0x2CC9E0u;
label_2cc9e0:
    // 0x2cc9e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc9e4:
    // 0x2cc9e4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2cc9e8:
    // 0x2cc9e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc9ec:
    // 0x2cc9ec: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x2cc9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2cc9f0:
    // 0x2cc9f0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2cc9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2cc9f4:
    // 0x2cc9f4: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2cc9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2cc9f8:
    // 0x2cc9f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2cc9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc9fc:
    // 0x2cc9fc: 0xc053794  jal         func_14DE50
label_2cca00:
    if (ctx->pc == 0x2CCA00u) {
        ctx->pc = 0x2CCA00u;
            // 0x2cca00: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2CCA04u;
        goto label_2cca04;
    }
    ctx->pc = 0x2CC9FCu;
    SET_GPR_U32(ctx, 31, 0x2CCA04u);
    ctx->pc = 0x2CCA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC9FCu;
            // 0x2cca00: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA04u; }
        if (ctx->pc != 0x2CCA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA04u; }
        if (ctx->pc != 0x2CCA04u) { return; }
    }
    ctx->pc = 0x2CCA04u;
label_2cca04:
    // 0x2cca04: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2cca04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2cca08:
    // 0x2cca08: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_2cca0c:
    if (ctx->pc == 0x2CCA0Cu) {
        ctx->pc = 0x2CCA0Cu;
            // 0x2cca0c: 0x3401a110  ori         $at, $zero, 0xA110 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41232);
        ctx->pc = 0x2CCA10u;
        goto label_2cca10;
    }
    ctx->pc = 0x2CCA08u;
    {
        const bool branch_taken_0x2cca08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA08u;
            // 0x2cca0c: 0x3401a110  ori         $at, $zero, 0xA110 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca08) {
            ctx->pc = 0x2CCA64u;
            goto label_2cca64;
        }
    }
    ctx->pc = 0x2CCA10u;
label_2cca10:
    // 0x2cca10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cca14:
    // 0x2cca14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2cca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2cca18:
    // 0x2cca18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cca1c:
    // 0x2cca1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cca1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cca20:
    // 0x2cca20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cca20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2cca24:
    // 0x2cca24: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2cca28:
    // 0x2cca28: 0x24500140  addiu       $s0, $v0, 0x140
    ctx->pc = 0x2cca28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_2cca2c:
    // 0x2cca2c: 0xc041c5c  jal         func_107170
label_2cca30:
    if (ctx->pc == 0x2CCA30u) {
        ctx->pc = 0x2CCA30u;
            // 0x2cca30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA34u;
        goto label_2cca34;
    }
    ctx->pc = 0x2CCA2Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA34u);
    ctx->pc = 0x2CCA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA2Cu;
            // 0x2cca30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA34u; }
        if (ctx->pc != 0x2CCA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA34u; }
        if (ctx->pc != 0x2CCA34u) { return; }
    }
    ctx->pc = 0x2CCA34u;
label_2cca34:
    // 0x2cca34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cca38:
    // 0x2cca38: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2cca38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2cca3c:
    // 0x2cca3c: 0xc0b2f40  jal         func_2CBD00
label_2cca40:
    if (ctx->pc == 0x2CCA40u) {
        ctx->pc = 0x2CCA40u;
            // 0x2cca40: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2CCA44u;
        goto label_2cca44;
    }
    ctx->pc = 0x2CCA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA44u);
    ctx->pc = 0x2CCA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA3Cu;
            // 0x2cca40: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBD00u;
    if (runtime->hasFunction(0x2CBD00u)) {
        auto targetFn = runtime->lookupFunction(0x2CBD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA44u; }
        if (ctx->pc != 0x2CCA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcReflectionVector__FPfPfPf_0x2cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA44u; }
        if (ctx->pc != 0x2CCA44u) { return; }
    }
    ctx->pc = 0x2CCA44u;
label_2cca44:
    // 0x2cca44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2cca48:
    // 0x2cca48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2cca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2cca4c:
    // 0x2cca4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cca50:
    // 0x2cca50: 0xc041c4a  jal         func_107128
label_2cca54:
    if (ctx->pc == 0x2CCA54u) {
        ctx->pc = 0x2CCA54u;
            // 0x2cca54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA58u;
        goto label_2cca58;
    }
    ctx->pc = 0x2CCA50u;
    SET_GPR_U32(ctx, 31, 0x2CCA58u);
    ctx->pc = 0x2CCA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA50u;
            // 0x2cca54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA58u; }
        if (ctx->pc != 0x2CCA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA58u; }
        if (ctx->pc != 0x2CCA58u) { return; }
    }
    ctx->pc = 0x2CCA58u;
label_2cca58:
    // 0x2cca58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cca5c:
    // 0x2cca5c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2cca60:
    if (ctx->pc == 0x2CCA60u) {
        ctx->pc = 0x2CCA60u;
            // 0x2cca60: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->pc = 0x2CCA64u;
        goto label_2cca64;
    }
    ctx->pc = 0x2CCA5Cu;
    {
        const bool branch_taken_0x2cca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA5Cu;
            // 0x2cca60: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca5c) {
            ctx->pc = 0x2CCB54u;
            goto label_2ccb54;
        }
    }
    ctx->pc = 0x2CCA64u;
label_2cca64:
    // 0x2cca64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cca64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cca68:
    // 0x2cca68: 0x3a14821  addu        $t1, $sp, $at
    ctx->pc = 0x2cca68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2cca6c:
    // 0x2cca6c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2cca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2cca70:
    // 0x2cca70: 0x3401a190  ori         $at, $zero, 0xA190
    ctx->pc = 0x2cca70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41360);
label_2cca74:
    // 0x2cca74: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x2cca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2cca78:
    // 0x2cca78: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2cca78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2cca7c:
    // 0x2cca7c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2cca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2cca80:
    // 0x2cca80: 0x3a15021  addu        $t2, $sp, $at
    ctx->pc = 0x2cca80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2cca84:
    // 0x2cca84: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cca84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cca88:
    // 0x2cca88: 0xc0538ec  jal         func_14E3B0
label_2cca8c:
    if (ctx->pc == 0x2CCA8Cu) {
        ctx->pc = 0x2CCA8Cu;
            // 0x2cca8c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA90u;
        goto label_2cca90;
    }
    ctx->pc = 0x2CCA88u;
    SET_GPR_U32(ctx, 31, 0x2CCA90u);
    ctx->pc = 0x2CCA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA88u;
            // 0x2cca8c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA90u; }
        if (ctx->pc != 0x2CCA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA90u; }
        if (ctx->pc != 0x2CCA90u) { return; }
    }
    ctx->pc = 0x2CCA90u;
label_2cca90:
    // 0x2cca90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cca90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cca94:
    // 0x2cca94: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_2cca98:
    if (ctx->pc == 0x2CCA98u) {
        ctx->pc = 0x2CCA98u;
            // 0x2cca98: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x2CCA9Cu;
        goto label_2cca9c;
    }
    ctx->pc = 0x2CCA94u;
    {
        const bool branch_taken_0x2cca94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA94u;
            // 0x2cca98: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca94) {
            ctx->pc = 0x2CCB54u;
            goto label_2ccb54;
        }
    }
    ctx->pc = 0x2CCA9Cu;
label_2cca9c:
    // 0x2cca9c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_2ccaa0:
    if (ctx->pc == 0x2CCAA0u) {
        ctx->pc = 0x2CCAA0u;
            // 0x2ccaa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAA4u;
        goto label_2ccaa4;
    }
    ctx->pc = 0x2CCA9Cu;
    {
        const bool branch_taken_0x2cca9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA9Cu;
            // 0x2ccaa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca9c) {
            ctx->pc = 0x2CCB54u;
            goto label_2ccb54;
        }
    }
    ctx->pc = 0x2CCAA4u;
label_2ccaa4:
    // 0x2ccaa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ccaa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccaa8:
    // 0x2ccaa8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ccaa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccaac:
    // 0x2ccaac: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2ccaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2ccab0:
    // 0x2ccab0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ccab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2ccab4:
    // 0x2ccab4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2ccab4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2ccab8:
    // 0x2ccab8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ccab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ccabc:
    // 0x2ccabc: 0x8c24a110  lw          $a0, -0x5EF0($at)
    ctx->pc = 0x2ccabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942992)));
label_2ccac0:
    // 0x2ccac0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ccac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ccac4:
    // 0x2ccac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ccac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ccac8:
    // 0x2ccac8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ccac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2ccacc:
    // 0x2ccacc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ccaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2ccad0:
    // 0x2ccad0: 0x84630154  lh          $v1, 0x154($v1)
    ctx->pc = 0x2ccad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 340)));
label_2ccad4:
    // 0x2ccad4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ccad8:
    if (ctx->pc == 0x2CCAD8u) {
        ctx->pc = 0x2CCAD8u;
            // 0x2ccad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CCADCu;
        goto label_2ccadc;
    }
    ctx->pc = 0x2CCAD4u;
    {
        const bool branch_taken_0x2ccad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCAD4u;
            // 0x2ccad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccad4) {
            ctx->pc = 0x2CCAECu;
            goto label_2ccaec;
        }
    }
    ctx->pc = 0x2CCADCu;
label_2ccadc:
    // 0x2ccadc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2ccae0:
    if (ctx->pc == 0x2CCAE0u) {
        ctx->pc = 0x2CCAE4u;
        goto label_2ccae4;
    }
    ctx->pc = 0x2CCADCu;
    {
        const bool branch_taken_0x2ccadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ccadc) {
            ctx->pc = 0x2CCAECu;
            goto label_2ccaec;
        }
    }
    ctx->pc = 0x2CCAE4u;
label_2ccae4:
    // 0x2ccae4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2ccae8:
    if (ctx->pc == 0x2CCAE8u) {
        ctx->pc = 0x2CCAECu;
        goto label_2ccaec;
    }
    ctx->pc = 0x2CCAE4u;
    {
        const bool branch_taken_0x2ccae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccae4) {
            ctx->pc = 0x2CCB40u;
            goto label_2ccb40;
        }
    }
    ctx->pc = 0x2CCAECu;
label_2ccaec:
    // 0x2ccaec: 0x0  nop
    ctx->pc = 0x2ccaecu;
    // NOP
label_2ccaf0:
    // 0x2ccaf0: 0xc06421c  jal         func_190870
label_2ccaf4:
    if (ctx->pc == 0x2CCAF4u) {
        ctx->pc = 0x2CCAF8u;
        goto label_2ccaf8;
    }
    ctx->pc = 0x2CCAF0u;
    SET_GPR_U32(ctx, 31, 0x2CCAF8u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCAF8u; }
        if (ctx->pc != 0x2CCAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCAF8u; }
        if (ctx->pc != 0x2CCAF8u) { return; }
    }
    ctx->pc = 0x2CCAF8u;
label_2ccaf8:
    // 0x2ccaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccafc:
    // 0x2ccafc: 0xc0a1150  jal         func_284540
label_2ccb00:
    if (ctx->pc == 0x2CCB00u) {
        ctx->pc = 0x2CCB00u;
            // 0x2ccb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB04u;
        goto label_2ccb04;
    }
    ctx->pc = 0x2CCAFCu;
    SET_GPR_U32(ctx, 31, 0x2CCB04u);
    ctx->pc = 0x2CCB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCAFCu;
            // 0x2ccb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB04u; }
        if (ctx->pc != 0x2CCB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB04u; }
        if (ctx->pc != 0x2CCB04u) { return; }
    }
    ctx->pc = 0x2CCB04u;
label_2ccb04:
    // 0x2ccb04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ccb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccb08:
    // 0x2ccb08: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2ccb0c:
    if (ctx->pc == 0x2CCB0Cu) {
        ctx->pc = 0x2CCB0Cu;
            // 0x2ccb0c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2CCB10u;
        goto label_2ccb10;
    }
    ctx->pc = 0x2CCB08u;
    {
        const bool branch_taken_0x2ccb08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB08u;
            // 0x2ccb0c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb08) {
            ctx->pc = 0x2CCB40u;
            goto label_2ccb40;
        }
    }
    ctx->pc = 0x2CCB10u;
label_2ccb10:
    // 0x2ccb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ccb14:
    // 0x2ccb14: 0x24a501d8  addiu       $a1, $a1, 0x1D8
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 472));
label_2ccb18:
    // 0x2ccb18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ccb1c:
    // 0x2ccb1c: 0xc0b8498  jal         func_2E1260
label_2ccb20:
    if (ctx->pc == 0x2CCB20u) {
        ctx->pc = 0x2CCB20u;
            // 0x2ccb20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB24u;
        goto label_2ccb24;
    }
    ctx->pc = 0x2CCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB24u);
    ctx->pc = 0x2CCB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB1Cu;
            // 0x2ccb20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB24u; }
        if (ctx->pc != 0x2CCB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB24u; }
        if (ctx->pc != 0x2CCB24u) { return; }
    }
    ctx->pc = 0x2CCB24u;
label_2ccb24:
    // 0x2ccb24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ccb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ccb28:
    // 0x2ccb28: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_2ccb2c:
    // 0x2ccb2c: 0x3401a190  ori         $at, $zero, 0xA190
    ctx->pc = 0x2ccb2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41360);
label_2ccb30:
    // 0x2ccb30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ccb34:
    // 0x2ccb34: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x2ccb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2ccb38:
    // 0x2ccb38: 0xc0b8894  jal         func_2E2250
label_2ccb3c:
    if (ctx->pc == 0x2CCB3Cu) {
        ctx->pc = 0x2CCB3Cu;
            // 0x2ccb3c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB40u;
        goto label_2ccb40;
    }
    ctx->pc = 0x2CCB38u;
    SET_GPR_U32(ctx, 31, 0x2CCB40u);
    ctx->pc = 0x2CCB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB38u;
            // 0x2ccb3c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB40u; }
        if (ctx->pc != 0x2CCB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB40u; }
        if (ctx->pc != 0x2CCB40u) { return; }
    }
    ctx->pc = 0x2CCB40u;
label_2ccb40:
    // 0x2ccb40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ccb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ccb44:
    // 0x2ccb44: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2ccb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2ccb48:
    // 0x2ccb48: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2ccb48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2ccb4c:
    // 0x2ccb4c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_2ccb50:
    if (ctx->pc == 0x2CCB50u) {
        ctx->pc = 0x2CCB50u;
            // 0x2ccb50: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x2CCB54u;
        goto label_2ccb54;
    }
    ctx->pc = 0x2CCB4Cu;
    {
        const bool branch_taken_0x2ccb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCB4Cu;
            // 0x2ccb50: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb4c) {
            ctx->pc = 0x2CCAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ccaac;
        }
    }
    ctx->pc = 0x2CCB54u;
label_2ccb54:
    // 0x2ccb54: 0x0  nop
    ctx->pc = 0x2ccb54u;
    // NOP
label_2ccb58:
    // 0x2ccb58: 0x12c0001d  beqz        $s6, . + 4 + (0x1D << 2)
label_2ccb5c:
    if (ctx->pc == 0x2CCB5Cu) {
        ctx->pc = 0x2CCB60u;
        goto label_2ccb60;
    }
    ctx->pc = 0x2CCB58u;
    {
        const bool branch_taken_0x2ccb58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb58) {
            ctx->pc = 0x2CCBD0u;
            goto label_2ccbd0;
        }
    }
    ctx->pc = 0x2CCB60u;
label_2ccb60:
    // 0x2ccb60: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2ccb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccb64:
    // 0x2ccb64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ccb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ccb68:
    // 0x2ccb68: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x2ccb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_2ccb6c:
    // 0x2ccb6c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x2ccb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccb70:
    // 0x2ccb70: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x2ccb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
label_2ccb74:
    // 0x2ccb74: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2ccb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccb78:
    // 0x2ccb78: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x2ccb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
label_2ccb7c:
    // 0x2ccb7c: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x2ccb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
label_2ccb80:
    // 0x2ccb80: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x2ccb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccb84:
    // 0x2ccb84: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x2ccb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccb88:
    // 0x2ccb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ccb8c:
    // 0x2ccb8c: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x2ccb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
label_2ccb90:
    // 0x2ccb90: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x2ccb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccb94:
    // 0x2ccb94: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x2ccb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccb98:
    // 0x2ccb98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ccb9c:
    // 0x2ccb9c: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x2ccb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
label_2ccba0:
    // 0x2ccba0: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x2ccba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccba4:
    // 0x2ccba4: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x2ccba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccba8:
    // 0x2ccba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ccbac:
    // 0x2ccbac: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x2ccbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
label_2ccbb0:
    // 0x2ccbb0: 0xaea2002c  sw          $v0, 0x2C($s5)
    ctx->pc = 0x2ccbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
label_2ccbb4:
    // 0x2ccbb4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2ccbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ccbb8:
    // 0x2ccbb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccbbc:
    // 0x2ccbbc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ccbbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ccbc0:
    // 0x2ccbc0: 0x320f809  jalr        $t9
label_2ccbc4:
    if (ctx->pc == 0x2CCBC4u) {
        ctx->pc = 0x2CCBC4u;
            // 0x2ccbc4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x2CCBC8u;
        goto label_2ccbc8;
    }
    ctx->pc = 0x2CCBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCBC8u);
        ctx->pc = 0x2CCBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCBC0u;
            // 0x2ccbc4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCBC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCBC8u; }
            if (ctx->pc != 0x2CCBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCBC8u;
label_2ccbc8:
    // 0x2ccbc8: 0x10000045  b           . + 4 + (0x45 << 2)
label_2ccbcc:
    if (ctx->pc == 0x2CCBCCu) {
        ctx->pc = 0x2CCBCCu;
            // 0x2ccbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBD0u;
        goto label_2ccbd0;
    }
    ctx->pc = 0x2CCBC8u;
    {
        const bool branch_taken_0x2ccbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCBC8u;
            // 0x2ccbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbc8) {
            ctx->pc = 0x2CCCE0u;
            goto label_2ccce0;
        }
    }
    ctx->pc = 0x2CCBD0u;
label_2ccbd0:
    // 0x2ccbd0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2ccbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbd4:
    // 0x2ccbd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ccbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ccbd8:
    // 0x2ccbd8: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x2ccbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_2ccbdc:
    // 0x2ccbdc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ccbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbe0:
    // 0x2ccbe0: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x2ccbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
label_2ccbe4:
    // 0x2ccbe4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2ccbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbe8:
    // 0x2ccbe8: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x2ccbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
label_2ccbec:
    // 0x2ccbec: 0xc06421c  jal         func_190870
label_2ccbf0:
    if (ctx->pc == 0x2CCBF0u) {
        ctx->pc = 0x2CCBF0u;
            // 0x2ccbf0: 0xaea2001c  sw          $v0, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2CCBF4u;
        goto label_2ccbf4;
    }
    ctx->pc = 0x2CCBECu;
    SET_GPR_U32(ctx, 31, 0x2CCBF4u);
    ctx->pc = 0x2CCBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCBECu;
            // 0x2ccbf0: 0xaea2001c  sw          $v0, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCBF4u; }
        if (ctx->pc != 0x2CCBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCBF4u; }
        if (ctx->pc != 0x2CCBF4u) { return; }
    }
    ctx->pc = 0x2CCBF4u;
label_2ccbf4:
    // 0x2ccbf4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ccbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2ccbf8:
    // 0x2ccbf8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2ccbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2ccbfc:
    // 0x2ccbfc: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x2ccbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_2ccc00:
    // 0x2ccc00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ccc04:
    // 0x2ccc04: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x2ccc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_2ccc08:
    // 0x2ccc08: 0x8c23f434  lw          $v1, -0xBCC($at)
    ctx->pc = 0x2ccc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964276)));
label_2ccc0c:
    // 0x2ccc0c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2ccc10:
    if (ctx->pc == 0x2CCC10u) {
        ctx->pc = 0x2CCC10u;
            // 0x2ccc10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CCC14u;
        goto label_2ccc14;
    }
    ctx->pc = 0x2CCC0Cu;
    {
        const bool branch_taken_0x2ccc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC0Cu;
            // 0x2ccc10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc0c) {
            ctx->pc = 0x2CCC28u;
            goto label_2ccc28;
        }
    }
    ctx->pc = 0x2CCC14u;
label_2ccc14:
    // 0x2ccc14: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2ccc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2ccc18:
    // 0x2ccc18: 0xc063818  jal         func_18E060
label_2ccc1c:
    if (ctx->pc == 0x2CCC1Cu) {
        ctx->pc = 0x2CCC1Cu;
            // 0x2ccc1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC20u;
        goto label_2ccc20;
    }
    ctx->pc = 0x2CCC18u;
    SET_GPR_U32(ctx, 31, 0x2CCC20u);
    ctx->pc = 0x2CCC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC18u;
            // 0x2ccc1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC20u; }
        if (ctx->pc != 0x2CCC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC20u; }
        if (ctx->pc != 0x2CCC20u) { return; }
    }
    ctx->pc = 0x2CCC20u;
label_2ccc20:
    // 0x2ccc20: 0x1000000c  b           . + 4 + (0xC << 2)
label_2ccc24:
    if (ctx->pc == 0x2CCC24u) {
        ctx->pc = 0x2CCC28u;
        goto label_2ccc28;
    }
    ctx->pc = 0x2CCC20u;
    {
        const bool branch_taken_0x2ccc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc20) {
            ctx->pc = 0x2CCC54u;
            goto label_2ccc54;
        }
    }
    ctx->pc = 0x2CCC28u;
label_2ccc28:
    // 0x2ccc28: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2ccc2c:
    if (ctx->pc == 0x2CCC2Cu) {
        ctx->pc = 0x2CCC2Cu;
            // 0x2ccc2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2CCC30u;
        goto label_2ccc30;
    }
    ctx->pc = 0x2CCC28u;
    {
        const bool branch_taken_0x2ccc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC28u;
            // 0x2ccc2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc28) {
            ctx->pc = 0x2CCC44u;
            goto label_2ccc44;
        }
    }
    ctx->pc = 0x2CCC30u;
label_2ccc30:
    // 0x2ccc30: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2ccc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2ccc34:
    // 0x2ccc34: 0xc063818  jal         func_18E060
label_2ccc38:
    if (ctx->pc == 0x2CCC38u) {
        ctx->pc = 0x2CCC38u;
            // 0x2ccc38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC3Cu;
        goto label_2ccc3c;
    }
    ctx->pc = 0x2CCC34u;
    SET_GPR_U32(ctx, 31, 0x2CCC3Cu);
    ctx->pc = 0x2CCC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC34u;
            // 0x2ccc38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC3Cu; }
        if (ctx->pc != 0x2CCC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC3Cu; }
        if (ctx->pc != 0x2CCC3Cu) { return; }
    }
    ctx->pc = 0x2CCC3Cu;
label_2ccc3c:
    // 0x2ccc3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ccc40:
    if (ctx->pc == 0x2CCC40u) {
        ctx->pc = 0x2CCC44u;
        goto label_2ccc44;
    }
    ctx->pc = 0x2CCC3Cu;
    {
        const bool branch_taken_0x2ccc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc3c) {
            ctx->pc = 0x2CCC54u;
            goto label_2ccc54;
        }
    }
    ctx->pc = 0x2CCC44u;
label_2ccc44:
    // 0x2ccc44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2ccc48:
    if (ctx->pc == 0x2CCC48u) {
        ctx->pc = 0x2CCC48u;
            // 0x2ccc48: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x2CCC4Cu;
        goto label_2ccc4c;
    }
    ctx->pc = 0x2CCC44u;
    {
        const bool branch_taken_0x2ccc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC44u;
            // 0x2ccc48: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc44) {
            ctx->pc = 0x2CCC54u;
            goto label_2ccc54;
        }
    }
    ctx->pc = 0x2CCC4Cu;
label_2ccc4c:
    // 0x2ccc4c: 0xc063818  jal         func_18E060
label_2ccc50:
    if (ctx->pc == 0x2CCC50u) {
        ctx->pc = 0x2CCC50u;
            // 0x2ccc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC54u;
        goto label_2ccc54;
    }
    ctx->pc = 0x2CCC4Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC54u);
    ctx->pc = 0x2CCC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC4Cu;
            // 0x2ccc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC54u; }
        if (ctx->pc != 0x2CCC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC54u; }
        if (ctx->pc != 0x2CCC54u) { return; }
    }
    ctx->pc = 0x2CCC54u;
label_2ccc54:
    // 0x2ccc54: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2ccc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_2ccc58:
    // 0x2ccc58: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x2ccc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2ccc5c:
    // 0x2ccc5c: 0x2484f430  addiu       $a0, $a0, -0xBD0
    ctx->pc = 0x2ccc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
label_2ccc60:
    // 0x2ccc60: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2ccc64:
    // 0x2ccc64: 0xc0b30a0  jal         func_2CC280
label_2ccc68:
    if (ctx->pc == 0x2CCC68u) {
        ctx->pc = 0x2CCC68u;
            // 0x2ccc68: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2CCC6Cu;
        goto label_2ccc6c;
    }
    ctx->pc = 0x2CCC64u;
    SET_GPR_U32(ctx, 31, 0x2CCC6Cu);
    ctx->pc = 0x2CCC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC64u;
            // 0x2ccc68: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC280u;
    if (runtime->hasFunction(0x2CC280u)) {
        auto targetFn = runtime->lookupFunction(0x2CC280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC6Cu; }
        if (ctx->pc != 0x2CCC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clash__5CBPotFPfPfPf_0x2cc280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC6Cu; }
        if (ctx->pc != 0x2CCC6Cu) { return; }
    }
    ctx->pc = 0x2CCC6Cu;
label_2ccc6c:
    // 0x2ccc6c: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x2ccc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2ccc70:
    // 0x2ccc70: 0xc041c5c  jal         func_107170
label_2ccc74:
    if (ctx->pc == 0x2CCC74u) {
        ctx->pc = 0x2CCC74u;
            // 0x2ccc74: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x2CCC78u;
        goto label_2ccc78;
    }
    ctx->pc = 0x2CCC70u;
    SET_GPR_U32(ctx, 31, 0x2CCC78u);
    ctx->pc = 0x2CCC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC70u;
            // 0x2ccc74: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC78u; }
        if (ctx->pc != 0x2CCC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC78u; }
        if (ctx->pc != 0x2CCC78u) { return; }
    }
    ctx->pc = 0x2CCC78u;
label_2ccc78:
    // 0x2ccc78: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ccc7c:
    // 0x2ccc7c: 0x3401a590  ori         $at, $zero, 0xA590
    ctx->pc = 0x2ccc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42384);
label_2ccc80:
    // 0x2ccc80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ccc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ccc84:
    // 0x2ccc84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ccc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ccc88:
    // 0x2ccc88: 0x320f809  jalr        $t9
label_2ccc8c:
    if (ctx->pc == 0x2CCC8Cu) {
        ctx->pc = 0x2CCC8Cu;
            // 0x2ccc8c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2CCC90u;
        goto label_2ccc90;
    }
    ctx->pc = 0x2CCC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCC90u);
        ctx->pc = 0x2CCC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCC88u;
            // 0x2ccc8c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC90u; }
            if (ctx->pc != 0x2CCC90u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCC90u;
label_2ccc90:
    // 0x2ccc90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ccc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2ccc94:
    // 0x2ccc94: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2ccc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_2ccc98:
    // 0x2ccc98: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2ccc98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2ccc9c:
    // 0x2ccc9c: 0xc421a594  lwc1        $f1, -0x5A6C($at)
    ctx->pc = 0x2ccc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccca0:
    // 0x2ccca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ccca4:
    // 0x2ccca4: 0x3401a590  ori         $at, $zero, 0xA590
    ctx->pc = 0x2ccca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42384);
label_2ccca8:
    // 0x2ccca8: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2cccac:
    // 0x2cccac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2cccb0:
    // 0x2cccb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cccb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cccb4:
    // 0x2cccb4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2cccb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2cccb8:
    // 0x2cccb8: 0xe420a594  swc1        $f0, -0x5A6C($at)
    ctx->pc = 0x2cccb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294944148), bits); }
label_2cccbc:
    // 0x2cccbc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2cccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cccc0:
    // 0x2cccc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cccc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cccc4:
    // 0x2cccc4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cccc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cccc8:
    // 0x2cccc8: 0x320f809  jalr        $t9
label_2ccccc:
    if (ctx->pc == 0x2CCCCCu) {
        ctx->pc = 0x2CCCD0u;
        goto label_2cccd0;
    }
    ctx->pc = 0x2CCCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CCCD0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CCCD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CCCD0u; }
            if (ctx->pc != 0x2CCCD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CCCD0u;
label_2cccd0:
    // 0x2cccd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cccd4:
    // 0x2cccd4: 0xc0b3414  jal         func_2CD050
label_2cccd8:
    if (ctx->pc == 0x2CCCD8u) {
        ctx->pc = 0x2CCCD8u;
            // 0x2cccd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CCCDCu;
        goto label_2cccdc;
    }
    ctx->pc = 0x2CCCD4u;
    SET_GPR_U32(ctx, 31, 0x2CCCDCu);
    ctx->pc = 0x2CCCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCCD4u;
            // 0x2cccd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCCDCu; }
        if (ctx->pc != 0x2CCCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCCDCu; }
        if (ctx->pc != 0x2CCCDCu) { return; }
    }
    ctx->pc = 0x2CCCDCu;
label_2cccdc:
    // 0x2cccdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ccce0:
    // 0x2ccce0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ccce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ccce4:
    // 0x2ccce4: 0x3401a5a0  ori         $at, $zero, 0xA5A0
    ctx->pc = 0x2ccce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42400);
label_2ccce8:
    // 0x2ccce8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ccce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cccec:
    // 0x2cccec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2cccecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cccf0:
    // 0x2cccf0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cccf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cccf4:
    // 0x2cccf4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cccf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cccf8:
    // 0x2cccf8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cccf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cccfc:
    // 0x2cccfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cccfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ccd00:
    // 0x2ccd00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ccd00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ccd04:
    // 0x2ccd04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ccd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ccd08:
    // 0x2ccd08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ccd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ccd0c:
    // 0x2ccd0c: 0x3e00008  jr          $ra
label_2ccd10:
    if (ctx->pc == 0x2CCD10u) {
        ctx->pc = 0x2CCD10u;
            // 0x2ccd10: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x2CCD14u;
        goto label_fallthrough_0x2ccd0c;
    }
    ctx->pc = 0x2CCD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCD0Cu;
            // 0x2ccd10: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ccd0c:
    ctx->pc = 0x2CCD14u;
}
