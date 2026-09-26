#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepVillager__6CSceneFv
// Address: 0x2ca880 - 0x2cacc4
void StepVillager__6CSceneFv_0x2ca880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepVillager__6CSceneFv_0x2ca880");
#endif

    switch (ctx->pc) {
        case 0x2ca880u: goto label_2ca880;
        case 0x2ca884u: goto label_2ca884;
        case 0x2ca888u: goto label_2ca888;
        case 0x2ca88cu: goto label_2ca88c;
        case 0x2ca890u: goto label_2ca890;
        case 0x2ca894u: goto label_2ca894;
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca89cu: goto label_2ca89c;
        case 0x2ca8a0u: goto label_2ca8a0;
        case 0x2ca8a4u: goto label_2ca8a4;
        case 0x2ca8a8u: goto label_2ca8a8;
        case 0x2ca8acu: goto label_2ca8ac;
        case 0x2ca8b0u: goto label_2ca8b0;
        case 0x2ca8b4u: goto label_2ca8b4;
        case 0x2ca8b8u: goto label_2ca8b8;
        case 0x2ca8bcu: goto label_2ca8bc;
        case 0x2ca8c0u: goto label_2ca8c0;
        case 0x2ca8c4u: goto label_2ca8c4;
        case 0x2ca8c8u: goto label_2ca8c8;
        case 0x2ca8ccu: goto label_2ca8cc;
        case 0x2ca8d0u: goto label_2ca8d0;
        case 0x2ca8d4u: goto label_2ca8d4;
        case 0x2ca8d8u: goto label_2ca8d8;
        case 0x2ca8dcu: goto label_2ca8dc;
        case 0x2ca8e0u: goto label_2ca8e0;
        case 0x2ca8e4u: goto label_2ca8e4;
        case 0x2ca8e8u: goto label_2ca8e8;
        case 0x2ca8ecu: goto label_2ca8ec;
        case 0x2ca8f0u: goto label_2ca8f0;
        case 0x2ca8f4u: goto label_2ca8f4;
        case 0x2ca8f8u: goto label_2ca8f8;
        case 0x2ca8fcu: goto label_2ca8fc;
        case 0x2ca900u: goto label_2ca900;
        case 0x2ca904u: goto label_2ca904;
        case 0x2ca908u: goto label_2ca908;
        case 0x2ca90cu: goto label_2ca90c;
        case 0x2ca910u: goto label_2ca910;
        case 0x2ca914u: goto label_2ca914;
        case 0x2ca918u: goto label_2ca918;
        case 0x2ca91cu: goto label_2ca91c;
        case 0x2ca920u: goto label_2ca920;
        case 0x2ca924u: goto label_2ca924;
        case 0x2ca928u: goto label_2ca928;
        case 0x2ca92cu: goto label_2ca92c;
        case 0x2ca930u: goto label_2ca930;
        case 0x2ca934u: goto label_2ca934;
        case 0x2ca938u: goto label_2ca938;
        case 0x2ca93cu: goto label_2ca93c;
        case 0x2ca940u: goto label_2ca940;
        case 0x2ca944u: goto label_2ca944;
        case 0x2ca948u: goto label_2ca948;
        case 0x2ca94cu: goto label_2ca94c;
        case 0x2ca950u: goto label_2ca950;
        case 0x2ca954u: goto label_2ca954;
        case 0x2ca958u: goto label_2ca958;
        case 0x2ca95cu: goto label_2ca95c;
        case 0x2ca960u: goto label_2ca960;
        case 0x2ca964u: goto label_2ca964;
        case 0x2ca968u: goto label_2ca968;
        case 0x2ca96cu: goto label_2ca96c;
        case 0x2ca970u: goto label_2ca970;
        case 0x2ca974u: goto label_2ca974;
        case 0x2ca978u: goto label_2ca978;
        case 0x2ca97cu: goto label_2ca97c;
        case 0x2ca980u: goto label_2ca980;
        case 0x2ca984u: goto label_2ca984;
        case 0x2ca988u: goto label_2ca988;
        case 0x2ca98cu: goto label_2ca98c;
        case 0x2ca990u: goto label_2ca990;
        case 0x2ca994u: goto label_2ca994;
        case 0x2ca998u: goto label_2ca998;
        case 0x2ca99cu: goto label_2ca99c;
        case 0x2ca9a0u: goto label_2ca9a0;
        case 0x2ca9a4u: goto label_2ca9a4;
        case 0x2ca9a8u: goto label_2ca9a8;
        case 0x2ca9acu: goto label_2ca9ac;
        case 0x2ca9b0u: goto label_2ca9b0;
        case 0x2ca9b4u: goto label_2ca9b4;
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2ca9bcu: goto label_2ca9bc;
        case 0x2ca9c0u: goto label_2ca9c0;
        case 0x2ca9c4u: goto label_2ca9c4;
        case 0x2ca9c8u: goto label_2ca9c8;
        case 0x2ca9ccu: goto label_2ca9cc;
        case 0x2ca9d0u: goto label_2ca9d0;
        case 0x2ca9d4u: goto label_2ca9d4;
        case 0x2ca9d8u: goto label_2ca9d8;
        case 0x2ca9dcu: goto label_2ca9dc;
        case 0x2ca9e0u: goto label_2ca9e0;
        case 0x2ca9e4u: goto label_2ca9e4;
        case 0x2ca9e8u: goto label_2ca9e8;
        case 0x2ca9ecu: goto label_2ca9ec;
        case 0x2ca9f0u: goto label_2ca9f0;
        case 0x2ca9f4u: goto label_2ca9f4;
        case 0x2ca9f8u: goto label_2ca9f8;
        case 0x2ca9fcu: goto label_2ca9fc;
        case 0x2caa00u: goto label_2caa00;
        case 0x2caa04u: goto label_2caa04;
        case 0x2caa08u: goto label_2caa08;
        case 0x2caa0cu: goto label_2caa0c;
        case 0x2caa10u: goto label_2caa10;
        case 0x2caa14u: goto label_2caa14;
        case 0x2caa18u: goto label_2caa18;
        case 0x2caa1cu: goto label_2caa1c;
        case 0x2caa20u: goto label_2caa20;
        case 0x2caa24u: goto label_2caa24;
        case 0x2caa28u: goto label_2caa28;
        case 0x2caa2cu: goto label_2caa2c;
        case 0x2caa30u: goto label_2caa30;
        case 0x2caa34u: goto label_2caa34;
        case 0x2caa38u: goto label_2caa38;
        case 0x2caa3cu: goto label_2caa3c;
        case 0x2caa40u: goto label_2caa40;
        case 0x2caa44u: goto label_2caa44;
        case 0x2caa48u: goto label_2caa48;
        case 0x2caa4cu: goto label_2caa4c;
        case 0x2caa50u: goto label_2caa50;
        case 0x2caa54u: goto label_2caa54;
        case 0x2caa58u: goto label_2caa58;
        case 0x2caa5cu: goto label_2caa5c;
        case 0x2caa60u: goto label_2caa60;
        case 0x2caa64u: goto label_2caa64;
        case 0x2caa68u: goto label_2caa68;
        case 0x2caa6cu: goto label_2caa6c;
        case 0x2caa70u: goto label_2caa70;
        case 0x2caa74u: goto label_2caa74;
        case 0x2caa78u: goto label_2caa78;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caa80u: goto label_2caa80;
        case 0x2caa84u: goto label_2caa84;
        case 0x2caa88u: goto label_2caa88;
        case 0x2caa8cu: goto label_2caa8c;
        case 0x2caa90u: goto label_2caa90;
        case 0x2caa94u: goto label_2caa94;
        case 0x2caa98u: goto label_2caa98;
        case 0x2caa9cu: goto label_2caa9c;
        case 0x2caaa0u: goto label_2caaa0;
        case 0x2caaa4u: goto label_2caaa4;
        case 0x2caaa8u: goto label_2caaa8;
        case 0x2caaacu: goto label_2caaac;
        case 0x2caab0u: goto label_2caab0;
        case 0x2caab4u: goto label_2caab4;
        case 0x2caab8u: goto label_2caab8;
        case 0x2caabcu: goto label_2caabc;
        case 0x2caac0u: goto label_2caac0;
        case 0x2caac4u: goto label_2caac4;
        case 0x2caac8u: goto label_2caac8;
        case 0x2caaccu: goto label_2caacc;
        case 0x2caad0u: goto label_2caad0;
        case 0x2caad4u: goto label_2caad4;
        case 0x2caad8u: goto label_2caad8;
        case 0x2caadcu: goto label_2caadc;
        case 0x2caae0u: goto label_2caae0;
        case 0x2caae4u: goto label_2caae4;
        case 0x2caae8u: goto label_2caae8;
        case 0x2caaecu: goto label_2caaec;
        case 0x2caaf0u: goto label_2caaf0;
        case 0x2caaf4u: goto label_2caaf4;
        case 0x2caaf8u: goto label_2caaf8;
        case 0x2caafcu: goto label_2caafc;
        case 0x2cab00u: goto label_2cab00;
        case 0x2cab04u: goto label_2cab04;
        case 0x2cab08u: goto label_2cab08;
        case 0x2cab0cu: goto label_2cab0c;
        case 0x2cab10u: goto label_2cab10;
        case 0x2cab14u: goto label_2cab14;
        case 0x2cab18u: goto label_2cab18;
        case 0x2cab1cu: goto label_2cab1c;
        case 0x2cab20u: goto label_2cab20;
        case 0x2cab24u: goto label_2cab24;
        case 0x2cab28u: goto label_2cab28;
        case 0x2cab2cu: goto label_2cab2c;
        case 0x2cab30u: goto label_2cab30;
        case 0x2cab34u: goto label_2cab34;
        case 0x2cab38u: goto label_2cab38;
        case 0x2cab3cu: goto label_2cab3c;
        case 0x2cab40u: goto label_2cab40;
        case 0x2cab44u: goto label_2cab44;
        case 0x2cab48u: goto label_2cab48;
        case 0x2cab4cu: goto label_2cab4c;
        case 0x2cab50u: goto label_2cab50;
        case 0x2cab54u: goto label_2cab54;
        case 0x2cab58u: goto label_2cab58;
        case 0x2cab5cu: goto label_2cab5c;
        case 0x2cab60u: goto label_2cab60;
        case 0x2cab64u: goto label_2cab64;
        case 0x2cab68u: goto label_2cab68;
        case 0x2cab6cu: goto label_2cab6c;
        case 0x2cab70u: goto label_2cab70;
        case 0x2cab74u: goto label_2cab74;
        case 0x2cab78u: goto label_2cab78;
        case 0x2cab7cu: goto label_2cab7c;
        case 0x2cab80u: goto label_2cab80;
        case 0x2cab84u: goto label_2cab84;
        case 0x2cab88u: goto label_2cab88;
        case 0x2cab8cu: goto label_2cab8c;
        case 0x2cab90u: goto label_2cab90;
        case 0x2cab94u: goto label_2cab94;
        case 0x2cab98u: goto label_2cab98;
        case 0x2cab9cu: goto label_2cab9c;
        case 0x2caba0u: goto label_2caba0;
        case 0x2caba4u: goto label_2caba4;
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabacu: goto label_2cabac;
        case 0x2cabb0u: goto label_2cabb0;
        case 0x2cabb4u: goto label_2cabb4;
        case 0x2cabb8u: goto label_2cabb8;
        case 0x2cabbcu: goto label_2cabbc;
        case 0x2cabc0u: goto label_2cabc0;
        case 0x2cabc4u: goto label_2cabc4;
        case 0x2cabc8u: goto label_2cabc8;
        case 0x2cabccu: goto label_2cabcc;
        case 0x2cabd0u: goto label_2cabd0;
        case 0x2cabd4u: goto label_2cabd4;
        case 0x2cabd8u: goto label_2cabd8;
        case 0x2cabdcu: goto label_2cabdc;
        case 0x2cabe0u: goto label_2cabe0;
        case 0x2cabe4u: goto label_2cabe4;
        case 0x2cabe8u: goto label_2cabe8;
        case 0x2cabecu: goto label_2cabec;
        case 0x2cabf0u: goto label_2cabf0;
        case 0x2cabf4u: goto label_2cabf4;
        case 0x2cabf8u: goto label_2cabf8;
        case 0x2cabfcu: goto label_2cabfc;
        case 0x2cac00u: goto label_2cac00;
        case 0x2cac04u: goto label_2cac04;
        case 0x2cac08u: goto label_2cac08;
        case 0x2cac0cu: goto label_2cac0c;
        case 0x2cac10u: goto label_2cac10;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac18u: goto label_2cac18;
        case 0x2cac1cu: goto label_2cac1c;
        case 0x2cac20u: goto label_2cac20;
        case 0x2cac24u: goto label_2cac24;
        case 0x2cac28u: goto label_2cac28;
        case 0x2cac2cu: goto label_2cac2c;
        case 0x2cac30u: goto label_2cac30;
        case 0x2cac34u: goto label_2cac34;
        case 0x2cac38u: goto label_2cac38;
        case 0x2cac3cu: goto label_2cac3c;
        case 0x2cac40u: goto label_2cac40;
        case 0x2cac44u: goto label_2cac44;
        case 0x2cac48u: goto label_2cac48;
        case 0x2cac4cu: goto label_2cac4c;
        case 0x2cac50u: goto label_2cac50;
        case 0x2cac54u: goto label_2cac54;
        case 0x2cac58u: goto label_2cac58;
        case 0x2cac5cu: goto label_2cac5c;
        case 0x2cac60u: goto label_2cac60;
        case 0x2cac64u: goto label_2cac64;
        case 0x2cac68u: goto label_2cac68;
        case 0x2cac6cu: goto label_2cac6c;
        case 0x2cac70u: goto label_2cac70;
        case 0x2cac74u: goto label_2cac74;
        case 0x2cac78u: goto label_2cac78;
        case 0x2cac7cu: goto label_2cac7c;
        case 0x2cac80u: goto label_2cac80;
        case 0x2cac84u: goto label_2cac84;
        case 0x2cac88u: goto label_2cac88;
        case 0x2cac8cu: goto label_2cac8c;
        case 0x2cac90u: goto label_2cac90;
        case 0x2cac94u: goto label_2cac94;
        case 0x2cac98u: goto label_2cac98;
        case 0x2cac9cu: goto label_2cac9c;
        case 0x2caca0u: goto label_2caca0;
        case 0x2caca4u: goto label_2caca4;
        case 0x2caca8u: goto label_2caca8;
        case 0x2cacacu: goto label_2cacac;
        case 0x2cacb0u: goto label_2cacb0;
        case 0x2cacb4u: goto label_2cacb4;
        case 0x2cacb8u: goto label_2cacb8;
        case 0x2cacbcu: goto label_2cacbc;
        case 0x2cacc0u: goto label_2cacc0;
        default: break;
    }

    ctx->pc = 0x2ca880u;

label_2ca880:
    // 0x2ca880: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2ca880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2ca884:
    // 0x2ca884: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ca884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2ca888:
    // 0x2ca888: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ca888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ca88c:
    // 0x2ca88c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ca88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ca890:
    // 0x2ca890: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ca890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ca894:
    // 0x2ca894: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ca894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ca898:
    // 0x2ca898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ca898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ca89c:
    // 0x2ca89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ca8a0:
    // 0x2ca8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca8a4:
    // 0x2ca8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ca8a8:
    // 0x2ca8a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8ac:
    // 0x2ca8ac: 0xc0b356c  jal         func_2CD5B0
label_2ca8b0:
    if (ctx->pc == 0x2CA8B0u) {
        ctx->pc = 0x2CA8B0u;
            // 0x2ca8b0: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->pc = 0x2CA8B4u;
        goto label_2ca8b4;
    }
    ctx->pc = 0x2CA8ACu;
    SET_GPR_U32(ctx, 31, 0x2CA8B4u);
    ctx->pc = 0x2CA8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA8ACu;
            // 0x2ca8b0: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD5B0u;
    if (runtime->hasFunction(0x2CD5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2CD5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8B4u; }
        if (ctx->pc != 0x2CA8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CVillagerMngrFv_0x2cd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8B4u; }
        if (ctx->pc != 0x2CA8B4u) { return; }
    }
    ctx->pc = 0x2CA8B4u;
label_2ca8b4:
    // 0x2ca8b4: 0x8e173054  lw          $s7, 0x3054($s0)
    ctx->pc = 0x2ca8b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12372)));
label_2ca8b8:
    // 0x2ca8b8: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2ca8b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2ca8bc:
    // 0x2ca8bc: 0x102000f6  beqz        $at, . + 4 + (0xF6 << 2)
label_2ca8c0:
    if (ctx->pc == 0x2CA8C0u) {
        ctx->pc = 0x2CA8C0u;
            // 0x2ca8c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8C4u;
        goto label_2ca8c4;
    }
    ctx->pc = 0x2CA8BCu;
    {
        const bool branch_taken_0x2ca8bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA8BCu;
            // 0x2ca8c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8bc) {
            ctx->pc = 0x2CAC98u;
            goto label_2cac98;
        }
    }
    ctx->pc = 0x2CA8C4u;
label_2ca8c4:
    // 0x2ca8c4: 0x26043050  addiu       $a0, $s0, 0x3050
    ctx->pc = 0x2ca8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
label_2ca8c8:
    // 0x2ca8c8: 0xc0b34a4  jal         func_2CD290
label_2ca8cc:
    if (ctx->pc == 0x2CA8CCu) {
        ctx->pc = 0x2CA8CCu;
            // 0x2ca8cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8D0u;
        goto label_2ca8d0;
    }
    ctx->pc = 0x2CA8C8u;
    SET_GPR_U32(ctx, 31, 0x2CA8D0u);
    ctx->pc = 0x2CA8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA8C8u;
            // 0x2ca8cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8D0u; }
        if (ctx->pc != 0x2CA8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA8D0u; }
        if (ctx->pc != 0x2CA8D0u) { return; }
    }
    ctx->pc = 0x2CA8D0u;
label_2ca8d0:
    // 0x2ca8d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca8d4:
    // 0x2ca8d4: 0x124000eb  beqz        $s2, . + 4 + (0xEB << 2)
label_2ca8d8:
    if (ctx->pc == 0x2CA8D8u) {
        ctx->pc = 0x2CA8DCu;
        goto label_2ca8dc;
    }
    ctx->pc = 0x2CA8D4u;
    {
        const bool branch_taken_0x2ca8d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8d4) {
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CA8DCu;
label_2ca8dc:
    // 0x2ca8dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2ca8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ca8e0:
    // 0x2ca8e0: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x2ca8e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2ca8e4:
    // 0x2ca8e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2ca8e8:
    if (ctx->pc == 0x2CA8E8u) {
        ctx->pc = 0x2CA8ECu;
        goto label_2ca8ec;
    }
    ctx->pc = 0x2CA8E4u;
    {
        const bool branch_taken_0x2ca8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8e4) {
            ctx->pc = 0x2CA8F8u;
            goto label_2ca8f8;
        }
    }
    ctx->pc = 0x2CA8ECu;
label_2ca8ec:
    // 0x2ca8ec: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ca8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ca8f0:
    // 0x2ca8f0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ca8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ca8f4:
    // 0x2ca8f4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ca8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2ca8f8:
    // 0x2ca8f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ca8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ca8fc:
    // 0x2ca8fc: 0x146000e1  bnez        $v1, . + 4 + (0xE1 << 2)
label_2ca900:
    if (ctx->pc == 0x2CA900u) {
        ctx->pc = 0x2CA904u;
        goto label_2ca904;
    }
    ctx->pc = 0x2CA8FCu;
    {
        const bool branch_taken_0x2ca8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8fc) {
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CA904u;
label_2ca904:
    // 0x2ca904: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ca904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ca908:
    // 0x2ca908: 0x106000de  beqz        $v1, . + 4 + (0xDE << 2)
label_2ca90c:
    if (ctx->pc == 0x2CA90Cu) {
        ctx->pc = 0x2CA910u;
        goto label_2ca910;
    }
    ctx->pc = 0x2CA908u;
    {
        const bool branch_taken_0x2ca908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca908) {
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CA910u;
label_2ca910:
    // 0x2ca910: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ca910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ca914:
    // 0x2ca914: 0xc0a0ed8  jal         func_283B60
label_2ca918:
    if (ctx->pc == 0x2CA918u) {
        ctx->pc = 0x2CA918u;
            // 0x2ca918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA91Cu;
        goto label_2ca91c;
    }
    ctx->pc = 0x2CA914u;
    SET_GPR_U32(ctx, 31, 0x2CA91Cu);
    ctx->pc = 0x2CA918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA914u;
            // 0x2ca918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA91Cu; }
        if (ctx->pc != 0x2CA91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA91Cu; }
        if (ctx->pc != 0x2CA91Cu) { return; }
    }
    ctx->pc = 0x2CA91Cu;
label_2ca91c:
    // 0x2ca91c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca920:
    // 0x2ca920: 0x126000d8  beqz        $s3, . + 4 + (0xD8 << 2)
label_2ca924:
    if (ctx->pc == 0x2CA924u) {
        ctx->pc = 0x2CA928u;
        goto label_2ca928;
    }
    ctx->pc = 0x2CA920u;
    {
        const bool branch_taken_0x2ca920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca920) {
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CA928u;
label_2ca928:
    // 0x2ca928: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2ca928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2ca92c:
    // 0x2ca92c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ca930:
    if (ctx->pc == 0x2CA930u) {
        ctx->pc = 0x2CA934u;
        goto label_2ca934;
    }
    ctx->pc = 0x2CA92Cu;
    {
        const bool branch_taken_0x2ca92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca92c) {
            ctx->pc = 0x2CA950u;
            goto label_2ca950;
        }
    }
    ctx->pc = 0x2CA934u;
label_2ca934:
    // 0x2ca934: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ca934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ca938:
    // 0x2ca938: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x2ca938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_2ca93c:
    // 0x2ca93c: 0x320f809  jalr        $t9
label_2ca940:
    if (ctx->pc == 0x2CA940u) {
        ctx->pc = 0x2CA940u;
            // 0x2ca940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA944u;
        goto label_2ca944;
    }
    ctx->pc = 0x2CA93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA944u);
        ctx->pc = 0x2CA940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA93Cu;
            // 0x2ca940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA944u; }
            if (ctx->pc != 0x2CA944u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA944u;
label_2ca944:
    // 0x2ca944: 0xc0b29dc  jal         func_2CA770
label_2ca948:
    if (ctx->pc == 0x2CA948u) {
        ctx->pc = 0x2CA948u;
            // 0x2ca948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA94Cu;
        goto label_2ca94c;
    }
    ctx->pc = 0x2CA944u;
    SET_GPR_U32(ctx, 31, 0x2CA94Cu);
    ctx->pc = 0x2CA948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA944u;
            // 0x2ca948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA770u;
    if (runtime->hasFunction(0x2CA770u)) {
        auto targetFn = runtime->lookupFunction(0x2CA770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA94Cu; }
        if (ctx->pc != 0x2CA94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionID__FPc_0x2ca770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA94Cu; }
        if (ctx->pc != 0x2CA94Cu) { return; }
    }
    ctx->pc = 0x2CA94Cu;
label_2ca94c:
    // 0x2ca94c: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2ca94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_2ca950:
    // 0x2ca950: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2ca950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ca954:
    // 0x2ca954: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ca954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2ca958:
    // 0x2ca958: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
label_2ca95c:
    if (ctx->pc == 0x2CA95Cu) {
        ctx->pc = 0x2CA960u;
        goto label_2ca960;
    }
    ctx->pc = 0x2CA958u;
    {
        const bool branch_taken_0x2ca958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca958) {
            ctx->pc = 0x2CAAA0u;
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CA960u;
label_2ca960:
    // 0x2ca960: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2ca960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2ca964:
    // 0x2ca964: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
label_2ca968:
    if (ctx->pc == 0x2CA968u) {
        ctx->pc = 0x2CA96Cu;
        goto label_2ca96c;
    }
    ctx->pc = 0x2CA964u;
    {
        const bool branch_taken_0x2ca964 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca964) {
            ctx->pc = 0x2CAAA0u;
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CA96Cu;
label_2ca96c:
    // 0x2ca96c: 0x8e750070  lw          $s5, 0x70($s3)
    ctx->pc = 0x2ca96cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2ca970:
    // 0x2ca970: 0x12a0004b  beqz        $s5, . + 4 + (0x4B << 2)
label_2ca974:
    if (ctx->pc == 0x2CA974u) {
        ctx->pc = 0x2CA974u;
            // 0x2ca974: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2CA978u;
        goto label_2ca978;
    }
    ctx->pc = 0x2CA970u;
    {
        const bool branch_taken_0x2ca970 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA970u;
            // 0x2ca974: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca970) {
            ctx->pc = 0x2CAAA0u;
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CA978u;
label_2ca978:
    // 0x2ca978: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca97c:
    // 0x2ca97c: 0xc04ddb4  jal         func_1376D0
label_2ca980:
    if (ctx->pc == 0x2CA980u) {
        ctx->pc = 0x2CA980u;
            // 0x2ca980: 0x24a50108  addiu       $a1, $a1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
        ctx->pc = 0x2CA984u;
        goto label_2ca984;
    }
    ctx->pc = 0x2CA97Cu;
    SET_GPR_U32(ctx, 31, 0x2CA984u);
    ctx->pc = 0x2CA980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA97Cu;
            // 0x2ca980: 0x24a50108  addiu       $a1, $a1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA984u; }
        if (ctx->pc != 0x2CA984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA984u; }
        if (ctx->pc != 0x2CA984u) { return; }
    }
    ctx->pc = 0x2CA984u;
label_2ca984:
    // 0x2ca984: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ca984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ca988:
    // 0x2ca988: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ca988u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca98c:
    // 0x2ca98c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca990:
    // 0x2ca990: 0xc04ddb4  jal         func_1376D0
label_2ca994:
    if (ctx->pc == 0x2CA994u) {
        ctx->pc = 0x2CA994u;
            // 0x2ca994: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->pc = 0x2CA998u;
        goto label_2ca998;
    }
    ctx->pc = 0x2CA990u;
    SET_GPR_U32(ctx, 31, 0x2CA998u);
    ctx->pc = 0x2CA994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA990u;
            // 0x2ca994: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA998u; }
        if (ctx->pc != 0x2CA998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA998u; }
        if (ctx->pc != 0x2CA998u) { return; }
    }
    ctx->pc = 0x2CA998u;
label_2ca998:
    // 0x2ca998: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ca998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ca99c:
    // 0x2ca99c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ca99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca9a0:
    // 0x2ca9a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca9a4:
    // 0x2ca9a4: 0xc04ddb4  jal         func_1376D0
label_2ca9a8:
    if (ctx->pc == 0x2CA9A8u) {
        ctx->pc = 0x2CA9A8u;
            // 0x2ca9a8: 0x24a50118  addiu       $a1, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->pc = 0x2CA9ACu;
        goto label_2ca9ac;
    }
    ctx->pc = 0x2CA9A4u;
    SET_GPR_U32(ctx, 31, 0x2CA9ACu);
    ctx->pc = 0x2CA9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA9A4u;
            // 0x2ca9a8: 0x24a50118  addiu       $a1, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9ACu; }
        if (ctx->pc != 0x2CA9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9ACu; }
        if (ctx->pc != 0x2CA9ACu) { return; }
    }
    ctx->pc = 0x2CA9ACu;
label_2ca9ac:
    // 0x2ca9ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ca9b0:
    // 0x2ca9b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ca9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ca9b4:
    // 0x2ca9b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ca9b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca9b8:
    // 0x2ca9b8: 0xc04ddb4  jal         func_1376D0
label_2ca9bc:
    if (ctx->pc == 0x2CA9BCu) {
        ctx->pc = 0x2CA9BCu;
            // 0x2ca9bc: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->pc = 0x2CA9C0u;
        goto label_2ca9c0;
    }
    ctx->pc = 0x2CA9B8u;
    SET_GPR_U32(ctx, 31, 0x2CA9C0u);
    ctx->pc = 0x2CA9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA9B8u;
            // 0x2ca9bc: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9C0u; }
        if (ctx->pc != 0x2CA9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA9C0u; }
        if (ctx->pc != 0x2CA9C0u) { return; }
    }
    ctx->pc = 0x2CA9C0u;
label_2ca9c0:
    // 0x2ca9c0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2ca9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2ca9c4:
    // 0x2ca9c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca9c8:
    // 0x2ca9c8: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_2ca9cc:
    if (ctx->pc == 0x2CA9CCu) {
        ctx->pc = 0x2CA9D0u;
        goto label_2ca9d0;
    }
    ctx->pc = 0x2CA9C8u;
    {
        const bool branch_taken_0x2ca9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ca9c8) {
            ctx->pc = 0x2CAA30u;
            goto label_2caa30;
        }
    }
    ctx->pc = 0x2CA9D0u;
label_2ca9d0:
    // 0x2ca9d0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2ca9d4:
    if (ctx->pc == 0x2CA9D4u) {
        ctx->pc = 0x2CA9D8u;
        goto label_2ca9d8;
    }
    ctx->pc = 0x2CA9D0u;
    {
        const bool branch_taken_0x2ca9d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9d0) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2CA9D8u;
label_2ca9d8:
    // 0x2ca9d8: 0x8ec300f4  lw          $v1, 0xF4($s6)
    ctx->pc = 0x2ca9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_2ca9dc:
    // 0x2ca9dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2ca9e0:
    if (ctx->pc == 0x2CA9E0u) {
        ctx->pc = 0x2CA9E4u;
        goto label_2ca9e4;
    }
    ctx->pc = 0x2CA9DCu;
    {
        const bool branch_taken_0x2ca9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9dc) {
            ctx->pc = 0x2CA9E8u;
            goto label_2ca9e8;
        }
    }
    ctx->pc = 0x2CA9E4u;
label_2ca9e4:
    // 0x2ca9e4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2ca9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2ca9e8:
    // 0x2ca9e8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2ca9ec:
    if (ctx->pc == 0x2CA9ECu) {
        ctx->pc = 0x2CA9F0u;
        goto label_2ca9f0;
    }
    ctx->pc = 0x2CA9E8u;
    {
        const bool branch_taken_0x2ca9e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9e8) {
            ctx->pc = 0x2CAA00u;
            goto label_2caa00;
        }
    }
    ctx->pc = 0x2CA9F0u;
label_2ca9f0:
    // 0x2ca9f0: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x2ca9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_2ca9f4:
    // 0x2ca9f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2ca9f8:
    if (ctx->pc == 0x2CA9F8u) {
        ctx->pc = 0x2CA9FCu;
        goto label_2ca9fc;
    }
    ctx->pc = 0x2CA9F4u;
    {
        const bool branch_taken_0x2ca9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca9f4) {
            ctx->pc = 0x2CAA00u;
            goto label_2caa00;
        }
    }
    ctx->pc = 0x2CA9FCu;
label_2ca9fc:
    // 0x2ca9fc: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2ca9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2caa00:
    // 0x2caa00: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2caa04:
    if (ctx->pc == 0x2CAA04u) {
        ctx->pc = 0x2CAA08u;
        goto label_2caa08;
    }
    ctx->pc = 0x2CAA00u;
    {
        const bool branch_taken_0x2caa00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa00) {
            ctx->pc = 0x2CAA18u;
            goto label_2caa18;
        }
    }
    ctx->pc = 0x2CAA08u;
label_2caa08:
    // 0x2caa08: 0x8ea400f4  lw          $a0, 0xF4($s5)
    ctx->pc = 0x2caa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2caa0c:
    // 0x2caa0c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_2caa10:
    if (ctx->pc == 0x2CAA10u) {
        ctx->pc = 0x2CAA10u;
            // 0x2caa10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAA14u;
        goto label_2caa14;
    }
    ctx->pc = 0x2CAA0Cu;
    {
        const bool branch_taken_0x2caa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA0Cu;
            // 0x2caa10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa0c) {
            ctx->pc = 0x2CAA18u;
            goto label_2caa18;
        }
    }
    ctx->pc = 0x2CAA14u;
label_2caa14:
    // 0x2caa14: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2caa14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2caa18:
    // 0x2caa18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2caa1c:
    if (ctx->pc == 0x2CAA1Cu) {
        ctx->pc = 0x2CAA20u;
        goto label_2caa20;
    }
    ctx->pc = 0x2CAA18u;
    {
        const bool branch_taken_0x2caa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa18) {
            ctx->pc = 0x2CAA30u;
            goto label_2caa30;
        }
    }
    ctx->pc = 0x2CAA20u;
label_2caa20:
    // 0x2caa20: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x2caa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2caa24:
    // 0x2caa24: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_2caa28:
    if (ctx->pc == 0x2CAA28u) {
        ctx->pc = 0x2CAA28u;
            // 0x2caa28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAA2Cu;
        goto label_2caa2c;
    }
    ctx->pc = 0x2CAA24u;
    {
        const bool branch_taken_0x2caa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA24u;
            // 0x2caa28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa24) {
            ctx->pc = 0x2CAA30u;
            goto label_2caa30;
        }
    }
    ctx->pc = 0x2CAA2Cu;
label_2caa2c:
    // 0x2caa2c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2caa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2caa30:
    // 0x2caa30: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2caa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2caa34:
    // 0x2caa34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2caa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2caa38:
    // 0x2caa38: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_2caa3c:
    if (ctx->pc == 0x2CAA3Cu) {
        ctx->pc = 0x2CAA40u;
        goto label_2caa40;
    }
    ctx->pc = 0x2CAA38u;
    {
        const bool branch_taken_0x2caa38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2caa38) {
            ctx->pc = 0x2CAAA0u;
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CAA40u;
label_2caa40:
    // 0x2caa40: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2caa44:
    if (ctx->pc == 0x2CAA44u) {
        ctx->pc = 0x2CAA48u;
        goto label_2caa48;
    }
    ctx->pc = 0x2CAA40u;
    {
        const bool branch_taken_0x2caa40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa40) {
            ctx->pc = 0x2CAA58u;
            goto label_2caa58;
        }
    }
    ctx->pc = 0x2CAA48u;
label_2caa48:
    // 0x2caa48: 0x8ec400f4  lw          $a0, 0xF4($s6)
    ctx->pc = 0x2caa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_2caa4c:
    // 0x2caa4c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_2caa50:
    if (ctx->pc == 0x2CAA50u) {
        ctx->pc = 0x2CAA50u;
            // 0x2caa50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAA54u;
        goto label_2caa54;
    }
    ctx->pc = 0x2CAA4Cu;
    {
        const bool branch_taken_0x2caa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA4Cu;
            // 0x2caa50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa4c) {
            ctx->pc = 0x2CAA58u;
            goto label_2caa58;
        }
    }
    ctx->pc = 0x2CAA54u;
label_2caa54:
    // 0x2caa54: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2caa54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2caa58:
    // 0x2caa58: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2caa5c:
    if (ctx->pc == 0x2CAA5Cu) {
        ctx->pc = 0x2CAA60u;
        goto label_2caa60;
    }
    ctx->pc = 0x2CAA58u;
    {
        const bool branch_taken_0x2caa58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa58) {
            ctx->pc = 0x2CAA70u;
            goto label_2caa70;
        }
    }
    ctx->pc = 0x2CAA60u;
label_2caa60:
    // 0x2caa60: 0x8e8400f4  lw          $a0, 0xF4($s4)
    ctx->pc = 0x2caa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_2caa64:
    // 0x2caa64: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_2caa68:
    if (ctx->pc == 0x2CAA68u) {
        ctx->pc = 0x2CAA68u;
            // 0x2caa68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAA6Cu;
        goto label_2caa6c;
    }
    ctx->pc = 0x2CAA64u;
    {
        const bool branch_taken_0x2caa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAA64u;
            // 0x2caa68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa64) {
            ctx->pc = 0x2CAA70u;
            goto label_2caa70;
        }
    }
    ctx->pc = 0x2CAA6Cu;
label_2caa6c:
    // 0x2caa6c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2caa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2caa70:
    // 0x2caa70: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2caa74:
    if (ctx->pc == 0x2CAA74u) {
        ctx->pc = 0x2CAA78u;
        goto label_2caa78;
    }
    ctx->pc = 0x2CAA70u;
    {
        const bool branch_taken_0x2caa70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa70) {
            ctx->pc = 0x2CAA88u;
            goto label_2caa88;
        }
    }
    ctx->pc = 0x2CAA78u;
label_2caa78:
    // 0x2caa78: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x2caa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2caa7c:
    // 0x2caa7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2caa80:
    if (ctx->pc == 0x2CAA80u) {
        ctx->pc = 0x2CAA84u;
        goto label_2caa84;
    }
    ctx->pc = 0x2CAA7Cu;
    {
        const bool branch_taken_0x2caa7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa7c) {
            ctx->pc = 0x2CAA88u;
            goto label_2caa88;
        }
    }
    ctx->pc = 0x2CAA84u;
label_2caa84:
    // 0x2caa84: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2caa84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2caa88:
    // 0x2caa88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2caa8c:
    if (ctx->pc == 0x2CAA8Cu) {
        ctx->pc = 0x2CAA90u;
        goto label_2caa90;
    }
    ctx->pc = 0x2CAA88u;
    {
        const bool branch_taken_0x2caa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa88) {
            ctx->pc = 0x2CAAA0u;
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CAA90u;
label_2caa90:
    // 0x2caa90: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2caa94:
    // 0x2caa94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2caa98:
    if (ctx->pc == 0x2CAA98u) {
        ctx->pc = 0x2CAA9Cu;
        goto label_2caa9c;
    }
    ctx->pc = 0x2CAA94u;
    {
        const bool branch_taken_0x2caa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa94) {
            ctx->pc = 0x2CAAA0u;
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CAA9Cu;
label_2caa9c:
    // 0x2caa9c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2caa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2caaa0:
    // 0x2caaa0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2caaa4:
    // 0x2caaa4: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2caaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2caaa8:
    // 0x2caaa8: 0x320f809  jalr        $t9
label_2caaac:
    if (ctx->pc == 0x2CAAACu) {
        ctx->pc = 0x2CAAACu;
            // 0x2caaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAB0u;
        goto label_2caab0;
    }
    ctx->pc = 0x2CAAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAAB0u);
        ctx->pc = 0x2CAAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAA8u;
            // 0x2caaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAB0u; }
            if (ctx->pc != 0x2CAAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAAB0u;
label_2caab0:
    // 0x2caab0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x2caab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_2caab4:
    // 0x2caab4: 0x26043050  addiu       $a0, $s0, 0x3050
    ctx->pc = 0x2caab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
label_2caab8:
    // 0x2caab8: 0xc0b3550  jal         func_2CD540
label_2caabc:
    if (ctx->pc == 0x2CAABCu) {
        ctx->pc = 0x2CAABCu;
            // 0x2caabc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAC0u;
        goto label_2caac0;
    }
    ctx->pc = 0x2CAAB8u;
    SET_GPR_U32(ctx, 31, 0x2CAAC0u);
    ctx->pc = 0x2CAABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAB8u;
            // 0x2caabc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD540u;
    if (runtime->hasFunction(0x2CD540u)) {
        auto targetFn = runtime->lookupFunction(0x2CD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAC0u; }
        if (ctx->pc != 0x2CAAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStay__13CVillagerMngrFi_0x2cd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAC0u; }
        if (ctx->pc != 0x2CAAC0u) { return; }
    }
    ctx->pc = 0x2CAAC0u;
label_2caac0:
    // 0x2caac0: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
label_2caac4:
    if (ctx->pc == 0x2CAAC4u) {
        ctx->pc = 0x2CAAC8u;
        goto label_2caac8;
    }
    ctx->pc = 0x2CAAC0u;
    {
        const bool branch_taken_0x2caac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caac0) {
            ctx->pc = 0x2CAC84u;
            goto label_2cac84;
        }
    }
    ctx->pc = 0x2CAAC8u;
label_2caac8:
    // 0x2caac8: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x2caac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2caacc:
    // 0x2caacc: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_2caad0:
    if (ctx->pc == 0x2CAAD0u) {
        ctx->pc = 0x2CAAD4u;
        goto label_2caad4;
    }
    ctx->pc = 0x2CAACCu;
    {
        const bool branch_taken_0x2caacc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2caacc) {
            ctx->pc = 0x2CAAECu;
            goto label_2caaec;
        }
    }
    ctx->pc = 0x2CAAD4u;
label_2caad4:
    // 0x2caad4: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x2caad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2caad8:
    // 0x2caad8: 0xc0b29fc  jal         func_2CA7F0
label_2caadc:
    if (ctx->pc == 0x2CAADCu) {
        ctx->pc = 0x2CAADCu;
            // 0x2caadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAE0u;
        goto label_2caae0;
    }
    ctx->pc = 0x2CAAD8u;
    SET_GPR_U32(ctx, 31, 0x2CAAE0u);
    ctx->pc = 0x2CAADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAD8u;
            // 0x2caadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7F0u;
    if (runtime->hasFunction(0x2CA7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAE0u; }
        if (ctx->pc != 0x2CAAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaMotion__FP11CCharacter2ii_0x2ca7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAE0u; }
        if (ctx->pc != 0x2CAAE0u) { return; }
    }
    ctx->pc = 0x2CAAE0u;
label_2caae0:
    // 0x2caae0: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2caae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_2caae4:
    // 0x2caae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2caae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2caae8:
    // 0x2caae8: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2caae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2caaec:
    // 0x2caaec: 0x0  nop
    ctx->pc = 0x2caaecu;
    // NOP
label_2caaf0:
    // 0x2caaf0: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x2caaf0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_2caaf4:
    // 0x2caaf4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2caaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2caaf8:
    // 0x2caaf8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2caaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2caafc:
    // 0x2caafc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2caafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2cab00:
    // 0x2cab00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2cab04:
    if (ctx->pc == 0x2CAB04u) {
        ctx->pc = 0x2CAB04u;
            // 0x2cab04: 0x8e140038  lw          $s4, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x2CAB08u;
        goto label_2cab08;
    }
    ctx->pc = 0x2CAB00u;
    {
        const bool branch_taken_0x2cab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB00u;
            // 0x2cab04: 0x8e140038  lw          $s4, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab00) {
            ctx->pc = 0x2CAB28u;
            goto label_2cab28;
        }
    }
    ctx->pc = 0x2CAB08u;
label_2cab08:
    // 0x2cab08: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2cab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2cab0c:
    // 0x2cab0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cab10:
    if (ctx->pc == 0x2CAB10u) {
        ctx->pc = 0x2CAB14u;
        goto label_2cab14;
    }
    ctx->pc = 0x2CAB0Cu;
    {
        const bool branch_taken_0x2cab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab0c) {
            ctx->pc = 0x2CAB28u;
            goto label_2cab28;
        }
    }
    ctx->pc = 0x2CAB14u;
label_2cab14:
    // 0x2cab14: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2cab14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cab18:
    // 0x2cab18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cab1c:
    // 0x2cab1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cab20:
    // 0x2cab20: 0xc0a11d0  jal         func_284740
label_2cab24:
    if (ctx->pc == 0x2CAB24u) {
        ctx->pc = 0x2CAB24u;
            // 0x2cab24: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2CAB28u;
        goto label_2cab28;
    }
    ctx->pc = 0x2CAB20u;
    SET_GPR_U32(ctx, 31, 0x2CAB28u);
    ctx->pc = 0x2CAB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB20u;
            // 0x2cab24: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB28u; }
        if (ctx->pc != 0x2CAB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB28u; }
        if (ctx->pc != 0x2CAB28u) { return; }
    }
    ctx->pc = 0x2CAB28u;
label_2cab28:
    // 0x2cab28: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
label_2cab2c:
    if (ctx->pc == 0x2CAB2Cu) {
        ctx->pc = 0x2CAB30u;
        goto label_2cab30;
    }
    ctx->pc = 0x2CAB28u;
    {
        const bool branch_taken_0x2cab28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab28) {
            ctx->pc = 0x2CAC14u;
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CAB30u;
label_2cab30:
    // 0x2cab30: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2cab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2cab34:
    // 0x2cab34: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2cab38:
    if (ctx->pc == 0x2CAB38u) {
        ctx->pc = 0x2CAB3Cu;
        goto label_2cab3c;
    }
    ctx->pc = 0x2CAB34u;
    {
        const bool branch_taken_0x2cab34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab34) {
            ctx->pc = 0x2CAC14u;
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CAB3Cu;
label_2cab3c:
    // 0x2cab3c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2cab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2cab40:
    // 0x2cab40: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2cab44:
    if (ctx->pc == 0x2CAB44u) {
        ctx->pc = 0x2CAB44u;
            // 0x2cab44: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2CAB48u;
        goto label_2cab48;
    }
    ctx->pc = 0x2CAB40u;
    {
        const bool branch_taken_0x2cab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB40u;
            // 0x2cab44: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab40) {
            ctx->pc = 0x2CAC14u;
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CAB48u;
label_2cab48:
    // 0x2cab48: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2cab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2cab4c:
    // 0x2cab4c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2cab4cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2cab50:
    // 0x2cab50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cab54:
    // 0x2cab54: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2cab54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2cab58:
    // 0x2cab58: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2cab58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_2cab5c:
    // 0x2cab5c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2cab60:
    // 0x2cab60: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2cab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cab64:
    // 0x2cab64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cab64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cab68:
    // 0x2cab68: 0x0  nop
    ctx->pc = 0x2cab68u;
    // NOP
label_2cab6c:
    // 0x2cab6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cab6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cab70:
    // 0x2cab70: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2cab70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2cab74:
    // 0x2cab74: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x2cab74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_2cab78:
    // 0x2cab78: 0xc04e748  jal         func_139D20
label_2cab7c:
    if (ctx->pc == 0x2CAB7Cu) {
        ctx->pc = 0x2CAB7Cu;
            // 0x2cab7c: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2CAB80u;
        goto label_2cab80;
    }
    ctx->pc = 0x2CAB78u;
    SET_GPR_U32(ctx, 31, 0x2CAB80u);
    ctx->pc = 0x2CAB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB78u;
            // 0x2cab7c: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB80u; }
        if (ctx->pc != 0x2CAB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB80u; }
        if (ctx->pc != 0x2CAB80u) { return; }
    }
    ctx->pc = 0x2CAB80u;
label_2cab80:
    // 0x2cab80: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2cab80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cab84:
    // 0x2cab84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cab84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cab88:
    // 0x2cab88: 0x79490000  lq          $t1, 0x0($t2)
    ctx->pc = 0x2cab88u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_2cab8c:
    // 0x2cab8c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2cab8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2cab90:
    // 0x2cab90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2cab94:
    // 0x2cab94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2cab98:
    // 0x2cab98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cab9c:
    // 0x2cab9c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2caba0:
    // 0x2caba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2caba4:
    // 0x2caba4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2caba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2caba8:
    // 0x2caba8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2caba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2cabac:
    // 0x2cabac: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x2cabacu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
label_2cabb0:
    // 0x2cabb0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2cabb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cabb4:
    // 0x2cabb4: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2cabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_2cabb8:
    // 0x2cabb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cabb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2cabbc:
    // 0x2cabbc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2cabbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2cabc0:
    // 0x2cabc0: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x2cabc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_2cabc4:
    // 0x2cabc4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2cabc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_2cabc8:
    // 0x2cabc8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2cabc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cabcc:
    // 0x2cabcc: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2cabccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_2cabd0:
    // 0x2cabd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cabd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cabd4:
    // 0x2cabd4: 0xc0b1ed4  jal         func_2C7B50
label_2cabd8:
    if (ctx->pc == 0x2CABD8u) {
        ctx->pc = 0x2CABD8u;
            // 0x2cabd8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x2CABDCu;
        goto label_2cabdc;
    }
    ctx->pc = 0x2CABD4u;
    SET_GPR_U32(ctx, 31, 0x2CABDCu);
    ctx->pc = 0x2CABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABD4u;
            // 0x2cabd8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABDCu; }
        if (ctx->pc != 0x2CABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABDCu; }
        if (ctx->pc != 0x2CABDCu) { return; }
    }
    ctx->pc = 0x2CABDCu;
label_2cabdc:
    // 0x2cabdc: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_2cabe0:
    if (ctx->pc == 0x2CABE0u) {
        ctx->pc = 0x2CABE0u;
            // 0x2cabe0: 0x3c03c348  lui         $v1, 0xC348 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
        ctx->pc = 0x2CABE4u;
        goto label_2cabe4;
    }
    ctx->pc = 0x2CABDCu;
    {
        const bool branch_taken_0x2cabdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABDCu;
            // 0x2cabe0: 0x3c03c348  lui         $v1, 0xC348 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabdc) {
            ctx->pc = 0x2CAC14u;
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CABE4u;
label_2cabe4:
    // 0x2cabe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cabe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cabe8:
    // 0x2cabe8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2cabe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cabec:
    // 0x2cabec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cabecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cabf0:
    // 0x2cabf0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2cabf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2cabf4:
    // 0x2cabf4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2cabf8:
    // 0x2cabf8: 0xc053870  jal         func_14E1C0
label_2cabfc:
    if (ctx->pc == 0x2CABFCu) {
        ctx->pc = 0x2CABFCu;
            // 0x2cabfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC00u;
        goto label_2cac00;
    }
    ctx->pc = 0x2CABF8u;
    SET_GPR_U32(ctx, 31, 0x2CAC00u);
    ctx->pc = 0x2CABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABF8u;
            // 0x2cabfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1C0u;
    if (runtime->hasFunction(0x14E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC00u; }
        if (ctx->pc != 0x2CAC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC00u; }
        if (ctx->pc != 0x2CAC00u) { return; }
    }
    ctx->pc = 0x2CAC00u;
label_2cac00:
    // 0x2cac00: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2cac04:
    if (ctx->pc == 0x2CAC04u) {
        ctx->pc = 0x2CAC04u;
            // 0x2cac04: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2CAC08u;
        goto label_2cac08;
    }
    ctx->pc = 0x2CAC00u;
    {
        const bool branch_taken_0x2cac00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CAC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC00u;
            // 0x2cac04: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac00) {
            ctx->pc = 0x2CAC14u;
            goto label_2cac14;
        }
    }
    ctx->pc = 0x2CAC08u;
label_2cac08:
    // 0x2cac08: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cac0c:
    // 0x2cac0c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2cac0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cac10:
    // 0x2cac10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2cac10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2cac14:
    // 0x2cac14: 0x0  nop
    ctx->pc = 0x2cac14u;
    // NOP
label_2cac18:
    // 0x2cac18: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2cac18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cac1c:
    // 0x2cac1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cac20:
    // 0x2cac20: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cac20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cac24:
    // 0x2cac24: 0x320f809  jalr        $t9
label_2cac28:
    if (ctx->pc == 0x2CAC28u) {
        ctx->pc = 0x2CAC28u;
            // 0x2cac28: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2CAC2Cu;
        goto label_2cac2c;
    }
    ctx->pc = 0x2CAC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAC2Cu);
        ctx->pc = 0x2CAC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC24u;
            // 0x2cac28: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAC2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC2Cu; }
            if (ctx->pc != 0x2CAC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CAC2Cu;
label_2cac2c:
    // 0x2cac2c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2cac2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cac30:
    // 0x2cac30: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x2cac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_2cac34:
    // 0x2cac34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2cac34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2cac38:
    // 0x2cac38: 0x320f809  jalr        $t9
label_2cac3c:
    if (ctx->pc == 0x2CAC3Cu) {
        ctx->pc = 0x2CAC3Cu;
            // 0x2cac3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC40u;
        goto label_2cac40;
    }
    ctx->pc = 0x2CAC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAC40u);
        ctx->pc = 0x2CAC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC38u;
            // 0x2cac3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAC40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC40u; }
            if (ctx->pc != 0x2CAC40u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAC40u;
label_2cac40:
    // 0x2cac40: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2cac40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cac44:
    // 0x2cac44: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_2cac48:
    // 0x2cac48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cac48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cac4c:
    // 0x2cac4c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2cac4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2cac50:
    // 0x2cac50: 0x320f809  jalr        $t9
label_2cac54:
    if (ctx->pc == 0x2CAC54u) {
        ctx->pc = 0x2CAC54u;
            // 0x2cac54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC58u;
        goto label_2cac58;
    }
    ctx->pc = 0x2CAC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAC58u);
        ctx->pc = 0x2CAC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC50u;
            // 0x2cac54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAC58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC58u; }
            if (ctx->pc != 0x2CAC58u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAC58u;
label_2cac58:
    // 0x2cac58: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2cac58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cac5c:
    // 0x2cac5c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2cac60:
    // 0x2cac60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cac60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cac64:
    // 0x2cac64: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x2cac64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_2cac68:
    // 0x2cac68: 0x320f809  jalr        $t9
label_2cac6c:
    if (ctx->pc == 0x2CAC6Cu) {
        ctx->pc = 0x2CAC6Cu;
            // 0x2cac6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC70u;
        goto label_2cac70;
    }
    ctx->pc = 0x2CAC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAC70u);
        ctx->pc = 0x2CAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC68u;
            // 0x2cac6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAC70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC70u; }
            if (ctx->pc != 0x2CAC70u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAC70u;
label_2cac70:
    // 0x2cac70: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2cac70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cac74:
    // 0x2cac74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cac78:
    // 0x2cac78: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x2cac78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_2cac7c:
    // 0x2cac7c: 0x320f809  jalr        $t9
label_2cac80:
    if (ctx->pc == 0x2CAC80u) {
        ctx->pc = 0x2CAC80u;
            // 0x2cac80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CAC84u;
        goto label_2cac84;
    }
    ctx->pc = 0x2CAC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAC84u);
        ctx->pc = 0x2CAC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC7Cu;
            // 0x2cac80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAC84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC84u; }
            if (ctx->pc != 0x2CAC84u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAC84u;
label_2cac84:
    // 0x2cac84: 0x0  nop
    ctx->pc = 0x2cac84u;
    // NOP
label_2cac88:
    // 0x2cac88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cac88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cac8c:
    // 0x2cac8c: 0x237182a  slt         $v1, $s1, $s7
    ctx->pc = 0x2cac8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2cac90:
    // 0x2cac90: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
label_2cac94:
    if (ctx->pc == 0x2CAC94u) {
        ctx->pc = 0x2CAC94u;
            // 0x2cac94: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->pc = 0x2CAC98u;
        goto label_2cac98;
    }
    ctx->pc = 0x2CAC90u;
    {
        const bool branch_taken_0x2cac90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC90u;
            // 0x2cac94: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac90) {
            ctx->pc = 0x2CA8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca8c8;
        }
    }
    ctx->pc = 0x2CAC98u;
label_2cac98:
    // 0x2cac98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2cac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2cac9c:
    // 0x2cac9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cac9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2caca0:
    // 0x2caca0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2caca0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2caca4:
    // 0x2caca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2caca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2caca8:
    // 0x2caca8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2caca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cacac:
    // 0x2cacac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cacacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cacb0:
    // 0x2cacb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cacb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cacb4:
    // 0x2cacb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cacb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cacb8:
    // 0x2cacb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cacb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cacbc:
    // 0x2cacbc: 0x3e00008  jr          $ra
label_2cacc0:
    if (ctx->pc == 0x2CACC0u) {
        ctx->pc = 0x2CACC0u;
            // 0x2cacc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2CACC4u;
        goto label_fallthrough_0x2cacbc;
    }
    ctx->pc = 0x2CACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CACBCu;
            // 0x2cacc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cacbc:
    ctx->pc = 0x2CACC4u;
}
