#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ModelReadEndCheck__13CMenuItemInfoFv
// Address: 0x24caa0 - 0x24cf6c
void ModelReadEndCheck__13CMenuItemInfoFv_0x24caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelReadEndCheck__13CMenuItemInfoFv_0x24caa0");
#endif

    switch (ctx->pc) {
        case 0x24caa0u: goto label_24caa0;
        case 0x24caa4u: goto label_24caa4;
        case 0x24caa8u: goto label_24caa8;
        case 0x24caacu: goto label_24caac;
        case 0x24cab0u: goto label_24cab0;
        case 0x24cab4u: goto label_24cab4;
        case 0x24cab8u: goto label_24cab8;
        case 0x24cabcu: goto label_24cabc;
        case 0x24cac0u: goto label_24cac0;
        case 0x24cac4u: goto label_24cac4;
        case 0x24cac8u: goto label_24cac8;
        case 0x24caccu: goto label_24cacc;
        case 0x24cad0u: goto label_24cad0;
        case 0x24cad4u: goto label_24cad4;
        case 0x24cad8u: goto label_24cad8;
        case 0x24cadcu: goto label_24cadc;
        case 0x24cae0u: goto label_24cae0;
        case 0x24cae4u: goto label_24cae4;
        case 0x24cae8u: goto label_24cae8;
        case 0x24caecu: goto label_24caec;
        case 0x24caf0u: goto label_24caf0;
        case 0x24caf4u: goto label_24caf4;
        case 0x24caf8u: goto label_24caf8;
        case 0x24cafcu: goto label_24cafc;
        case 0x24cb00u: goto label_24cb00;
        case 0x24cb04u: goto label_24cb04;
        case 0x24cb08u: goto label_24cb08;
        case 0x24cb0cu: goto label_24cb0c;
        case 0x24cb10u: goto label_24cb10;
        case 0x24cb14u: goto label_24cb14;
        case 0x24cb18u: goto label_24cb18;
        case 0x24cb1cu: goto label_24cb1c;
        case 0x24cb20u: goto label_24cb20;
        case 0x24cb24u: goto label_24cb24;
        case 0x24cb28u: goto label_24cb28;
        case 0x24cb2cu: goto label_24cb2c;
        case 0x24cb30u: goto label_24cb30;
        case 0x24cb34u: goto label_24cb34;
        case 0x24cb38u: goto label_24cb38;
        case 0x24cb3cu: goto label_24cb3c;
        case 0x24cb40u: goto label_24cb40;
        case 0x24cb44u: goto label_24cb44;
        case 0x24cb48u: goto label_24cb48;
        case 0x24cb4cu: goto label_24cb4c;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cb54u: goto label_24cb54;
        case 0x24cb58u: goto label_24cb58;
        case 0x24cb5cu: goto label_24cb5c;
        case 0x24cb60u: goto label_24cb60;
        case 0x24cb64u: goto label_24cb64;
        case 0x24cb68u: goto label_24cb68;
        case 0x24cb6cu: goto label_24cb6c;
        case 0x24cb70u: goto label_24cb70;
        case 0x24cb74u: goto label_24cb74;
        case 0x24cb78u: goto label_24cb78;
        case 0x24cb7cu: goto label_24cb7c;
        case 0x24cb80u: goto label_24cb80;
        case 0x24cb84u: goto label_24cb84;
        case 0x24cb88u: goto label_24cb88;
        case 0x24cb8cu: goto label_24cb8c;
        case 0x24cb90u: goto label_24cb90;
        case 0x24cb94u: goto label_24cb94;
        case 0x24cb98u: goto label_24cb98;
        case 0x24cb9cu: goto label_24cb9c;
        case 0x24cba0u: goto label_24cba0;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cba8u: goto label_24cba8;
        case 0x24cbacu: goto label_24cbac;
        case 0x24cbb0u: goto label_24cbb0;
        case 0x24cbb4u: goto label_24cbb4;
        case 0x24cbb8u: goto label_24cbb8;
        case 0x24cbbcu: goto label_24cbbc;
        case 0x24cbc0u: goto label_24cbc0;
        case 0x24cbc4u: goto label_24cbc4;
        case 0x24cbc8u: goto label_24cbc8;
        case 0x24cbccu: goto label_24cbcc;
        case 0x24cbd0u: goto label_24cbd0;
        case 0x24cbd4u: goto label_24cbd4;
        case 0x24cbd8u: goto label_24cbd8;
        case 0x24cbdcu: goto label_24cbdc;
        case 0x24cbe0u: goto label_24cbe0;
        case 0x24cbe4u: goto label_24cbe4;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cbecu: goto label_24cbec;
        case 0x24cbf0u: goto label_24cbf0;
        case 0x24cbf4u: goto label_24cbf4;
        case 0x24cbf8u: goto label_24cbf8;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24cc00u: goto label_24cc00;
        case 0x24cc04u: goto label_24cc04;
        case 0x24cc08u: goto label_24cc08;
        case 0x24cc0cu: goto label_24cc0c;
        case 0x24cc10u: goto label_24cc10;
        case 0x24cc14u: goto label_24cc14;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc1cu: goto label_24cc1c;
        case 0x24cc20u: goto label_24cc20;
        case 0x24cc24u: goto label_24cc24;
        case 0x24cc28u: goto label_24cc28;
        case 0x24cc2cu: goto label_24cc2c;
        case 0x24cc30u: goto label_24cc30;
        case 0x24cc34u: goto label_24cc34;
        case 0x24cc38u: goto label_24cc38;
        case 0x24cc3cu: goto label_24cc3c;
        case 0x24cc40u: goto label_24cc40;
        case 0x24cc44u: goto label_24cc44;
        case 0x24cc48u: goto label_24cc48;
        case 0x24cc4cu: goto label_24cc4c;
        case 0x24cc50u: goto label_24cc50;
        case 0x24cc54u: goto label_24cc54;
        case 0x24cc58u: goto label_24cc58;
        case 0x24cc5cu: goto label_24cc5c;
        case 0x24cc60u: goto label_24cc60;
        case 0x24cc64u: goto label_24cc64;
        case 0x24cc68u: goto label_24cc68;
        case 0x24cc6cu: goto label_24cc6c;
        case 0x24cc70u: goto label_24cc70;
        case 0x24cc74u: goto label_24cc74;
        case 0x24cc78u: goto label_24cc78;
        case 0x24cc7cu: goto label_24cc7c;
        case 0x24cc80u: goto label_24cc80;
        case 0x24cc84u: goto label_24cc84;
        case 0x24cc88u: goto label_24cc88;
        case 0x24cc8cu: goto label_24cc8c;
        case 0x24cc90u: goto label_24cc90;
        case 0x24cc94u: goto label_24cc94;
        case 0x24cc98u: goto label_24cc98;
        case 0x24cc9cu: goto label_24cc9c;
        case 0x24cca0u: goto label_24cca0;
        case 0x24cca4u: goto label_24cca4;
        case 0x24cca8u: goto label_24cca8;
        case 0x24ccacu: goto label_24ccac;
        case 0x24ccb0u: goto label_24ccb0;
        case 0x24ccb4u: goto label_24ccb4;
        case 0x24ccb8u: goto label_24ccb8;
        case 0x24ccbcu: goto label_24ccbc;
        case 0x24ccc0u: goto label_24ccc0;
        case 0x24ccc4u: goto label_24ccc4;
        case 0x24ccc8u: goto label_24ccc8;
        case 0x24ccccu: goto label_24cccc;
        case 0x24ccd0u: goto label_24ccd0;
        case 0x24ccd4u: goto label_24ccd4;
        case 0x24ccd8u: goto label_24ccd8;
        case 0x24ccdcu: goto label_24ccdc;
        case 0x24cce0u: goto label_24cce0;
        case 0x24cce4u: goto label_24cce4;
        case 0x24cce8u: goto label_24cce8;
        case 0x24ccecu: goto label_24ccec;
        case 0x24ccf0u: goto label_24ccf0;
        case 0x24ccf4u: goto label_24ccf4;
        case 0x24ccf8u: goto label_24ccf8;
        case 0x24ccfcu: goto label_24ccfc;
        case 0x24cd00u: goto label_24cd00;
        case 0x24cd04u: goto label_24cd04;
        case 0x24cd08u: goto label_24cd08;
        case 0x24cd0cu: goto label_24cd0c;
        case 0x24cd10u: goto label_24cd10;
        case 0x24cd14u: goto label_24cd14;
        case 0x24cd18u: goto label_24cd18;
        case 0x24cd1cu: goto label_24cd1c;
        case 0x24cd20u: goto label_24cd20;
        case 0x24cd24u: goto label_24cd24;
        case 0x24cd28u: goto label_24cd28;
        case 0x24cd2cu: goto label_24cd2c;
        case 0x24cd30u: goto label_24cd30;
        case 0x24cd34u: goto label_24cd34;
        case 0x24cd38u: goto label_24cd38;
        case 0x24cd3cu: goto label_24cd3c;
        case 0x24cd40u: goto label_24cd40;
        case 0x24cd44u: goto label_24cd44;
        case 0x24cd48u: goto label_24cd48;
        case 0x24cd4cu: goto label_24cd4c;
        case 0x24cd50u: goto label_24cd50;
        case 0x24cd54u: goto label_24cd54;
        case 0x24cd58u: goto label_24cd58;
        case 0x24cd5cu: goto label_24cd5c;
        case 0x24cd60u: goto label_24cd60;
        case 0x24cd64u: goto label_24cd64;
        case 0x24cd68u: goto label_24cd68;
        case 0x24cd6cu: goto label_24cd6c;
        case 0x24cd70u: goto label_24cd70;
        case 0x24cd74u: goto label_24cd74;
        case 0x24cd78u: goto label_24cd78;
        case 0x24cd7cu: goto label_24cd7c;
        case 0x24cd80u: goto label_24cd80;
        case 0x24cd84u: goto label_24cd84;
        case 0x24cd88u: goto label_24cd88;
        case 0x24cd8cu: goto label_24cd8c;
        case 0x24cd90u: goto label_24cd90;
        case 0x24cd94u: goto label_24cd94;
        case 0x24cd98u: goto label_24cd98;
        case 0x24cd9cu: goto label_24cd9c;
        case 0x24cda0u: goto label_24cda0;
        case 0x24cda4u: goto label_24cda4;
        case 0x24cda8u: goto label_24cda8;
        case 0x24cdacu: goto label_24cdac;
        case 0x24cdb0u: goto label_24cdb0;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdb8u: goto label_24cdb8;
        case 0x24cdbcu: goto label_24cdbc;
        case 0x24cdc0u: goto label_24cdc0;
        case 0x24cdc4u: goto label_24cdc4;
        case 0x24cdc8u: goto label_24cdc8;
        case 0x24cdccu: goto label_24cdcc;
        case 0x24cdd0u: goto label_24cdd0;
        case 0x24cdd4u: goto label_24cdd4;
        case 0x24cdd8u: goto label_24cdd8;
        case 0x24cddcu: goto label_24cddc;
        case 0x24cde0u: goto label_24cde0;
        case 0x24cde4u: goto label_24cde4;
        case 0x24cde8u: goto label_24cde8;
        case 0x24cdecu: goto label_24cdec;
        case 0x24cdf0u: goto label_24cdf0;
        case 0x24cdf4u: goto label_24cdf4;
        case 0x24cdf8u: goto label_24cdf8;
        case 0x24cdfcu: goto label_24cdfc;
        case 0x24ce00u: goto label_24ce00;
        case 0x24ce04u: goto label_24ce04;
        case 0x24ce08u: goto label_24ce08;
        case 0x24ce0cu: goto label_24ce0c;
        case 0x24ce10u: goto label_24ce10;
        case 0x24ce14u: goto label_24ce14;
        case 0x24ce18u: goto label_24ce18;
        case 0x24ce1cu: goto label_24ce1c;
        case 0x24ce20u: goto label_24ce20;
        case 0x24ce24u: goto label_24ce24;
        case 0x24ce28u: goto label_24ce28;
        case 0x24ce2cu: goto label_24ce2c;
        case 0x24ce30u: goto label_24ce30;
        case 0x24ce34u: goto label_24ce34;
        case 0x24ce38u: goto label_24ce38;
        case 0x24ce3cu: goto label_24ce3c;
        case 0x24ce40u: goto label_24ce40;
        case 0x24ce44u: goto label_24ce44;
        case 0x24ce48u: goto label_24ce48;
        case 0x24ce4cu: goto label_24ce4c;
        case 0x24ce50u: goto label_24ce50;
        case 0x24ce54u: goto label_24ce54;
        case 0x24ce58u: goto label_24ce58;
        case 0x24ce5cu: goto label_24ce5c;
        case 0x24ce60u: goto label_24ce60;
        case 0x24ce64u: goto label_24ce64;
        case 0x24ce68u: goto label_24ce68;
        case 0x24ce6cu: goto label_24ce6c;
        case 0x24ce70u: goto label_24ce70;
        case 0x24ce74u: goto label_24ce74;
        case 0x24ce78u: goto label_24ce78;
        case 0x24ce7cu: goto label_24ce7c;
        case 0x24ce80u: goto label_24ce80;
        case 0x24ce84u: goto label_24ce84;
        case 0x24ce88u: goto label_24ce88;
        case 0x24ce8cu: goto label_24ce8c;
        case 0x24ce90u: goto label_24ce90;
        case 0x24ce94u: goto label_24ce94;
        case 0x24ce98u: goto label_24ce98;
        case 0x24ce9cu: goto label_24ce9c;
        case 0x24cea0u: goto label_24cea0;
        case 0x24cea4u: goto label_24cea4;
        case 0x24cea8u: goto label_24cea8;
        case 0x24ceacu: goto label_24ceac;
        case 0x24ceb0u: goto label_24ceb0;
        case 0x24ceb4u: goto label_24ceb4;
        case 0x24ceb8u: goto label_24ceb8;
        case 0x24cebcu: goto label_24cebc;
        case 0x24cec0u: goto label_24cec0;
        case 0x24cec4u: goto label_24cec4;
        case 0x24cec8u: goto label_24cec8;
        case 0x24ceccu: goto label_24cecc;
        case 0x24ced0u: goto label_24ced0;
        case 0x24ced4u: goto label_24ced4;
        case 0x24ced8u: goto label_24ced8;
        case 0x24cedcu: goto label_24cedc;
        case 0x24cee0u: goto label_24cee0;
        case 0x24cee4u: goto label_24cee4;
        case 0x24cee8u: goto label_24cee8;
        case 0x24ceecu: goto label_24ceec;
        case 0x24cef0u: goto label_24cef0;
        case 0x24cef4u: goto label_24cef4;
        case 0x24cef8u: goto label_24cef8;
        case 0x24cefcu: goto label_24cefc;
        case 0x24cf00u: goto label_24cf00;
        case 0x24cf04u: goto label_24cf04;
        case 0x24cf08u: goto label_24cf08;
        case 0x24cf0cu: goto label_24cf0c;
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf14u: goto label_24cf14;
        case 0x24cf18u: goto label_24cf18;
        case 0x24cf1cu: goto label_24cf1c;
        case 0x24cf20u: goto label_24cf20;
        case 0x24cf24u: goto label_24cf24;
        case 0x24cf28u: goto label_24cf28;
        case 0x24cf2cu: goto label_24cf2c;
        case 0x24cf30u: goto label_24cf30;
        case 0x24cf34u: goto label_24cf34;
        case 0x24cf38u: goto label_24cf38;
        case 0x24cf3cu: goto label_24cf3c;
        case 0x24cf40u: goto label_24cf40;
        case 0x24cf44u: goto label_24cf44;
        case 0x24cf48u: goto label_24cf48;
        case 0x24cf4cu: goto label_24cf4c;
        case 0x24cf50u: goto label_24cf50;
        case 0x24cf54u: goto label_24cf54;
        case 0x24cf58u: goto label_24cf58;
        case 0x24cf5cu: goto label_24cf5c;
        case 0x24cf60u: goto label_24cf60;
        case 0x24cf64u: goto label_24cf64;
        case 0x24cf68u: goto label_24cf68;
        default: break;
    }

    ctx->pc = 0x24caa0u;

label_24caa0:
    // 0x24caa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24caa4:
    // 0x24caa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_24caa8:
    // 0x24caa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24caac:
    // 0x24caac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24caacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24cab0:
    // 0x24cab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24cab4:
    // 0x24cab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24cab8:
    // 0x24cab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24cabc:
    // 0x24cabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24cabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cac0:
    // 0x24cac0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24cac4:
    // 0x24cac4: 0xc0abf10  jal         func_2AFC40
label_24cac8:
    if (ctx->pc == 0x24CAC8u) {
        ctx->pc = 0x24CAC8u;
            // 0x24cac8: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x24CACCu;
        goto label_24cacc;
    }
    ctx->pc = 0x24CAC4u;
    SET_GPR_U32(ctx, 31, 0x24CACCu);
    ctx->pc = 0x24CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CAC4u;
            // 0x24cac8: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC40u;
    if (runtime->hasFunction(0x2AFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CACCu; }
        if (ctx->pc != 0x24CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CACCu; }
        if (ctx->pc != 0x24CACCu) { return; }
    }
    ctx->pc = 0x24CACCu;
label_24cacc:
    // 0x24cacc: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
label_24cad0:
    if (ctx->pc == 0x24CAD0u) {
        ctx->pc = 0x24CAD0u;
            // 0x24cad0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CAD4u;
        goto label_24cad4;
    }
    ctx->pc = 0x24CACCu;
    {
        const bool branch_taken_0x24cacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CACCu;
            // 0x24cad0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cacc) {
            ctx->pc = 0x24CF08u;
            goto label_24cf08;
        }
    }
    ctx->pc = 0x24CAD4u;
label_24cad4:
    // 0x24cad4: 0xc05239c  jal         func_148E70
label_24cad8:
    if (ctx->pc == 0x24CAD8u) {
        ctx->pc = 0x24CADCu;
        goto label_24cadc;
    }
    ctx->pc = 0x24CAD4u;
    SET_GPR_U32(ctx, 31, 0x24CADCu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CADCu; }
        if (ctx->pc != 0x24CADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CADCu; }
        if (ctx->pc != 0x24CADCu) { return; }
    }
    ctx->pc = 0x24CADCu;
label_24cadc:
    // 0x24cadc: 0x1440010a  bnez        $v0, . + 4 + (0x10A << 2)
label_24cae0:
    if (ctx->pc == 0x24CAE0u) {
        ctx->pc = 0x24CAE0u;
            // 0x24cae0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x24CAE4u;
        goto label_24cae4;
    }
    ctx->pc = 0x24CADCu;
    {
        const bool branch_taken_0x24cadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CADCu;
            // 0x24cae0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cadc) {
            ctx->pc = 0x24CF08u;
            goto label_24cf08;
        }
    }
    ctx->pc = 0x24CAE4u;
label_24cae4:
    // 0x24cae4: 0x86070110  lh          $a3, 0x110($s0)
    ctx->pc = 0x24cae4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24cae8:
    // 0x24cae8: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x24cae8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_24caec:
    // 0x24caec: 0x2ce10006  sltiu       $at, $a3, 0x6
    ctx->pc = 0x24caecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_24caf0:
    // 0x24caf0: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_24caf4:
    if (ctx->pc == 0x24CAF4u) {
        ctx->pc = 0x24CAF4u;
            // 0x24caf4: 0x8e12001c  lw          $s2, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x24CAF8u;
        goto label_24caf8;
    }
    ctx->pc = 0x24CAF0u;
    {
        const bool branch_taken_0x24caf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CAF0u;
            // 0x24caf4: 0x8e12001c  lw          $s2, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caf0) {
            ctx->pc = 0x24CC34u;
            goto label_24cc34;
        }
    }
    ctx->pc = 0x24CAF8u;
label_24caf8:
    // 0x24caf8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x24caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_24cafc:
    // 0x24cafc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_24cb00:
    // 0x24cb00: 0x2463bab0  addiu       $v1, $v1, -0x4550
    ctx->pc = 0x24cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949552));
label_24cb04:
    // 0x24cb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24cb08:
    // 0x24cb08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24cb0c:
    // 0x24cb0c: 0x400008  jr          $v0
label_24cb10:
    if (ctx->pc == 0x24CB10u) {
        ctx->pc = 0x24CB14u;
        goto label_24cb14;
    }
    ctx->pc = 0x24CB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CB14u: goto label_24cb14;
            case 0x24CB3Cu: goto label_24cb3c;
            case 0x24CBA0u: goto label_24cba0;
            case 0x24CBCCu: goto label_24cbcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24CB14u;
label_24cb14:
    // 0x24cb14: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24cb18:
    // 0x24cb18: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24cb1c:
    // 0x24cb1c: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_24cb20:
    // 0x24cb20: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x24cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_24cb24:
    // 0x24cb24: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x24cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_24cb28:
    // 0x24cb28: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x24cb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_24cb2c:
    // 0x24cb2c: 0xc0ae634  jal         func_2B98D0
label_24cb30:
    if (ctx->pc == 0x24CB30u) {
        ctx->pc = 0x24CB30u;
            // 0x24cb30: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CB34u;
        goto label_24cb34;
    }
    ctx->pc = 0x24CB2Cu;
    SET_GPR_U32(ctx, 31, 0x24CB34u);
    ctx->pc = 0x24CB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB2Cu;
            // 0x24cb30: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB34u; }
        if (ctx->pc != 0x24CB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB34u; }
        if (ctx->pc != 0x24CB34u) { return; }
    }
    ctx->pc = 0x24CB34u;
label_24cb34:
    // 0x24cb34: 0x10000040  b           . + 4 + (0x40 << 2)
label_24cb38:
    if (ctx->pc == 0x24CB38u) {
        ctx->pc = 0x24CB38u;
            // 0x24cb38: 0x8f8294f8  lw          $v0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x24CB3Cu;
        goto label_24cb3c;
    }
    ctx->pc = 0x24CB34u;
    {
        const bool branch_taken_0x24cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB34u;
            // 0x24cb38: 0x8f8294f8  lw          $v0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb34) {
            ctx->pc = 0x24CC38u;
            goto label_24cc38;
        }
    }
    ctx->pc = 0x24CB3Cu;
label_24cb3c:
    // 0x24cb3c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cb40:
    // 0x24cb40: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_24cb44:
    // 0x24cb44: 0x8c24ca80  lw          $a0, -0x3580($at)
    ctx->pc = 0x24cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_24cb48:
    // 0x24cb48: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x24cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
label_24cb4c:
    // 0x24cb4c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cb50:
    // 0x24cb50: 0x8c25caa0  lw          $a1, -0x3560($at)
    ctx->pc = 0x24cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24cb54:
    // 0x24cb54: 0xc0ae880  jal         func_2BA200
label_24cb58:
    if (ctx->pc == 0x24CB58u) {
        ctx->pc = 0x24CB58u;
            // 0x24cb58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CB5Cu;
        goto label_24cb5c;
    }
    ctx->pc = 0x24CB54u;
    SET_GPR_U32(ctx, 31, 0x24CB5Cu);
    ctx->pc = 0x24CB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB54u;
            // 0x24cb58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA200u;
    if (runtime->hasFunction(0x2BA200u)) {
        auto targetFn = runtime->lookupFunction(0x2BA200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB5Cu; }
        if (ctx->pc != 0x24CB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemChrLoadEndCheck__FP17MENU_BGREAD_INFO2P12CActionCharaP9mgCMemoryi_0x2ba200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB5Cu; }
        if (ctx->pc != 0x24CB5Cu) { return; }
    }
    ctx->pc = 0x24CB5Cu;
label_24cb5c:
    // 0x24cb5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24cb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cb60:
    // 0x24cb60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24cb60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cb64:
    // 0x24cb64: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x24cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_24cb68:
    // 0x24cb68: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x24cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_24cb6c:
    // 0x24cb6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24cb70:
    // 0x24cb70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24cb74:
    // 0x24cb74: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x24cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_24cb78:
    // 0x24cb78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_24cb7c:
    if (ctx->pc == 0x24CB7Cu) {
        ctx->pc = 0x24CB80u;
        goto label_24cb80;
    }
    ctx->pc = 0x24CB78u;
    {
        const bool branch_taken_0x24cb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb78) {
            ctx->pc = 0x24CB88u;
            goto label_24cb88;
        }
    }
    ctx->pc = 0x24CB80u;
label_24cb80:
    // 0x24cb80: 0xc05af58  jal         func_16BD60
label_24cb84:
    if (ctx->pc == 0x24CB84u) {
        ctx->pc = 0x24CB88u;
        goto label_24cb88;
    }
    ctx->pc = 0x24CB80u;
    SET_GPR_U32(ctx, 31, 0x24CB88u);
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB88u; }
        if (ctx->pc != 0x24CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB88u; }
        if (ctx->pc != 0x24CB88u) { return; }
    }
    ctx->pc = 0x24CB88u;
label_24cb88:
    // 0x24cb88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24cb88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24cb8c:
    // 0x24cb8c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x24cb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_24cb90:
    // 0x24cb90: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_24cb94:
    if (ctx->pc == 0x24CB94u) {
        ctx->pc = 0x24CB94u;
            // 0x24cb94: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x24CB98u;
        goto label_24cb98;
    }
    ctx->pc = 0x24CB90u;
    {
        const bool branch_taken_0x24cb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CB90u;
            // 0x24cb94: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb90) {
            ctx->pc = 0x24CB64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24cb64;
        }
    }
    ctx->pc = 0x24CB98u;
label_24cb98:
    // 0x24cb98: 0x10000026  b           . + 4 + (0x26 << 2)
label_24cb9c:
    if (ctx->pc == 0x24CB9Cu) {
        ctx->pc = 0x24CBA0u;
        goto label_24cba0;
    }
    ctx->pc = 0x24CB98u;
    {
        const bool branch_taken_0x24cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb98) {
            ctx->pc = 0x24CC34u;
            goto label_24cc34;
        }
    }
    ctx->pc = 0x24CBA0u;
label_24cba0:
    // 0x24cba0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24cba4:
    // 0x24cba4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24cba8:
    // 0x24cba8: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24cba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_24cbac:
    // 0x24cbac: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x24cbacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_24cbb0:
    // 0x24cbb0: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x24cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_24cbb4:
    // 0x24cbb4: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x24cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_24cbb8:
    // 0x24cbb8: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x24cbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_24cbbc:
    // 0x24cbbc: 0xc0ae9a4  jal         func_2BA690
label_24cbc0:
    if (ctx->pc == 0x24CBC0u) {
        ctx->pc = 0x24CBC0u;
            // 0x24cbc0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CBC4u;
        goto label_24cbc4;
    }
    ctx->pc = 0x24CBBCu;
    SET_GPR_U32(ctx, 31, 0x24CBC4u);
    ctx->pc = 0x24CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBBCu;
            // 0x24cbc0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA690u;
    if (runtime->hasFunction(0x2BA690u)) {
        auto targetFn = runtime->lookupFunction(0x2BA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBC4u; }
        if (ctx->pc != 0x24CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaii_0x2ba690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBC4u; }
        if (ctx->pc != 0x24CBC4u) { return; }
    }
    ctx->pc = 0x24CBC4u;
label_24cbc4:
    // 0x24cbc4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_24cbc8:
    if (ctx->pc == 0x24CBC8u) {
        ctx->pc = 0x24CBCCu;
        goto label_24cbcc;
    }
    ctx->pc = 0x24CBC4u;
    {
        const bool branch_taken_0x24cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cbc4) {
            ctx->pc = 0x24CC34u;
            goto label_24cc34;
        }
    }
    ctx->pc = 0x24CBCCu;
label_24cbcc:
    // 0x24cbcc: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24cbd0:
    // 0x24cbd0: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x24cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_24cbd4:
    // 0x24cbd4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x24cbd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_24cbd8:
    // 0x24cbd8: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x24cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_24cbdc:
    // 0x24cbdc: 0x24a5caa0  addiu       $a1, $a1, -0x3560
    ctx->pc = 0x24cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
label_24cbe0:
    // 0x24cbe0: 0xc0aec40  jal         func_2BB100
label_24cbe4:
    if (ctx->pc == 0x24CBE4u) {
        ctx->pc = 0x24CBE4u;
            // 0x24cbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CBE8u;
        goto label_24cbe8;
    }
    ctx->pc = 0x24CBE0u;
    SET_GPR_U32(ctx, 31, 0x24CBE8u);
    ctx->pc = 0x24CBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBE0u;
            // 0x24cbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB100u;
    if (runtime->hasFunction(0x2BB100u)) {
        auto targetFn = runtime->lookupFunction(0x2BB100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBE8u; }
        if (ctx->pc != 0x24CBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii_0x2bb100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBE8u; }
        if (ctx->pc != 0x24CBE8u) { return; }
    }
    ctx->pc = 0x24CBE8u;
label_24cbe8:
    // 0x24cbe8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cbec:
    // 0x24cbec: 0x8c22ca80  lw          $v0, -0x3580($at)
    ctx->pc = 0x24cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_24cbf0:
    // 0x24cbf0: 0x80420070  lb          $v0, 0x70($v0)
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_24cbf4:
    // 0x24cbf4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_24cbf8:
    if (ctx->pc == 0x24CBF8u) {
        ctx->pc = 0x24CBF8u;
            // 0x24cbf8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24CBFCu;
        goto label_24cbfc;
    }
    ctx->pc = 0x24CBF4u;
    {
        const bool branch_taken_0x24cbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CBF4u;
            // 0x24cbf8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbf4) {
            ctx->pc = 0x24CC34u;
            goto label_24cc34;
        }
    }
    ctx->pc = 0x24CBFCu;
label_24cbfc:
    // 0x24cbfc: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x24cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
label_24cc00:
    // 0x24cc00: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24cc00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24cc04:
    // 0x24cc04: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cc08:
    // 0x24cc08: 0x8c22ca88  lw          $v0, -0x3578($at)
    ctx->pc = 0x24cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953608)));
label_24cc0c:
    // 0x24cc0c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24cc10:
    // 0x24cc10: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cc14:
    // 0x24cc14: 0x8c22ca8c  lw          $v0, -0x3574($at)
    ctx->pc = 0x24cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953612)));
label_24cc18:
    // 0x24cc18: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24cc18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24cc1c:
    // 0x24cc1c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cc20:
    // 0x24cc20: 0x8c22ca90  lw          $v0, -0x3570($at)
    ctx->pc = 0x24cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953616)));
label_24cc24:
    // 0x24cc24: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24cc24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24cc28:
    // 0x24cc28: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cc2c:
    // 0x24cc2c: 0x8c22ca94  lw          $v0, -0x356C($at)
    ctx->pc = 0x24cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953620)));
label_24cc30:
    // 0x24cc30: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x24cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_24cc34:
    // 0x24cc34: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24cc38:
    // 0x24cc38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cc3c:
    // 0x24cc3c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x24cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_24cc40:
    // 0x24cc40: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x24cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_24cc44:
    // 0x24cc44: 0xc0abf10  jal         func_2AFC40
label_24cc48:
    if (ctx->pc == 0x24CC48u) {
        ctx->pc = 0x24CC48u;
            // 0x24cc48: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x24CC4Cu;
        goto label_24cc4c;
    }
    ctx->pc = 0x24CC44u;
    SET_GPR_U32(ctx, 31, 0x24CC4Cu);
    ctx->pc = 0x24CC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC44u;
            // 0x24cc48: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC40u;
    if (runtime->hasFunction(0x2AFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CC4Cu; }
        if (ctx->pc != 0x24CC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuLoadFileCheck__FPP17MENU_BGREAD_INFO2_0x2afc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CC4Cu; }
        if (ctx->pc != 0x24CC4Cu) { return; }
    }
    ctx->pc = 0x24CC4Cu;
label_24cc4c:
    // 0x24cc4c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24cc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cc50:
    // 0x24cc50: 0x8c23ca80  lw          $v1, -0x3580($at)
    ctx->pc = 0x24cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_24cc54:
    // 0x24cc54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24cc58:
    if (ctx->pc == 0x24CC58u) {
        ctx->pc = 0x24CC58u;
            // 0x24cc58: 0x8c730074  lw          $s3, 0x74($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
        ctx->pc = 0x24CC5Cu;
        goto label_24cc5c;
    }
    ctx->pc = 0x24CC54u;
    {
        const bool branch_taken_0x24cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC54u;
            // 0x24cc58: 0x8c730074  lw          $s3, 0x74($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc54) {
            ctx->pc = 0x24CC78u;
            goto label_24cc78;
        }
    }
    ctx->pc = 0x24CC5Cu;
label_24cc5c:
    // 0x24cc5c: 0x86040110  lh          $a0, 0x110($s0)
    ctx->pc = 0x24cc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24cc60:
    // 0x24cc60: 0x278383e0  addiu       $v1, $gp, -0x7C20
    ctx->pc = 0x24cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935520));
label_24cc64:
    // 0x24cc64: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x24cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_24cc68:
    // 0x24cc68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24cc6c:
    // 0x24cc6c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x24cc6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24cc70:
    // 0x24cc70: 0x1000009d  b           . + 4 + (0x9D << 2)
label_24cc74:
    if (ctx->pc == 0x24CC74u) {
        ctx->pc = 0x24CC74u;
            // 0x24cc74: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x24CC78u;
        goto label_24cc78;
    }
    ctx->pc = 0x24CC70u;
    {
        const bool branch_taken_0x24cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CC70u;
            // 0x24cc74: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc70) {
            ctx->pc = 0x24CEE8u;
            goto label_24cee8;
        }
    }
    ctx->pc = 0x24CC78u;
label_24cc78:
    // 0x24cc78: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x24cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_24cc7c:
    // 0x24cc7c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x24cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_24cc80:
    // 0x24cc80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_24cc84:
    // 0x24cc84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24cc88:
    // 0x24cc88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24cc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24cc8c:
    // 0x24cc8c: 0x0  nop
    ctx->pc = 0x24cc8cu;
    // NOP
label_24cc90:
    // 0x24cc90: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24cc90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_24cc94:
    // 0x24cc94: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x24cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_24cc98:
    // 0x24cc98: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24cc98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24cc9c:
    // 0x24cc9c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x24cc9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_24cca0:
    // 0x24cca0: 0x320f809  jalr        $t9
label_24cca4:
    if (ctx->pc == 0x24CCA4u) {
        ctx->pc = 0x24CCA4u;
            // 0x24cca4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x24CCA8u;
        goto label_24cca8;
    }
    ctx->pc = 0x24CCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CCA8u);
        ctx->pc = 0x24CCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCA0u;
            // 0x24cca4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CCA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CCA8u; }
            if (ctx->pc != 0x24CCA8u) { return; }
        }
        }
    }
    ctx->pc = 0x24CCA8u;
label_24cca8:
    // 0x24cca8: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x24cca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24ccac:
    // 0x24ccac: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x24ccacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_24ccb0:
    // 0x24ccb0: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_24ccb4:
    if (ctx->pc == 0x24CCB4u) {
        ctx->pc = 0x24CCB4u;
            // 0x24ccb4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x24CCB8u;
        goto label_24ccb8;
    }
    ctx->pc = 0x24CCB0u;
    {
        const bool branch_taken_0x24ccb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCB0u;
            // 0x24ccb4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccb0) {
            ctx->pc = 0x24CE4Cu;
            goto label_24ce4c;
        }
    }
    ctx->pc = 0x24CCB8u;
label_24ccb8:
    // 0x24ccb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24ccbc:
    // 0x24ccbc: 0x2463ba90  addiu       $v1, $v1, -0x4570
    ctx->pc = 0x24ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949520));
label_24ccc0:
    // 0x24ccc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ccc4:
    // 0x24ccc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24ccc8:
    // 0x24ccc8: 0x400008  jr          $v0
label_24cccc:
    if (ctx->pc == 0x24CCCCu) {
        ctx->pc = 0x24CCD0u;
        goto label_24ccd0;
    }
    ctx->pc = 0x24CCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CCD0u: goto label_24ccd0;
            case 0x24CD58u: goto label_24cd58;
            case 0x24CD74u: goto label_24cd74;
            case 0x24CE24u: goto label_24ce24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24CCD0u;
label_24ccd0:
    // 0x24ccd0: 0xc05cdc0  jal         func_173700
label_24ccd4:
    if (ctx->pc == 0x24CCD4u) {
        ctx->pc = 0x24CCD4u;
            // 0x24ccd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CCD8u;
        goto label_24ccd8;
    }
    ctx->pc = 0x24CCD0u;
    SET_GPR_U32(ctx, 31, 0x24CCD8u);
    ctx->pc = 0x24CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCD0u;
            // 0x24ccd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCD8u; }
        if (ctx->pc != 0x24CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCD8u; }
        if (ctx->pc != 0x24CCD8u) { return; }
    }
    ctx->pc = 0x24CCD8u;
label_24ccd8:
    // 0x24ccd8: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x24ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_24ccdc:
    // 0x24ccdc: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_24cce0:
    if (ctx->pc == 0x24CCE0u) {
        ctx->pc = 0x24CCE0u;
            // 0x24cce0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CCE4u;
        goto label_24cce4;
    }
    ctx->pc = 0x24CCDCu;
    {
        const bool branch_taken_0x24ccdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24CCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCDCu;
            // 0x24cce0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccdc) {
            ctx->pc = 0x24CD10u;
            goto label_24cd10;
        }
    }
    ctx->pc = 0x24CCE4u;
label_24cce4:
    // 0x24cce4: 0x10000006  b           . + 4 + (0x6 << 2)
label_24cce8:
    if (ctx->pc == 0x24CCE8u) {
        ctx->pc = 0x24CCE8u;
            // 0x24cce8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CCECu;
        goto label_24ccec;
    }
    ctx->pc = 0x24CCE4u;
    {
        const bool branch_taken_0x24cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCE4u;
            // 0x24cce8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cce4) {
            ctx->pc = 0x24CD00u;
            goto label_24cd00;
        }
    }
    ctx->pc = 0x24CCECu;
label_24ccec:
    // 0x24ccec: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x24ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_24ccf0:
    // 0x24ccf0: 0xc05e61c  jal         func_179870
label_24ccf4:
    if (ctx->pc == 0x24CCF4u) {
        ctx->pc = 0x24CCF4u;
            // 0x24ccf4: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->pc = 0x24CCF8u;
        goto label_24ccf8;
    }
    ctx->pc = 0x24CCF0u;
    SET_GPR_U32(ctx, 31, 0x24CCF8u);
    ctx->pc = 0x24CCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CCF0u;
            // 0x24ccf4: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179870u;
    if (runtime->hasFunction(0x179870u)) {
        auto targetFn = runtime->lookupFunction(0x179870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCF8u; }
        if (ctx->pc != 0x24CCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPosition__13CDynamicAnimeFv_0x179870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CCF8u; }
        if (ctx->pc != 0x24CCF8u) { return; }
    }
    ctx->pc = 0x24CCF8u;
label_24ccf8:
    // 0x24ccf8: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x24ccf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_24ccfc:
    // 0x24ccfc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ccfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24cd00:
    // 0x24cd00: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x24cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_24cd04:
    // 0x24cd04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24cd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24cd08:
    // 0x24cd08: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_24cd0c:
    if (ctx->pc == 0x24CD0Cu) {
        ctx->pc = 0x24CD10u;
        goto label_24cd10;
    }
    ctx->pc = 0x24CD08u;
    {
        const bool branch_taken_0x24cd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cd08) {
            ctx->pc = 0x24CCECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ccec;
        }
    }
    ctx->pc = 0x24CD10u;
label_24cd10:
    // 0x24cd10: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24cd10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24cd14:
    // 0x24cd14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24cd14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24cd18:
    // 0x24cd18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24cd1c:
    // 0x24cd1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24cd1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_24cd20:
    // 0x24cd20: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x24cd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_24cd24:
    // 0x24cd24: 0x320f809  jalr        $t9
label_24cd28:
    if (ctx->pc == 0x24CD28u) {
        ctx->pc = 0x24CD28u;
            // 0x24cd28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x24CD2Cu;
        goto label_24cd2c;
    }
    ctx->pc = 0x24CD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CD2Cu);
        ctx->pc = 0x24CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD24u;
            // 0x24cd28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CD2Cu; }
            if (ctx->pc != 0x24CD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24CD2Cu;
label_24cd2c:
    // 0x24cd2c: 0x93829764  lbu         $v0, -0x689C($gp)
    ctx->pc = 0x24cd2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940516)));
label_24cd30:
    // 0x24cd30: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_24cd34:
    if (ctx->pc == 0x24CD34u) {
        ctx->pc = 0x24CD38u;
        goto label_24cd38;
    }
    ctx->pc = 0x24CD30u;
    {
        const bool branch_taken_0x24cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd30) {
            ctx->pc = 0x24CE4Cu;
            goto label_24ce4c;
        }
    }
    ctx->pc = 0x24CD38u;
label_24cd38:
    // 0x24cd38: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24cd3c:
    // 0x24cd3c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24cd40:
    // 0x24cd40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24cd44:
    // 0x24cd44: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x24cd44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24cd48:
    // 0x24cd48: 0x320f809  jalr        $t9
label_24cd4c:
    if (ctx->pc == 0x24CD4Cu) {
        ctx->pc = 0x24CD4Cu;
            // 0x24cd4c: 0x24a5e330  addiu       $a1, $a1, -0x1CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
        ctx->pc = 0x24CD50u;
        goto label_24cd50;
    }
    ctx->pc = 0x24CD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CD50u);
        ctx->pc = 0x24CD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD48u;
            // 0x24cd4c: 0x24a5e330  addiu       $a1, $a1, -0x1CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CD50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CD50u; }
            if (ctx->pc != 0x24CD50u) { return; }
        }
        }
    }
    ctx->pc = 0x24CD50u;
label_24cd50:
    // 0x24cd50: 0x1000003f  b           . + 4 + (0x3F << 2)
label_24cd54:
    if (ctx->pc == 0x24CD54u) {
        ctx->pc = 0x24CD54u;
            // 0x24cd54: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x24CD58u;
        goto label_24cd58;
    }
    ctx->pc = 0x24CD50u;
    {
        const bool branch_taken_0x24cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD50u;
            // 0x24cd54: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd50) {
            ctx->pc = 0x24CE50u;
            goto label_24ce50;
        }
    }
    ctx->pc = 0x24CD58u;
label_24cd58:
    // 0x24cd58: 0x86060116  lh          $a2, 0x116($s0)
    ctx->pc = 0x24cd58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
label_24cd5c:
    // 0x24cd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cd60:
    // 0x24cd60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24cd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24cd64:
    // 0x24cd64: 0xc093224  jal         func_24C890
label_24cd68:
    if (ctx->pc == 0x24CD68u) {
        ctx->pc = 0x24CD68u;
            // 0x24cd68: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CD6Cu;
        goto label_24cd6c;
    }
    ctx->pc = 0x24CD64u;
    SET_GPR_U32(ctx, 31, 0x24CD6Cu);
    ctx->pc = 0x24CD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD64u;
            // 0x24cd68: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C890u;
    if (runtime->hasFunction(0x24C890u)) {
        auto targetFn = runtime->lookupFunction(0x24C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD6Cu; }
        if (ctx->pc != 0x24CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WeaponBuildCheck__13CMenuItemInfoFP12CActionCharaii_0x24c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CD6Cu; }
        if (ctx->pc != 0x24CD6Cu) { return; }
    }
    ctx->pc = 0x24CD6Cu;
label_24cd6c:
    // 0x24cd6c: 0x10000037  b           . + 4 + (0x37 << 2)
label_24cd70:
    if (ctx->pc == 0x24CD70u) {
        ctx->pc = 0x24CD74u;
        goto label_24cd74;
    }
    ctx->pc = 0x24CD6Cu;
    {
        const bool branch_taken_0x24cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd6c) {
            ctx->pc = 0x24CE4Cu;
            goto label_24ce4c;
        }
    }
    ctx->pc = 0x24CD74u;
label_24cd74:
    // 0x24cd74: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24cd74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24cd78:
    // 0x24cd78: 0x3c02c230  lui         $v0, 0xC230
    ctx->pc = 0x24cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49712 << 16));
label_24cd7c:
    // 0x24cd7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24cd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24cd80:
    // 0x24cd80: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x24cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
label_24cd84:
    // 0x24cd84: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24cd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_24cd88:
    // 0x24cd88: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x24cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_24cd8c:
    // 0x24cd8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24cd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_24cd90:
    // 0x24cd90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24cd90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_24cd94:
    // 0x24cd94: 0x320f809  jalr        $t9
label_24cd98:
    if (ctx->pc == 0x24CD98u) {
        ctx->pc = 0x24CD98u;
            // 0x24cd98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CD9Cu;
        goto label_24cd9c;
    }
    ctx->pc = 0x24CD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CD9Cu);
        ctx->pc = 0x24CD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CD94u;
            // 0x24cd98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CD9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CD9Cu; }
            if (ctx->pc != 0x24CD9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24CD9Cu;
label_24cd9c:
    // 0x24cd9c: 0xc065af8  jal         func_196BE0
label_24cda0:
    if (ctx->pc == 0x24CDA0u) {
        ctx->pc = 0x24CDA4u;
        goto label_24cda4;
    }
    ctx->pc = 0x24CD9Cu;
    SET_GPR_U32(ctx, 31, 0x24CDA4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDA4u; }
        if (ctx->pc != 0x24CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDA4u; }
        if (ctx->pc != 0x24CDA4u) { return; }
    }
    ctx->pc = 0x24CDA4u;
label_24cda4:
    // 0x24cda4: 0xc065714  jal         func_195C50
label_24cda8:
    if (ctx->pc == 0x24CDA8u) {
        ctx->pc = 0x24CDA8u;
            // 0x24cda8: 0x844447d6  lh          $a0, 0x47D6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18390)));
        ctx->pc = 0x24CDACu;
        goto label_24cdac;
    }
    ctx->pc = 0x24CDA4u;
    SET_GPR_U32(ctx, 31, 0x24CDACu);
    ctx->pc = 0x24CDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDA4u;
            // 0x24cda8: 0x844447d6  lh          $a0, 0x47D6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18390)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C50u;
    if (runtime->hasFunction(0x195C50u)) {
        auto targetFn = runtime->lookupFunction(0x195C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDACu; }
        if (ctx->pc != 0x24CDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartInfoData__Fi_0x195c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDACu; }
        if (ctx->pc != 0x24CDACu) { return; }
    }
    ctx->pc = 0x24CDACu;
label_24cdac:
    // 0x24cdac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24cdb0:
    if (ctx->pc == 0x24CDB0u) {
        ctx->pc = 0x24CDB0u;
            // 0x24cdb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CDB4u;
        goto label_24cdb4;
    }
    ctx->pc = 0x24CDACu;
    {
        const bool branch_taken_0x24cdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDACu;
            // 0x24cdb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdac) {
            ctx->pc = 0x24CDC0u;
            goto label_24cdc0;
        }
    }
    ctx->pc = 0x24CDB4u;
label_24cdb4:
    // 0x24cdb4: 0xc0651a4  jal         func_194690
label_24cdb8:
    if (ctx->pc == 0x24CDB8u) {
        ctx->pc = 0x24CDB8u;
            // 0x24cdb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CDBCu;
        goto label_24cdbc;
    }
    ctx->pc = 0x24CDB4u;
    SET_GPR_U32(ctx, 31, 0x24CDBCu);
    ctx->pc = 0x24CDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CDB4u;
            // 0x24cdb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194690u;
    if (runtime->hasFunction(0x194690u)) {
        auto targetFn = runtime->lookupFunction(0x194690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDBCu; }
        if (ctx->pc != 0x24CDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOffsetNo__13CDataRoboPartFv_0x194690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CDBCu; }
        if (ctx->pc != 0x24CDBCu) { return; }
    }
    ctx->pc = 0x24CDBCu;
label_24cdbc:
    // 0x24cdbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24cdbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cdc0:
    // 0x24cdc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24cdc4:
    // 0x24cdc4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24cdc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24cdc8:
    // 0x24cdc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24cdcc:
    // 0x24cdcc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x24cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_24cdd0:
    // 0x24cdd0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x24cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24cdd4:
    // 0x24cdd4: 0x24841310  addiu       $a0, $a0, 0x1310
    ctx->pc = 0x24cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
label_24cdd8:
    // 0x24cdd8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_24cddc:
    // 0x24cddc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_24cde0:
    // 0x24cde0: 0x24631314  addiu       $v1, $v1, 0x1314
    ctx->pc = 0x24cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4884));
label_24cde4:
    // 0x24cde4: 0x24421318  addiu       $v0, $v0, 0x1318
    ctx->pc = 0x24cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4888));
label_24cde8:
    // 0x24cde8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24cdec:
    // 0x24cdec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24cdf0:
    // 0x24cdf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24cdf4:
    // 0x24cdf4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24cdf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_24cdf8:
    // 0x24cdf8: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x24cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24cdfc:
    // 0x24cdfc: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x24cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24ce00:
    // 0x24ce00: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x24ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_24ce04:
    // 0x24ce04: 0x320f809  jalr        $t9
label_24ce08:
    if (ctx->pc == 0x24CE08u) {
        ctx->pc = 0x24CE08u;
            // 0x24ce08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CE0Cu;
        goto label_24ce0c;
    }
    ctx->pc = 0x24CE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CE0Cu);
        ctx->pc = 0x24CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE04u;
            // 0x24ce08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CE0Cu; }
            if (ctx->pc != 0x24CE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24CE0Cu;
label_24ce0c:
    // 0x24ce0c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24ce0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24ce10:
    // 0x24ce10: 0x8c22caa8  lw          $v0, -0x3558($at)
    ctx->pc = 0x24ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953640)));
label_24ce14:
    // 0x24ce14: 0xc0aebb4  jal         func_2BAED0
label_24ce18:
    if (ctx->pc == 0x24CE18u) {
        ctx->pc = 0x24CE18u;
            // 0x24ce18: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x24CE1Cu;
        goto label_24ce1c;
    }
    ctx->pc = 0x24CE14u;
    SET_GPR_U32(ctx, 31, 0x24CE1Cu);
    ctx->pc = 0x24CE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE14u;
            // 0x24ce18: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAED0u;
    if (runtime->hasFunction(0x2BAED0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE1Cu; }
        if (ctx->pc != 0x24CE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuRoboPartsLightOff__FP8mgCFrame_0x2baed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE1Cu; }
        if (ctx->pc != 0x24CE1Cu) { return; }
    }
    ctx->pc = 0x24CE1Cu;
label_24ce1c:
    // 0x24ce1c: 0x1000000b  b           . + 4 + (0xB << 2)
label_24ce20:
    if (ctx->pc == 0x24CE20u) {
        ctx->pc = 0x24CE24u;
        goto label_24ce24;
    }
    ctx->pc = 0x24CE1Cu;
    {
        const bool branch_taken_0x24ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce1c) {
            ctx->pc = 0x24CE4Cu;
            goto label_24ce4c;
        }
    }
    ctx->pc = 0x24CE24u;
label_24ce24:
    // 0x24ce24: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24ce24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24ce28:
    // 0x24ce28: 0x3c02c208  lui         $v0, 0xC208
    ctx->pc = 0x24ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49672 << 16));
label_24ce2c:
    // 0x24ce2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24ce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24ce30:
    // 0x24ce30: 0x3c03c190  lui         $v1, 0xC190
    ctx->pc = 0x24ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49552 << 16));
label_24ce34:
    // 0x24ce34: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24ce34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_24ce38:
    // 0x24ce38: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x24ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
label_24ce3c:
    // 0x24ce3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24ce3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_24ce40:
    // 0x24ce40: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24ce40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_24ce44:
    // 0x24ce44: 0x320f809  jalr        $t9
label_24ce48:
    if (ctx->pc == 0x24CE48u) {
        ctx->pc = 0x24CE48u;
            // 0x24ce48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CE4Cu;
        goto label_24ce4c;
    }
    ctx->pc = 0x24CE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CE4Cu);
        ctx->pc = 0x24CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE44u;
            // 0x24ce48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CE4Cu; }
            if (ctx->pc != 0x24CE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24CE4Cu;
label_24ce4c:
    // 0x24ce4c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x24ce4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24ce50:
    // 0x24ce50: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x24ce50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_24ce54:
    // 0x24ce54: 0x320f809  jalr        $t9
label_24ce58:
    if (ctx->pc == 0x24CE58u) {
        ctx->pc = 0x24CE58u;
            // 0x24ce58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CE5Cu;
        goto label_24ce5c;
    }
    ctx->pc = 0x24CE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24CE5Cu);
        ctx->pc = 0x24CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE54u;
            // 0x24ce58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24CE5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24CE5Cu; }
            if (ctx->pc != 0x24CE5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24CE5Cu;
label_24ce5c:
    // 0x24ce5c: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x24ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_24ce60:
    // 0x24ce60: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24ce60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ce64:
    // 0x24ce64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24ce64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ce68:
    // 0x24ce68: 0xa0510001  sb          $s1, 0x1($v0)
    ctx->pc = 0x24ce68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 17));
label_24ce6c:
    // 0x24ce6c: 0x8e0401a8  lw          $a0, 0x1A8($s0)
    ctx->pc = 0x24ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_24ce70:
    // 0x24ce70: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x24ce70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_24ce74:
    // 0x24ce74: 0xc0896c8  jal         func_225B20
label_24ce78:
    if (ctx->pc == 0x24CE78u) {
        ctx->pc = 0x24CE78u;
            // 0x24ce78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CE7Cu;
        goto label_24ce7c;
    }
    ctx->pc = 0x24CE74u;
    SET_GPR_U32(ctx, 31, 0x24CE7Cu);
    ctx->pc = 0x24CE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE74u;
            // 0x24ce78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE7Cu; }
        if (ctx->pc != 0x24CE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CE7Cu; }
        if (ctx->pc != 0x24CE7Cu) { return; }
    }
    ctx->pc = 0x24CE7Cu;
label_24ce7c:
    // 0x24ce7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24ce80:
    // 0x24ce80: 0xaf8095a8  sw          $zero, -0x6A58($gp)
    ctx->pc = 0x24ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940072), GPR_U32(ctx, 0));
label_24ce84:
    // 0x24ce84: 0xa7828364  sh          $v0, -0x7C9C($gp)
    ctx->pc = 0x24ce84u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935396), (uint16_t)GPR_U32(ctx, 2));
label_24ce88:
    // 0x24ce88: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x24ce88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24ce8c:
    // 0x24ce8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24ce8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24ce90:
    // 0x24ce90: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_24ce94:
    if (ctx->pc == 0x24CE94u) {
        ctx->pc = 0x24CE94u;
            // 0x24ce94: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24CE98u;
        goto label_24ce98;
    }
    ctx->pc = 0x24CE90u;
    {
        const bool branch_taken_0x24ce90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CE90u;
            // 0x24ce94: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce90) {
            ctx->pc = 0x24CEACu;
            goto label_24ceac;
        }
    }
    ctx->pc = 0x24CE98u;
label_24ce98:
    // 0x24ce98: 0x8c23caa0  lw          $v1, -0x3560($at)
    ctx->pc = 0x24ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24ce9c:
    // 0x24ce9c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24ce9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24cea0:
    // 0x24cea0: 0xaf8395a8  sw          $v1, -0x6A58($gp)
    ctx->pc = 0x24cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940072), GPR_U32(ctx, 3));
label_24cea4:
    // 0x24cea4: 0x8422cc10  lh          $v0, -0x33F0($at)
    ctx->pc = 0x24cea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954000)));
label_24cea8:
    // 0x24cea8: 0xa7828364  sh          $v0, -0x7C9C($gp)
    ctx->pc = 0x24cea8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935396), (uint16_t)GPR_U32(ctx, 2));
label_24ceac:
    // 0x24ceac: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x24ceacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24ceb0:
    // 0x24ceb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24ceb4:
    // 0x24ceb4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_24ceb8:
    if (ctx->pc == 0x24CEB8u) {
        ctx->pc = 0x24CEB8u;
            // 0x24ceb8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x24CEBCu;
        goto label_24cebc;
    }
    ctx->pc = 0x24CEB4u;
    {
        const bool branch_taken_0x24ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEB4u;
            // 0x24ceb8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ceb4) {
            ctx->pc = 0x24CED8u;
            goto label_24ced8;
        }
    }
    ctx->pc = 0x24CEBCu;
label_24cebc:
    // 0x24cebc: 0x8c22caa0  lw          $v0, -0x3560($at)
    ctx->pc = 0x24cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24cec0:
    // 0x24cec0: 0xaf8295a8  sw          $v0, -0x6A58($gp)
    ctx->pc = 0x24cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940072), GPR_U32(ctx, 2));
label_24cec4:
    // 0x24cec4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x24cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_24cec8:
    // 0x24cec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24cecc:
    if (ctx->pc == 0x24CECCu) {
        ctx->pc = 0x24CED0u;
        goto label_24ced0;
    }
    ctx->pc = 0x24CEC8u;
    {
        const bool branch_taken_0x24cec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cec8) {
            ctx->pc = 0x24CED8u;
            goto label_24ced8;
        }
    }
    ctx->pc = 0x24CED0u;
label_24ced0:
    // 0x24ced0: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x24ced0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_24ced4:
    // 0x24ced4: 0xa7828364  sh          $v0, -0x7C9C($gp)
    ctx->pc = 0x24ced4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935396), (uint16_t)GPR_U32(ctx, 2));
label_24ced8:
    // 0x24ced8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x24ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_24cedc:
    // 0x24cedc: 0x8f8595a8  lw          $a1, -0x6A58($gp)
    ctx->pc = 0x24cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940072)));
label_24cee0:
    // 0x24cee0: 0xc0ae3d0  jal         func_2B8F40
label_24cee4:
    if (ctx->pc == 0x24CEE4u) {
        ctx->pc = 0x24CEE4u;
            // 0x24cee4: 0x87868364  lh          $a2, -0x7C9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935396)));
        ctx->pc = 0x24CEE8u;
        goto label_24cee8;
    }
    ctx->pc = 0x24CEE0u;
    SET_GPR_U32(ctx, 31, 0x24CEE8u);
    ctx->pc = 0x24CEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CEE0u;
            // 0x24cee4: 0x87868364  lh          $a2, -0x7C9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8F40u;
    if (runtime->hasFunction(0x2B8F40u)) {
        auto targetFn = runtime->lookupFunction(0x2B8F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CEE8u; }
        if (ctx->pc != 0x24CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuTimeStepEnvFunc__FP6CSceneP12CActionCharai_0x2b8f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CEE8u; }
        if (ctx->pc != 0x24CEE8u) { return; }
    }
    ctx->pc = 0x24CEE8u;
label_24cee8:
    // 0x24cee8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24cee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24ceec:
    // 0x24ceec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24cef0:
    // 0x24cef0: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x24cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_24cef4:
    // 0x24cef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cef8:
    // 0x24cef8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24cef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24cefc:
    // 0x24cefc: 0x24a5ba50  addiu       $a1, $a1, -0x45B0
    ctx->pc = 0x24cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949456));
label_24cf00:
    // 0x24cf00: 0xc08e7cc  jal         func_239F30
label_24cf04:
    if (ctx->pc == 0x24CF04u) {
        ctx->pc = 0x24CF04u;
            // 0x24cf04: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->pc = 0x24CF08u;
        goto label_24cf08;
    }
    ctx->pc = 0x24CF00u;
    SET_GPR_U32(ctx, 31, 0x24CF08u);
    ctx->pc = 0x24CF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF00u;
            // 0x24cf04: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CF08u; }
        if (ctx->pc != 0x24CF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CF08u; }
        if (ctx->pc != 0x24CF08u) { return; }
    }
    ctx->pc = 0x24CF08u;
label_24cf08:
    // 0x24cf08: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x24cf08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_24cf0c:
    // 0x24cf0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24cf10:
    // 0x24cf10: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_24cf14:
    if (ctx->pc == 0x24CF14u) {
        ctx->pc = 0x24CF14u;
            // 0x24cf14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CF18u;
        goto label_24cf18;
    }
    ctx->pc = 0x24CF10u;
    {
        const bool branch_taken_0x24cf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF10u;
            // 0x24cf14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf10) {
            ctx->pc = 0x24CF4Cu;
            goto label_24cf4c;
        }
    }
    ctx->pc = 0x24CF18u;
label_24cf18:
    // 0x24cf18: 0x8e0401a8  lw          $a0, 0x1A8($s0)
    ctx->pc = 0x24cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_24cf1c:
    // 0x24cf1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cf20:
    // 0x24cf20: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x24cf20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_24cf24:
    // 0x24cf24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_24cf28:
    if (ctx->pc == 0x24CF28u) {
        ctx->pc = 0x24CF2Cu;
        goto label_24cf2c;
    }
    ctx->pc = 0x24CF24u;
    {
        const bool branch_taken_0x24cf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24cf24) {
            ctx->pc = 0x24CF48u;
            goto label_24cf48;
        }
    }
    ctx->pc = 0x24CF2Cu;
label_24cf2c:
    // 0x24cf2c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x24cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_24cf30:
    // 0x24cf30: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x24cf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
label_24cf34:
    // 0x24cf34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_24cf38:
    if (ctx->pc == 0x24CF38u) {
        ctx->pc = 0x24CF38u;
            // 0x24cf38: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x24CF3Cu;
        goto label_24cf3c;
    }
    ctx->pc = 0x24CF34u;
    {
        const bool branch_taken_0x24cf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF34u;
            // 0x24cf38: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf34) {
            ctx->pc = 0x24CF48u;
            goto label_24cf48;
        }
    }
    ctx->pc = 0x24CF3Cu;
label_24cf3c:
    // 0x24cf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cf40:
    // 0x24cf40: 0xc08e7cc  jal         func_239F30
label_24cf44:
    if (ctx->pc == 0x24CF44u) {
        ctx->pc = 0x24CF44u;
            // 0x24cf44: 0x24a5ba78  addiu       $a1, $a1, -0x4588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949496));
        ctx->pc = 0x24CF48u;
        goto label_24cf48;
    }
    ctx->pc = 0x24CF40u;
    SET_GPR_U32(ctx, 31, 0x24CF48u);
    ctx->pc = 0x24CF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF40u;
            // 0x24cf44: 0x24a5ba78  addiu       $a1, $a1, -0x4588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CF48u; }
        if (ctx->pc != 0x24CF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CF48u; }
        if (ctx->pc != 0x24CF48u) { return; }
    }
    ctx->pc = 0x24CF48u;
label_24cf48:
    // 0x24cf48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24cf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cf4c:
    // 0x24cf4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24cf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24cf50:
    // 0x24cf50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24cf50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24cf54:
    // 0x24cf54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24cf54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24cf58:
    // 0x24cf58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24cf58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24cf5c:
    // 0x24cf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24cf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24cf60:
    // 0x24cf60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24cf64:
    // 0x24cf64: 0x3e00008  jr          $ra
label_24cf68:
    if (ctx->pc == 0x24CF68u) {
        ctx->pc = 0x24CF68u;
            // 0x24cf68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x24CF6Cu;
        goto label_fallthrough_0x24cf64;
    }
    ctx->pc = 0x24CF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF64u;
            // 0x24cf68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24cf64:
    ctx->pc = 0x24CF6Cu;
}
