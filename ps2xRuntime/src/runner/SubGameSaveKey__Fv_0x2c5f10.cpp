#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubGameSaveKey__Fv
// Address: 0x2c5f10 - 0x2c6d30
void SubGameSaveKey__Fv_0x2c5f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubGameSaveKey__Fv_0x2c5f10");
#endif

    switch (ctx->pc) {
        case 0x2c5f44u: goto label_2c5f44;
        case 0x2c5f54u: goto label_2c5f54;
        case 0x2c5f70u: goto label_2c5f70;
        case 0x2c5f98u: goto label_2c5f98;
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5fbcu: goto label_2c5fbc;
        case 0x2c5fc8u: goto label_2c5fc8;
        case 0x2c60b0u: goto label_2c60b0;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60d0u: goto label_2c60d0;
        case 0x2c60e8u: goto label_2c60e8;
        case 0x2c60fcu: goto label_2c60fc;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c6138u: goto label_2c6138;
        case 0x2c6180u: goto label_2c6180;
        case 0x2c61ccu: goto label_2c61cc;
        case 0x2c6274u: goto label_2c6274;
        case 0x2c628cu: goto label_2c628c;
        case 0x2c62c0u: goto label_2c62c0;
        case 0x2c62fcu: goto label_2c62fc;
        case 0x2c6314u: goto label_2c6314;
        case 0x2c632cu: goto label_2c632c;
        case 0x2c6340u: goto label_2c6340;
        case 0x2c6384u: goto label_2c6384;
        case 0x2c639cu: goto label_2c639c;
        case 0x2c63b4u: goto label_2c63b4;
        case 0x2c63d0u: goto label_2c63d0;
        case 0x2c6404u: goto label_2c6404;
        case 0x2c641cu: goto label_2c641c;
        case 0x2c6434u: goto label_2c6434;
        case 0x2c6478u: goto label_2c6478;
        case 0x2c64bcu: goto label_2c64bc;
        case 0x2c6520u: goto label_2c6520;
        case 0x2c6538u: goto label_2c6538;
        case 0x2c6550u: goto label_2c6550;
        case 0x2c6568u: goto label_2c6568;
        case 0x2c65a4u: goto label_2c65a4;
        case 0x2c65e4u: goto label_2c65e4;
        case 0x2c6638u: goto label_2c6638;
        case 0x2c6650u: goto label_2c6650;
        case 0x2c6670u: goto label_2c6670;
        case 0x2c6678u: goto label_2c6678;
        case 0x2c668cu: goto label_2c668c;
        case 0x2c66d0u: goto label_2c66d0;
        case 0x2c66e8u: goto label_2c66e8;
        case 0x2c6700u: goto label_2c6700;
        case 0x2c6724u: goto label_2c6724;
        case 0x2c673cu: goto label_2c673c;
        case 0x2c6764u: goto label_2c6764;
        case 0x2c67a0u: goto label_2c67a0;
        case 0x2c67b0u: goto label_2c67b0;
        case 0x2c67ccu: goto label_2c67cc;
        case 0x2c67f8u: goto label_2c67f8;
        case 0x2c68f0u: goto label_2c68f0;
        case 0x2c6908u: goto label_2c6908;
        case 0x2c6918u: goto label_2c6918;
        case 0x2c6934u: goto label_2c6934;
        case 0x2c6940u: goto label_2c6940;
        case 0x2c6958u: goto label_2c6958;
        case 0x2c6970u: goto label_2c6970;
        case 0x2c6984u: goto label_2c6984;
        case 0x2c6990u: goto label_2c6990;
        case 0x2c69a4u: goto label_2c69a4;
        case 0x2c69b4u: goto label_2c69b4;
        case 0x2c69c0u: goto label_2c69c0;
        case 0x2c69e0u: goto label_2c69e0;
        case 0x2c69ecu: goto label_2c69ec;
        case 0x2c69fcu: goto label_2c69fc;
        case 0x2c6a14u: goto label_2c6a14;
        case 0x2c6a28u: goto label_2c6a28;
        case 0x2c6a3cu: goto label_2c6a3c;
        case 0x2c6a48u: goto label_2c6a48;
        case 0x2c6a58u: goto label_2c6a58;
        case 0x2c6a7cu: goto label_2c6a7c;
        case 0x2c6a90u: goto label_2c6a90;
        case 0x2c6a9cu: goto label_2c6a9c;
        case 0x2c6aacu: goto label_2c6aac;
        case 0x2c6ac0u: goto label_2c6ac0;
        case 0x2c6accu: goto label_2c6acc;
        case 0x2c6adcu: goto label_2c6adc;
        case 0x2c6aecu: goto label_2c6aec;
        case 0x2c6af8u: goto label_2c6af8;
        case 0x2c6b0cu: goto label_2c6b0c;
        case 0x2c6b1cu: goto label_2c6b1c;
        case 0x2c6b30u: goto label_2c6b30;
        case 0x2c6b40u: goto label_2c6b40;
        case 0x2c6b58u: goto label_2c6b58;
        case 0x2c6b6cu: goto label_2c6b6c;
        case 0x2c6b78u: goto label_2c6b78;
        case 0x2c6b84u: goto label_2c6b84;
        case 0x2c6b9cu: goto label_2c6b9c;
        case 0x2c6bdcu: goto label_2c6bdc;
        case 0x2c6be8u: goto label_2c6be8;
        case 0x2c6c08u: goto label_2c6c08;
        case 0x2c6c14u: goto label_2c6c14;
        case 0x2c6c24u: goto label_2c6c24;
        case 0x2c6c34u: goto label_2c6c34;
        case 0x2c6c40u: goto label_2c6c40;
        case 0x2c6c64u: goto label_2c6c64;
        case 0x2c6c88u: goto label_2c6c88;
        case 0x2c6cc0u: goto label_2c6cc0;
        case 0x2c6d10u: goto label_2c6d10;
        default: break;
    }

    ctx->pc = 0x2c5f10u;

    // 0x2c5f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c5f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5f18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c5f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c5f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5f2c: 0x87839d28  lh          $v1, -0x62D8($gp)
    ctx->pc = 0x2c5f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941992)));
    // 0x2c5f30: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C5F30u;
    {
        const bool branch_taken_0x2c5f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5f30) {
            ctx->pc = 0x2C5FB4u;
            goto label_2c5fb4;
        }
    }
    ctx->pc = 0x2C5F38u;
    // 0x2c5f38: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2c5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5f3c: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2C5F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F44u);
    ctx->pc = 0x2C5F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F3Cu;
            // 0x2c5f40: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F44u; }
        if (ctx->pc != 0x2C5F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F44u; }
        if (ctx->pc != 0x2C5F44u) { return; }
    }
    ctx->pc = 0x2C5F44u;
label_2c5f44:
    // 0x2c5f44: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C5F44u;
    {
        const bool branch_taken_0x2c5f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5f44) {
            ctx->pc = 0x2C5FB4u;
            goto label_2c5fb4;
        }
    }
    ctx->pc = 0x2C5F4Cu;
    // 0x2c5f4c: 0xc0bc668  jal         func_2F19A0
    ctx->pc = 0x2C5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F54u);
    ctx->pc = 0x2C5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F4Cu;
            // 0x2c5f50: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19A0u;
    if (runtime->hasFunction(0x2F19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F54u; }
        if (ctx->pc != 0x2C5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishForMC__18CMemoryCardManagerFv_0x2f19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F54u; }
        if (ctx->pc != 0x2C5F54u) { return; }
    }
    ctx->pc = 0x2C5F54u;
label_2c5f54:
    // 0x2c5f54: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c5f54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c5f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5f5c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5F5Cu;
    {
        const bool branch_taken_0x2c5f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F5Cu;
            // 0x2c5f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f5c) {
            ctx->pc = 0x2C5FACu;
            goto label_2c5fac;
        }
    }
    ctx->pc = 0x2C5F64u;
    // 0x2c5f64: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5f68: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C5F68u;
    SET_GPR_U32(ctx, 31, 0x2C5F70u);
    ctx->pc = 0x2C5F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F68u;
            // 0x2c5f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F70u; }
        if (ctx->pc != 0x2C5F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F70u; }
        if (ctx->pc != 0x2C5F70u) { return; }
    }
    ctx->pc = 0x2C5F70u;
label_2c5f70:
    // 0x2c5f70: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5f74: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5f78: 0x8c23d284  lw          $v1, -0x2D7C($at)
    ctx->pc = 0x2c5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955652)));
    // 0x2c5f7c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5f80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c5f84: 0x8c22d280  lw          $v0, -0x2D80($at)
    ctx->pc = 0x2c5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955648)));
    // 0x2c5f88: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5f8c: 0x8c25d2e4  lw          $a1, -0x2D1C($at)
    ctx->pc = 0x2c5f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955748)));
    // 0x2c5f90: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C5F90u;
    SET_GPR_U32(ctx, 31, 0x2C5F98u);
    ctx->pc = 0x2C5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F90u;
            // 0x2c5f94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F98u; }
        if (ctx->pc != 0x2C5F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F98u; }
        if (ctx->pc != 0x2C5F98u) { return; }
    }
    ctx->pc = 0x2C5F98u;
label_2c5f98:
    // 0x2c5f98: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5f9c: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2c5f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2c5fa0: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x2C5FA0u;
    SET_GPR_U32(ctx, 31, 0x2C5FA8u);
    ctx->pc = 0x2C5FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FA0u;
            // 0x2c5fa4: 0x24a5d2e0  addiu       $a1, $a1, -0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FA8u; }
        if (ctx->pc != 0x2C5FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FA8u; }
        if (ctx->pc != 0x2C5FA8u) { return; }
    }
    ctx->pc = 0x2C5FA8u;
label_2c5fa8:
    // 0x2c5fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5fac:
    // 0x2c5fac: 0x1000035a  b           . + 4 + (0x35A << 2)
    ctx->pc = 0x2C5FACu;
    {
        const bool branch_taken_0x2c5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FACu;
            // 0x2c5fb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fac) {
            ctx->pc = 0x2C6D18u;
            goto label_2c6d18;
        }
    }
    ctx->pc = 0x2C5FB4u;
label_2c5fb4:
    // 0x2c5fb4: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2C5FB4u;
    SET_GPR_U32(ctx, 31, 0x2C5FBCu);
    ctx->pc = 0x2C5FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FB4u;
            // 0x2c5fb8: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FBCu; }
        if (ctx->pc != 0x2C5FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FBCu; }
        if (ctx->pc != 0x2C5FBCu) { return; }
    }
    ctx->pc = 0x2C5FBCu;
label_2c5fbc:
    // 0x2c5fbc: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5fc0: 0xc0bc7f0  jal         func_2F1FC0
    ctx->pc = 0x2C5FC0u;
    SET_GPR_U32(ctx, 31, 0x2C5FC8u);
    ctx->pc = 0x2C5FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FC0u;
            // 0x2c5fc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1FC0u;
    if (runtime->hasFunction(0x2F1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FC8u; }
        if (ctx->pc != 0x2C5FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMemoryCardManagerFv_0x2f1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FC8u; }
        if (ctx->pc != 0x2C5FC8u) { return; }
    }
    ctx->pc = 0x2C5FC8u;
label_2c5fc8:
    // 0x2c5fc8: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5fcc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5fd0: 0x87839d24  lh          $v1, -0x62DC($gp)
    ctx->pc = 0x2c5fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941988)));
    // 0x2c5fd4: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x2c5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x2c5fd8: 0x8c31ca40  lw          $s1, -0x35C0($at)
    ctx->pc = 0x2c5fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2c5fdc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2c5fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5fe0: 0x10650206  beq         $v1, $a1, . + 4 + (0x206 << 2)
    ctx->pc = 0x2C5FE0u;
    {
        const bool branch_taken_0x2c5fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C5FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FE0u;
            // 0x2c5fe4: 0x249304d0  addiu       $s3, $a0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fe0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C5FE8u;
    // 0x2c5fe8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2c5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2c5fec: 0x106501df  beq         $v1, $a1, . + 4 + (0x1DF << 2)
    ctx->pc = 0x2C5FECu;
    {
        const bool branch_taken_0x2c5fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C5FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FECu;
            // 0x2c5ff0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fec) {
            ctx->pc = 0x2C676Cu;
            goto label_2c676c;
        }
    }
    ctx->pc = 0x2C5FF4u;
    // 0x2c5ff4: 0x106501c8  beq         $v1, $a1, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2C5FF4u;
    {
        const bool branch_taken_0x2c5ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C5FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FF4u;
            // 0x2c5ff8: 0x240500ca  addiu       $a1, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ff4) {
            ctx->pc = 0x2C6718u;
            goto label_2c6718;
        }
    }
    ctx->pc = 0x2C5FFCu;
    // 0x2c5ffc: 0x106501bc  beq         $v1, $a1, . + 4 + (0x1BC << 2)
    ctx->pc = 0x2C5FFCu;
    {
        const bool branch_taken_0x2c5ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FFCu;
            // 0x2c6000: 0x240500c9  addiu       $a1, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ffc) {
            ctx->pc = 0x2C66F0u;
            goto label_2c66f0;
        }
    }
    ctx->pc = 0x2C6004u;
    // 0x2c6004: 0x106501a3  beq         $v1, $a1, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2C6004u;
    {
        const bool branch_taken_0x2c6004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6004u;
            // 0x2c6008: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6004) {
            ctx->pc = 0x2C6694u;
            goto label_2c6694;
        }
    }
    ctx->pc = 0x2C600Cu;
    // 0x2c600c: 0x1065017d  beq         $v1, $a1, . + 4 + (0x17D << 2)
    ctx->pc = 0x2C600Cu;
    {
        const bool branch_taken_0x2c600c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C600Cu;
            // 0x2c6010: 0x240500a5  addiu       $a1, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c600c) {
            ctx->pc = 0x2C6604u;
            goto label_2c6604;
        }
    }
    ctx->pc = 0x2C6014u;
    // 0x2c6014: 0x1065016f  beq         $v1, $a1, . + 4 + (0x16F << 2)
    ctx->pc = 0x2C6014u;
    {
        const bool branch_taken_0x2c6014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6014u;
            // 0x2c6018: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6014) {
            ctx->pc = 0x2C65D4u;
            goto label_2c65d4;
        }
    }
    ctx->pc = 0x2C601Cu;
    // 0x2c601c: 0x10650154  beq         $v1, $a1, . + 4 + (0x154 << 2)
    ctx->pc = 0x2C601Cu;
    {
        const bool branch_taken_0x2c601c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C601Cu;
            // 0x2c6020: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c601c) {
            ctx->pc = 0x2C6570u;
            goto label_2c6570;
        }
    }
    ctx->pc = 0x2C6024u;
    // 0x2c6024: 0x10650131  beq         $v1, $a1, . + 4 + (0x131 << 2)
    ctx->pc = 0x2C6024u;
    {
        const bool branch_taken_0x2c6024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6024u;
            // 0x2c6028: 0x24050097  addiu       $a1, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6024) {
            ctx->pc = 0x2C64ECu;
            goto label_2c64ec;
        }
    }
    ctx->pc = 0x2C602Cu;
    // 0x2c602c: 0x10650114  beq         $v1, $a1, . + 4 + (0x114 << 2)
    ctx->pc = 0x2C602Cu;
    {
        const bool branch_taken_0x2c602c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C602Cu;
            // 0x2c6030: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c602c) {
            ctx->pc = 0x2C6480u;
            goto label_2c6480;
        }
    }
    ctx->pc = 0x2C6034u;
    // 0x2c6034: 0x106500e8  beq         $v1, $a1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2C6034u;
    {
        const bool branch_taken_0x2c6034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6034u;
            // 0x2c6038: 0x2405006f  addiu       $a1, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6034) {
            ctx->pc = 0x2C63D8u;
            goto label_2c63d8;
        }
    }
    ctx->pc = 0x2C603Cu;
    // 0x2c603c: 0x106500e0  beq         $v1, $a1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2C603Cu;
    {
        const bool branch_taken_0x2c603c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C603Cu;
            // 0x2c6040: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c603c) {
            ctx->pc = 0x2C63C0u;
            goto label_2c63c0;
        }
    }
    ctx->pc = 0x2C6044u;
    // 0x2c6044: 0x106500de  beq         $v1, $a1, . + 4 + (0xDE << 2)
    ctx->pc = 0x2C6044u;
    {
        const bool branch_taken_0x2c6044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6044u;
            // 0x2c6048: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6044) {
            ctx->pc = 0x2C63C0u;
            goto label_2c63c0;
        }
    }
    ctx->pc = 0x2C604Cu;
    // 0x2c604c: 0x106500d5  beq         $v1, $a1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2C604Cu;
    {
        const bool branch_taken_0x2c604c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C604Cu;
            // 0x2c6050: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c604c) {
            ctx->pc = 0x2C63A4u;
            goto label_2c63a4;
        }
    }
    ctx->pc = 0x2C6054u;
    // 0x2c6054: 0x106500bc  beq         $v1, $a1, . + 4 + (0xBC << 2)
    ctx->pc = 0x2C6054u;
    {
        const bool branch_taken_0x2c6054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6054u;
            // 0x2c6058: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6054) {
            ctx->pc = 0x2C6348u;
            goto label_2c6348;
        }
    }
    ctx->pc = 0x2C605Cu;
    // 0x2c605c: 0x1065009a  beq         $v1, $a1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2C605Cu;
    {
        const bool branch_taken_0x2c605c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C605Cu;
            // 0x2c6060: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c605c) {
            ctx->pc = 0x2C62C8u;
            goto label_2c62c8;
        }
    }
    ctx->pc = 0x2C6064u;
    // 0x2c6064: 0x106501e6  beq         $v1, $a1, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x2C6064u;
    {
        const bool branch_taken_0x2c6064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6064u;
            // 0x2c6068: 0x240082a  slt         $at, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6064) {
            ctx->pc = 0x2C6800u;
            goto label_2c6800;
        }
    }
    ctx->pc = 0x2C606Cu;
    // 0x2c606c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2c606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c6070: 0x1065007d  beq         $v1, $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x2C6070u;
    {
        const bool branch_taken_0x2c6070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6070u;
            // 0x2c6074: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6070) {
            ctx->pc = 0x2C6268u;
            goto label_2c6268;
        }
    }
    ctx->pc = 0x2C6078u;
    // 0x2c6078: 0x1065007b  beq         $v1, $a1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2C6078u;
    {
        const bool branch_taken_0x2c6078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6078u;
            // 0x2c607c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6078) {
            ctx->pc = 0x2C6268u;
            goto label_2c6268;
        }
    }
    ctx->pc = 0x2C6080u;
    // 0x2c6080: 0x10650045  beq         $v1, $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C6080u;
    {
        const bool branch_taken_0x2c6080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C6084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6080u;
            // 0x2c6084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6080) {
            ctx->pc = 0x2C6198u;
            goto label_2c6198;
        }
    }
    ctx->pc = 0x2C6088u;
    // 0x2c6088: 0x1065002f  beq         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C6088u;
    {
        const bool branch_taken_0x2c6088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c6088) {
            ctx->pc = 0x2C6148u;
            goto label_2c6148;
        }
    }
    ctx->pc = 0x2C6090u;
    // 0x2c6090: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6090u;
    {
        const bool branch_taken_0x2c6090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6090u;
            // 0x2c6094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6090) {
            ctx->pc = 0x2C60A8u;
            goto label_2c60a8;
        }
    }
    ctx->pc = 0x2C6098u;
    // 0x2c6098: 0x107201d8  beq         $v1, $s2, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x2C6098u;
    {
        const bool branch_taken_0x2c6098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c6098) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C60A0u;
    // 0x2c60a0: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x2C60A0u;
    {
        const bool branch_taken_0x2c60a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c60a0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C60A8u;
label_2c60a8:
    // 0x2c60a8: 0xc08f8b8  jal         func_23E2E0
    ctx->pc = 0x2C60A8u;
    SET_GPR_U32(ctx, 31, 0x2C60B0u);
    ctx->pc = 0x23E2E0u;
    if (runtime->hasFunction(0x23E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60B0u; }
        if (ctx->pc != 0x2C60B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCheckPushButton__Fi_0x23e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60B0u; }
        if (ctx->pc != 0x2C60B0u) { return; }
    }
    ctx->pc = 0x2C60B0u;
label_2c60b0:
    // 0x2c60b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c60b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c60b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c60b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C60B8u;
    {
        const bool branch_taken_0x2c60b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60B8u;
            // 0x2c60bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60b8) {
            ctx->pc = 0x2C6110u;
            goto label_2c6110;
        }
    }
    ctx->pc = 0x2C60C0u;
    // 0x2c60c0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C60C0u;
    SET_GPR_U32(ctx, 31, 0x2C60C8u);
    ctx->pc = 0x2C60C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60C0u;
            // 0x2c60c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60C8u; }
        if (ctx->pc != 0x2C60C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60C8u; }
        if (ctx->pc != 0x2C60C8u) { return; }
    }
    ctx->pc = 0x2C60C8u;
label_2c60c8:
    // 0x2c60c8: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C60C8u;
    SET_GPR_U32(ctx, 31, 0x2C60D0u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60D0u; }
        if (ctx->pc != 0x2C60D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60D0u; }
        if (ctx->pc != 0x2C60D0u) { return; }
    }
    ctx->pc = 0x2C60D0u;
label_2c60d0:
    // 0x2c60d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c60d4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C60D4u;
    {
        const bool branch_taken_0x2c60d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c60d4) {
            ctx->pc = 0x2C60E0u;
            goto label_2c60e0;
        }
    }
    ctx->pc = 0x2C60DCu;
    // 0x2c60dc: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c60e0:
    // 0x2c60e0: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C60E0u;
    SET_GPR_U32(ctx, 31, 0x2C60E8u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60E8u; }
        if (ctx->pc != 0x2C60E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60E8u; }
        if (ctx->pc != 0x2C60E8u) { return; }
    }
    ctx->pc = 0x2C60E8u;
label_2c60e8:
    // 0x2c60e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c60ec: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C60ECu;
    {
        const bool branch_taken_0x2c60ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c60ec) {
            ctx->pc = 0x2C6108u;
            goto label_2c6108;
        }
    }
    ctx->pc = 0x2C60F4u;
    // 0x2c60f4: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2C60F4u;
    SET_GPR_U32(ctx, 31, 0x2C60FCu);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60FCu; }
        if (ctx->pc != 0x2C60FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60FCu; }
        if (ctx->pc != 0x2C60FCu) { return; }
    }
    ctx->pc = 0x2C60FCu;
label_2c60fc:
    // 0x2c60fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6100: 0x144301be  bne         $v0, $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x2C6100u;
    {
        const bool branch_taken_0x2c6100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6100) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6108u;
label_2c6108:
    // 0x2c6108: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x2C6108u;
    {
        const bool branch_taken_0x2c6108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6108u;
            // 0x2c610c: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6108) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6110u;
label_2c6110:
    // 0x2c6110: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c6110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6114: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c6114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6118: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x2C6118u;
    SET_GPR_U32(ctx, 31, 0x2C6120u);
    ctx->pc = 0x2C611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6118u;
            // 0x2c611c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6120u; }
        if (ctx->pc != 0x2C6120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6120u; }
        if (ctx->pc != 0x2C6120u) { return; }
    }
    ctx->pc = 0x2C6120u;
label_2c6120:
    // 0x2c6120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6124: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2c6128: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2C6128u;
    {
        const bool branch_taken_0x2c6128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6128u;
            // 0x2c612c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6128) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6130u;
    // 0x2c6130: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6130u;
    SET_GPR_U32(ctx, 31, 0x2C6138u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6138u; }
        if (ctx->pc != 0x2C6138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6138u; }
        if (ctx->pc != 0x2C6138u) { return; }
    }
    ctx->pc = 0x2C6138u;
label_2c6138:
    // 0x2c6138: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x2c613c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c613cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6140: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x2C6140u;
    {
        const bool branch_taken_0x2c6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6140u;
            // 0x2c6144: 0xa3829d2c  sb          $v0, -0x62D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941996), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6140) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6148u;
label_2c6148:
    // 0x2c6148: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c6148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c614c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C614Cu;
    {
        const bool branch_taken_0x2c614c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c614c) {
            ctx->pc = 0x2C615Cu;
            goto label_2c615c;
        }
    }
    ctx->pc = 0x2C6154u;
    // 0x2c6154: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6154u;
    {
        const bool branch_taken_0x2c6154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c6154) {
            ctx->pc = 0x2C616Cu;
            goto label_2c616c;
        }
    }
    ctx->pc = 0x2C615Cu;
label_2c615c:
    // 0x2c615c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c615cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2c6160: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c6160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c6164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6164u;
    {
        const bool branch_taken_0x2c6164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6164u;
            // 0x2c6168: 0x24640d5c  addiu       $a0, $v1, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6164) {
            ctx->pc = 0x2C6170u;
            goto label_2c6170;
        }
    }
    ctx->pc = 0x2C616Cu;
label_2c616c:
    // 0x2c616c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6170:
    // 0x2c6170: 0x104001a2  beqz        $v0, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x2C6170u;
    {
        const bool branch_taken_0x2c6170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6170) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6178u;
    // 0x2c6178: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C6178u;
    SET_GPR_U32(ctx, 31, 0x2C6180u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6180u; }
        if (ctx->pc != 0x2C6180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6180u; }
        if (ctx->pc != 0x2C6180u) { return; }
    }
    ctx->pc = 0x2C6180u;
label_2c6180:
    // 0x2c6180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6180u;
    {
        const bool branch_taken_0x2c6180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6180u;
            // 0x2c6184: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6180) {
            ctx->pc = 0x2C6190u;
            goto label_2c6190;
        }
    }
    ctx->pc = 0x2C6188u;
    // 0x2c6188: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x2C6188u;
    {
        const bool branch_taken_0x2c6188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6188u;
            // 0x2c618c: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6188) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6190u;
label_2c6190:
    // 0x2c6190: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x2C6190u;
    {
        const bool branch_taken_0x2c6190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6190) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6198u;
label_2c6198:
    // 0x2c6198: 0x83859d2c  lb          $a1, -0x62D4($gp)
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c619c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C619Cu;
    {
        const bool branch_taken_0x2c619c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C619Cu;
            // 0x2c61a0: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c619c) {
            ctx->pc = 0x2C61B4u;
            goto label_2c61b4;
        }
    }
    ctx->pc = 0x2C61A4u;
    // 0x2c61a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c61a8: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C61A8u;
    {
        const bool branch_taken_0x2c61a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61A8u;
            // 0x2c61ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61a8) {
            ctx->pc = 0x2C61BCu;
            goto label_2c61bc;
        }
    }
    ctx->pc = 0x2C61B0u;
    // 0x2c61b0: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2c61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c61b4:
    // 0x2c61b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c61b8: 0x24700d5c  addiu       $s0, $v1, 0xD5C
    ctx->pc = 0x2c61b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3420));
label_2c61bc:
    // 0x2c61bc: 0x1040018f  beqz        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x2C61BCu;
    {
        const bool branch_taken_0x2c61bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61BCu;
            // 0x2c61c0: 0x249310e0  addiu       $s3, $a0, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61bc) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C61C4u;
    // 0x2c61c4: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C61C4u;
    SET_GPR_U32(ctx, 31, 0x2C61CCu);
    ctx->pc = 0x2C61C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61C4u;
            // 0x2c61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C61CCu; }
        if (ctx->pc != 0x2C61CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C61CCu; }
        if (ctx->pc != 0x2C61CCu) { return; }
    }
    ctx->pc = 0x2C61CCu;
label_2c61cc:
    // 0x2c61cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C61CCu;
    {
        const bool branch_taken_0x2c61cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c61cc) {
            ctx->pc = 0x2C61DCu;
            goto label_2c61dc;
        }
    }
    ctx->pc = 0x2C61D4u;
    // 0x2c61d4: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2C61D4u;
    {
        const bool branch_taken_0x2c61d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61D4u;
            // 0x2c61d8: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61d4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C61DCu;
label_2c61dc:
    // 0x2c61dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c61e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C61E0u;
    {
        const bool branch_taken_0x2c61e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c61e0) {
            ctx->pc = 0x2C6208u;
            goto label_2c6208;
        }
    }
    ctx->pc = 0x2C61E8u;
    // 0x2c61e8: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c61e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c61ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C61ECu;
    {
        const bool branch_taken_0x2c61ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C61F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61ECu;
            // 0x2c61f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61ec) {
            ctx->pc = 0x2C61F8u;
            goto label_2c61f8;
        }
    }
    ctx->pc = 0x2C61F4u;
    // 0x2c61f4: 0x241200a0  addiu       $s2, $zero, 0xA0
    ctx->pc = 0x2c61f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2c61f8:
    // 0x2c61f8: 0x14620180  bne         $v1, $v0, . + 4 + (0x180 << 2)
    ctx->pc = 0x2C61F8u;
    {
        const bool branch_taken_0x2c61f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c61f8) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6200u;
    // 0x2c6200: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x2C6200u;
    {
        const bool branch_taken_0x2c6200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6200u;
            // 0x2c6204: 0x241200a5  addiu       $s2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6200) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6208u;
label_2c6208:
    // 0x2c6208: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c6208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c620c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6210: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6210u;
    {
        const bool branch_taken_0x2c6210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6210u;
            // 0x2c6214: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6210) {
            ctx->pc = 0x2C6238u;
            goto label_2c6238;
        }
    }
    ctx->pc = 0x2C6218u;
    // 0x2c6218: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c6218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c621c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C621Cu;
    {
        const bool branch_taken_0x2c621c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C621Cu;
            // 0x2c6220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c621c) {
            ctx->pc = 0x2C6228u;
            goto label_2c6228;
        }
    }
    ctx->pc = 0x2C6224u;
    // 0x2c6224: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x2c6224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c6228:
    // 0x2c6228: 0x14620174  bne         $v1, $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x2C6228u;
    {
        const bool branch_taken_0x2c6228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6228) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6230u;
    // 0x2c6230: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x2C6230u;
    {
        const bool branch_taken_0x2c6230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6230u;
            // 0x2c6234: 0x241200c8  addiu       $s2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6230) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6238u;
label_2c6238:
    // 0x2c6238: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6238u;
    {
        const bool branch_taken_0x2c6238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6238) {
            ctx->pc = 0x2C6248u;
            goto label_2c6248;
        }
    }
    ctx->pc = 0x2C6240u;
    // 0x2c6240: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x2C6240u;
    {
        const bool branch_taken_0x2c6240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6240u;
            // 0x2c6244: 0x2412006f  addiu       $s2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6240) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6248u;
label_2c6248:
    // 0x2c6248: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c6248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c624c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C624Cu;
    {
        const bool branch_taken_0x2c624c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C624Cu;
            // 0x2c6250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c624c) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C6254u;
    // 0x2c6254: 0x24120096  addiu       $s2, $zero, 0x96
    ctx->pc = 0x2c6254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2c6258:
    // 0x2c6258: 0x14620168  bne         $v1, $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x2C6258u;
    {
        const bool branch_taken_0x2c6258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6258) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6260u;
    // 0x2c6260: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2C6260u;
    {
        const bool branch_taken_0x2c6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6260u;
            // 0x2c6264: 0x241200fa  addiu       $s2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6260) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6268u;
label_2c6268:
    // 0x2c6268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c626c: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C626Cu;
    SET_GPR_U32(ctx, 31, 0x2C6274u);
    ctx->pc = 0x2C6270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C626Cu;
            // 0x2c6270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6274u; }
        if (ctx->pc != 0x2C6274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6274u; }
        if (ctx->pc != 0x2C6274u) { return; }
    }
    ctx->pc = 0x2C6274u;
label_2c6274:
    // 0x2c6274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c627c: 0x1604000c  bne         $s0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C627Cu;
    {
        const bool branch_taken_0x2c627c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C6280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C627Cu;
            // 0x2c6280: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c627c) {
            ctx->pc = 0x2C62B0u;
            goto label_2c62b0;
        }
    }
    ctx->pc = 0x2C6284u;
    // 0x2c6284: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6284u;
    SET_GPR_U32(ctx, 31, 0x2C628Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C628Cu; }
        if (ctx->pc != 0x2C628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C628Cu; }
        if (ctx->pc != 0x2C628Cu) { return; }
    }
    ctx->pc = 0x2C628Cu;
label_2c628c:
    // 0x2c628c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c628cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c6290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6294: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x2c6294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
    // 0x2c6298: 0xa7829d28  sh          $v0, -0x62D8($gp)
    ctx->pc = 0x2c6298u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941992), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c629c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c629cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c62a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c62a4: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x2c62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
    // 0x2c62a8: 0xa7829d24  sh          $v0, -0x62DC($gp)
    ctx->pc = 0x2c62a8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941988), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c62ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c62acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c62b0:
    // 0x2c62b0: 0x16020152  bne         $s0, $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x2C62B0u;
    {
        const bool branch_taken_0x2c62b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C62B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62B0u;
            // 0x2c62b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62b0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C62B8u;
    // 0x2c62b8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C62B8u;
    SET_GPR_U32(ctx, 31, 0x2C62C0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62C0u; }
        if (ctx->pc != 0x2C62C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62C0u; }
        if (ctx->pc != 0x2C62C0u) { return; }
    }
    ctx->pc = 0x2C62C0u;
label_2c62c0:
    // 0x2c62c0: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2C62C0u;
    {
        const bool branch_taken_0x2c62c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62C0u;
            // 0x2c62c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62c0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C62C8u;
label_2c62c8:
    // 0x2c62c8: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c62c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c62cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C62CCu;
    {
        const bool branch_taken_0x2c62cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62CCu;
            // 0x2c62d0: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62cc) {
            ctx->pc = 0x2C62E4u;
            goto label_2c62e4;
        }
    }
    ctx->pc = 0x2C62D4u;
    // 0x2c62d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c62d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C62D8u;
    {
        const bool branch_taken_0x2c62d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c62d8) {
            ctx->pc = 0x2C62F0u;
            goto label_2c62f0;
        }
    }
    ctx->pc = 0x2C62E0u;
    // 0x2c62e0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c62e4:
    // 0x2c62e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c62e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C62E8u;
    {
        const bool branch_taken_0x2c62e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62E8u;
            // 0x2c62ec: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62e8) {
            ctx->pc = 0x2C62F4u;
            goto label_2c62f4;
        }
    }
    ctx->pc = 0x2C62F0u;
label_2c62f0:
    // 0x2c62f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c62f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c62f4:
    // 0x2c62f4: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C62F4u;
    SET_GPR_U32(ctx, 31, 0x2C62FCu);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62FCu; }
        if (ctx->pc != 0x2C62FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62FCu; }
        if (ctx->pc != 0x2C62FCu) { return; }
    }
    ctx->pc = 0x2C62FCu;
label_2c62fc:
    // 0x2c62fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C62FCu;
    {
        const bool branch_taken_0x2c62fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62FCu;
            // 0x2c6300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62fc) {
            ctx->pc = 0x2C630Cu;
            goto label_2c630c;
        }
    }
    ctx->pc = 0x2C6304u;
    // 0x2c6304: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x2C6304u;
    {
        const bool branch_taken_0x2c6304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6304u;
            // 0x2c6308: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6304) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C630Cu;
label_2c630c:
    // 0x2c630c: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C630Cu;
    SET_GPR_U32(ctx, 31, 0x2C6314u);
    ctx->pc = 0x2C6310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C630Cu;
            // 0x2c6310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6314u; }
        if (ctx->pc != 0x2C6314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6314u; }
        if (ctx->pc != 0x2C6314u) { return; }
    }
    ctx->pc = 0x2C6314u;
label_2c6314:
    // 0x2c6314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c631c: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C631Cu;
    {
        const bool branch_taken_0x2c631c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C6320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C631Cu;
            // 0x2c6320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c631c) {
            ctx->pc = 0x2C6330u;
            goto label_2c6330;
        }
    }
    ctx->pc = 0x2C6324u;
    // 0x2c6324: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6324u;
    SET_GPR_U32(ctx, 31, 0x2C632Cu);
    ctx->pc = 0x2C6328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6324u;
            // 0x2c6328: 0x24120065  addiu       $s2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C632Cu; }
        if (ctx->pc != 0x2C632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C632Cu; }
        if (ctx->pc != 0x2C632Cu) { return; }
    }
    ctx->pc = 0x2C632Cu;
label_2c632c:
    // 0x2c632c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c6330:
    // 0x2c6330: 0x16020132  bne         $s0, $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x2C6330u;
    {
        const bool branch_taken_0x2c6330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6330u;
            // 0x2c6334: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6330) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6338u;
    // 0x2c6338: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6338u;
    SET_GPR_U32(ctx, 31, 0x2C6340u);
    ctx->pc = 0x2C633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6338u;
            // 0x2c633c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6340u; }
        if (ctx->pc != 0x2C6340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6340u; }
        if (ctx->pc != 0x2C6340u) { return; }
    }
    ctx->pc = 0x2C6340u;
label_2c6340:
    // 0x2c6340: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x2C6340u;
    {
        const bool branch_taken_0x2c6340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6340) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6348u;
label_2c6348:
    // 0x2c6348: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x2C6348u;
    {
        const bool branch_taken_0x2c6348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6348) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6350u;
    // 0x2c6350: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c6350u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6354: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6354u;
    {
        const bool branch_taken_0x2c6354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6354u;
            // 0x2c6358: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6354) {
            ctx->pc = 0x2C636Cu;
            goto label_2c636c;
        }
    }
    ctx->pc = 0x2C635Cu;
    // 0x2c635c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6360: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6360u;
    {
        const bool branch_taken_0x2c6360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6360) {
            ctx->pc = 0x2C6378u;
            goto label_2c6378;
        }
    }
    ctx->pc = 0x2C6368u;
    // 0x2c6368: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c6368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c636c:
    // 0x2c636c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c6370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6370u;
    {
        const bool branch_taken_0x2c6370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6370u;
            // 0x2c6374: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6370) {
            ctx->pc = 0x2C637Cu;
            goto label_2c637c;
        }
    }
    ctx->pc = 0x2C6378u;
label_2c6378:
    // 0x2c6378: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c6378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c637c:
    // 0x2c637c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C637Cu;
    SET_GPR_U32(ctx, 31, 0x2C6384u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6384u; }
        if (ctx->pc != 0x2C6384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6384u; }
        if (ctx->pc != 0x2C6384u) { return; }
    }
    ctx->pc = 0x2C6384u;
label_2c6384:
    // 0x2c6384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6384u;
    {
        const bool branch_taken_0x2c6384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6384u;
            // 0x2c6388: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6384) {
            ctx->pc = 0x2C6394u;
            goto label_2c6394;
        }
    }
    ctx->pc = 0x2C638Cu;
    // 0x2c638c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x2C638Cu;
    {
        const bool branch_taken_0x2c638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C638Cu;
            // 0x2c6390: 0x2412006e  addiu       $s2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c638c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6394u;
label_2c6394:
    // 0x2c6394: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6394u;
    SET_GPR_U32(ctx, 31, 0x2C639Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C639Cu; }
        if (ctx->pc != 0x2C639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C639Cu; }
        if (ctx->pc != 0x2C639Cu) { return; }
    }
    ctx->pc = 0x2C639Cu;
label_2c639c:
    // 0x2c639c: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2C639Cu;
    {
        const bool branch_taken_0x2c639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C639Cu;
            // 0x2c63a0: 0x24120066  addiu       $s2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c639c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C63A4u;
label_2c63a4:
    // 0x2c63a4: 0x12000115  beqz        $s0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2C63A4u;
    {
        const bool branch_taken_0x2c63a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63A4u;
            // 0x2c63a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63a4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C63ACu;
    // 0x2c63ac: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C63ACu;
    SET_GPR_U32(ctx, 31, 0x2C63B4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63B4u; }
        if (ctx->pc != 0x2C63B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63B4u; }
        if (ctx->pc != 0x2C63B4u) { return; }
    }
    ctx->pc = 0x2C63B4u;
label_2c63b4:
    // 0x2c63b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c63b8: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x2C63B8u;
    {
        const bool branch_taken_0x2c63b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63B8u;
            // 0x2c63bc: 0xa7829d28  sh          $v0, -0x62D8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941992), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63b8) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C63C0u;
label_2c63c0:
    // 0x2c63c0: 0x1200010e  beqz        $s0, . + 4 + (0x10E << 2)
    ctx->pc = 0x2C63C0u;
    {
        const bool branch_taken_0x2c63c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63C0u;
            // 0x2c63c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63c0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C63C8u;
    // 0x2c63c8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C63C8u;
    SET_GPR_U32(ctx, 31, 0x2C63D0u);
    ctx->pc = 0x2C63CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63C8u;
            // 0x2c63cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63D0u; }
        if (ctx->pc != 0x2C63D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C63D0u; }
        if (ctx->pc != 0x2C63D0u) { return; }
    }
    ctx->pc = 0x2C63D0u;
label_2c63d0:
    // 0x2c63d0: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x2C63D0u;
    {
        const bool branch_taken_0x2c63d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c63d0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C63D8u;
label_2c63d8:
    // 0x2c63d8: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c63d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c63dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C63DCu;
    {
        const bool branch_taken_0x2c63dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63DCu;
            // 0x2c63e0: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63dc) {
            ctx->pc = 0x2C63F4u;
            goto label_2c63f4;
        }
    }
    ctx->pc = 0x2C63E4u;
    // 0x2c63e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c63e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C63E8u;
    {
        const bool branch_taken_0x2c63e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C63ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63E8u;
            // 0x2c63ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63e8) {
            ctx->pc = 0x2C63FCu;
            goto label_2c63fc;
        }
    }
    ctx->pc = 0x2C63F0u;
    // 0x2c63f0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c63f4:
    // 0x2c63f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c63f8: 0x24530d5c  addiu       $s3, $v0, 0xD5C
    ctx->pc = 0x2c63f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c63fc:
    // 0x2c63fc: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C63FCu;
    SET_GPR_U32(ctx, 31, 0x2C6404u);
    ctx->pc = 0x2C6400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C63FCu;
            // 0x2c6400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6404u; }
        if (ctx->pc != 0x2C6404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6404u; }
        if (ctx->pc != 0x2C6404u) { return; }
    }
    ctx->pc = 0x2C6404u;
label_2c6404:
    // 0x2c6404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6404u;
    {
        const bool branch_taken_0x2c6404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6404u;
            // 0x2c6408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6404) {
            ctx->pc = 0x2C6414u;
            goto label_2c6414;
        }
    }
    ctx->pc = 0x2C640Cu;
    // 0x2c640c: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x2C640Cu;
    {
        const bool branch_taken_0x2c640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C640Cu;
            // 0x2c6410: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c640c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6414u;
label_2c6414:
    // 0x2c6414: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C6414u;
    SET_GPR_U32(ctx, 31, 0x2C641Cu);
    ctx->pc = 0x2C6418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6414u;
            // 0x2c6418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C641Cu; }
        if (ctx->pc != 0x2C641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C641Cu; }
        if (ctx->pc != 0x2C641Cu) { return; }
    }
    ctx->pc = 0x2C641Cu;
label_2c641c:
    // 0x2c641c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c641cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6424: 0x16040010  bne         $s0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6424u;
    {
        const bool branch_taken_0x2c6424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C6428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6424u;
            // 0x2c6428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6424) {
            ctx->pc = 0x2C6468u;
            goto label_2c6468;
        }
    }
    ctx->pc = 0x2C642Cu;
    // 0x2c642c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C642Cu;
    SET_GPR_U32(ctx, 31, 0x2C6434u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6434u; }
        if (ctx->pc != 0x2C6434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6434u; }
        if (ctx->pc != 0x2C6434u) { return; }
    }
    ctx->pc = 0x2C6434u;
label_2c6434:
    // 0x2c6434: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c6438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6438u;
    {
        const bool branch_taken_0x2c6438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6438u;
            // 0x2c643c: 0x241200a0  addiu       $s2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6438) {
            ctx->pc = 0x2C6448u;
            goto label_2c6448;
        }
    }
    ctx->pc = 0x2C6440u;
    // 0x2c6440: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2C6440u;
    {
        const bool branch_taken_0x2c6440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6440) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6448u;
label_2c6448:
    // 0x2c6448: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2c6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c644c: 0x8f829d3c  lw          $v0, -0x62C4($gp)
    ctx->pc = 0x2c644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942012)));
    // 0x2c6450: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c6450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c6454: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6454u;
    {
        const bool branch_taken_0x2c6454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6454u;
            // 0x2c6458: 0x24120097  addiu       $s2, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6454) {
            ctx->pc = 0x2C6464u;
            goto label_2c6464;
        }
    }
    ctx->pc = 0x2C645Cu;
    // 0x2c645c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2C645Cu;
    {
        const bool branch_taken_0x2c645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C645Cu;
            // 0x2c6460: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c645c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6464u;
label_2c6464:
    // 0x2c6464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c6468:
    // 0x2c6468: 0x160200e4  bne         $s0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2C6468u;
    {
        const bool branch_taken_0x2c6468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6468u;
            // 0x2c646c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6468) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6470u;
    // 0x2c6470: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6470u;
    SET_GPR_U32(ctx, 31, 0x2C6478u);
    ctx->pc = 0x2C6474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6470u;
            // 0x2c6474: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6478u; }
        if (ctx->pc != 0x2C6478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6478u; }
        if (ctx->pc != 0x2C6478u) { return; }
    }
    ctx->pc = 0x2C6478u;
label_2c6478:
    // 0x2c6478: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2C6478u;
    {
        const bool branch_taken_0x2c6478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6478) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6480u;
label_2c6480:
    // 0x2c6480: 0x83859d2c  lb          $a1, -0x62D4($gp)
    ctx->pc = 0x2c6480u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6484: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6484u;
    {
        const bool branch_taken_0x2c6484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6484u;
            // 0x2c6488: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6484) {
            ctx->pc = 0x2C649Cu;
            goto label_2c649c;
        }
    }
    ctx->pc = 0x2C648Cu;
    // 0x2c648c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6490: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6490u;
    {
        const bool branch_taken_0x2c6490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6490) {
            ctx->pc = 0x2C64A8u;
            goto label_2c64a8;
        }
    }
    ctx->pc = 0x2C6498u;
    // 0x2c6498: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2c6498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c649c:
    // 0x2c649c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c64a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C64A0u;
    {
        const bool branch_taken_0x2c64a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64A0u;
            // 0x2c64a4: 0x24640d5c  addiu       $a0, $v1, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64a0) {
            ctx->pc = 0x2C64ACu;
            goto label_2c64ac;
        }
    }
    ctx->pc = 0x2C64A8u;
label_2c64a8:
    // 0x2c64a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c64a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c64ac:
    // 0x2c64ac: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2C64ACu;
    {
        const bool branch_taken_0x2c64ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64ac) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C64B4u;
    // 0x2c64b4: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C64B4u;
    SET_GPR_U32(ctx, 31, 0x2C64BCu);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64BCu; }
        if (ctx->pc != 0x2C64BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64BCu; }
        if (ctx->pc != 0x2C64BCu) { return; }
    }
    ctx->pc = 0x2C64BCu;
label_2c64bc:
    // 0x2c64bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C64BCu;
    {
        const bool branch_taken_0x2c64bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C64C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64BCu;
            // 0x2c64c0: 0x2412006e  addiu       $s2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64bc) {
            ctx->pc = 0x2C64CCu;
            goto label_2c64cc;
        }
    }
    ctx->pc = 0x2C64C4u;
    // 0x2c64c4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2C64C4u;
    {
        const bool branch_taken_0x2c64c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64c4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C64CCu;
label_2c64cc:
    // 0x2c64cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c64d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c64d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C64D4u;
    {
        const bool branch_taken_0x2c64d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C64D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64D4u;
            // 0x2c64d8: 0x24120065  addiu       $s2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64d4) {
            ctx->pc = 0x2C64E4u;
            goto label_2c64e4;
        }
    }
    ctx->pc = 0x2C64DCu;
    // 0x2c64dc: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2C64DCu;
    {
        const bool branch_taken_0x2c64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64DCu;
            // 0x2c64e0: 0x2412006f  addiu       $s2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64dc) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C64E4u;
label_2c64e4:
    // 0x2c64e4: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2C64E4u;
    {
        const bool branch_taken_0x2c64e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64e4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C64ECu;
label_2c64ec:
    // 0x2c64ec: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c64ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c64f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C64F0u;
    {
        const bool branch_taken_0x2c64f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C64F0u;
            // 0x2c64f4: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64f0) {
            ctx->pc = 0x2C6508u;
            goto label_2c6508;
        }
    }
    ctx->pc = 0x2C64F8u;
    // 0x2c64f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c64fc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C64FCu;
    {
        const bool branch_taken_0x2c64fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c64fc) {
            ctx->pc = 0x2C6514u;
            goto label_2c6514;
        }
    }
    ctx->pc = 0x2C6504u;
    // 0x2c6504: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c6504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c6508:
    // 0x2c6508: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c6508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c650c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C650Cu;
    {
        const bool branch_taken_0x2c650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C650Cu;
            // 0x2c6510: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c650c) {
            ctx->pc = 0x2C6518u;
            goto label_2c6518;
        }
    }
    ctx->pc = 0x2C6514u;
label_2c6514:
    // 0x2c6514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c6514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6518:
    // 0x2c6518: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C6518u;
    SET_GPR_U32(ctx, 31, 0x2C6520u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6520u; }
        if (ctx->pc != 0x2C6520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6520u; }
        if (ctx->pc != 0x2C6520u) { return; }
    }
    ctx->pc = 0x2C6520u;
label_2c6520:
    // 0x2c6520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6520u;
    {
        const bool branch_taken_0x2c6520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6520u;
            // 0x2c6524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6520) {
            ctx->pc = 0x2C6530u;
            goto label_2c6530;
        }
    }
    ctx->pc = 0x2C6528u;
    // 0x2c6528: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2C6528u;
    {
        const bool branch_taken_0x2c6528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6528u;
            // 0x2c652c: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6528) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6530u;
label_2c6530:
    // 0x2c6530: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C6530u;
    SET_GPR_U32(ctx, 31, 0x2C6538u);
    ctx->pc = 0x2C6534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6530u;
            // 0x2c6534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6538u; }
        if (ctx->pc != 0x2C6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6538u; }
        if (ctx->pc != 0x2C6538u) { return; }
    }
    ctx->pc = 0x2C6538u;
label_2c6538:
    // 0x2c6538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c653c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6540: 0x16040005  bne         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6540u;
    {
        const bool branch_taken_0x2c6540 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C6544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6540u;
            // 0x2c6544: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6540) {
            ctx->pc = 0x2C6558u;
            goto label_2c6558;
        }
    }
    ctx->pc = 0x2C6548u;
    // 0x2c6548: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6548u;
    SET_GPR_U32(ctx, 31, 0x2C6550u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6550u; }
        if (ctx->pc != 0x2C6550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6550u; }
        if (ctx->pc != 0x2C6550u) { return; }
    }
    ctx->pc = 0x2C6550u;
label_2c6550:
    // 0x2c6550: 0x241200a1  addiu       $s2, $zero, 0xA1
    ctx->pc = 0x2c6550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2c6554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c6558:
    // 0x2c6558: 0x160200a8  bne         $s0, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2C6558u;
    {
        const bool branch_taken_0x2c6558 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6558u;
            // 0x2c655c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6558) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6560u;
    // 0x2c6560: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6560u;
    SET_GPR_U32(ctx, 31, 0x2C6568u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6568u; }
        if (ctx->pc != 0x2C6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6568u; }
        if (ctx->pc != 0x2C6568u) { return; }
    }
    ctx->pc = 0x2C6568u;
label_2c6568:
    // 0x2c6568: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2C6568u;
    {
        const bool branch_taken_0x2c6568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6568u;
            // 0x2c656c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6568) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6570u;
label_2c6570:
    // 0x2c6570: 0x83859d2c  lb          $a1, -0x62D4($gp)
    ctx->pc = 0x2c6570u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6574: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6574u;
    {
        const bool branch_taken_0x2c6574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6574u;
            // 0x2c6578: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6574) {
            ctx->pc = 0x2C658Cu;
            goto label_2c658c;
        }
    }
    ctx->pc = 0x2C657Cu;
    // 0x2c657c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6580: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6580u;
    {
        const bool branch_taken_0x2c6580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C6584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6580u;
            // 0x2c6584: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6580) {
            ctx->pc = 0x2C6594u;
            goto label_2c6594;
        }
    }
    ctx->pc = 0x2C6588u;
    // 0x2c6588: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2c6588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c658c:
    // 0x2c658c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c6590: 0x24700d5c  addiu       $s0, $v1, 0xD5C
    ctx->pc = 0x2c6590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3420));
label_2c6594:
    // 0x2c6594: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2C6594u;
    {
        const bool branch_taken_0x2c6594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6594u;
            // 0x2c6598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6594) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C659Cu;
    // 0x2c659c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C659Cu;
    SET_GPR_U32(ctx, 31, 0x2C65A4u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C65A4u; }
        if (ctx->pc != 0x2C65A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C65A4u; }
        if (ctx->pc != 0x2C65A4u) { return; }
    }
    ctx->pc = 0x2C65A4u;
label_2c65a4:
    // 0x2c65a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C65A4u;
    {
        const bool branch_taken_0x2c65a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65A4u;
            // 0x2c65a8: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65a4) {
            ctx->pc = 0x2C65C4u;
            goto label_2c65c4;
        }
    }
    ctx->pc = 0x2C65ACu;
    // 0x2c65ac: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C65ACu;
    {
        const bool branch_taken_0x2c65ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65ACu;
            // 0x2c65b0: 0x24120097  addiu       $s2, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65ac) {
            ctx->pc = 0x2C65CCu;
            goto label_2c65cc;
        }
    }
    ctx->pc = 0x2C65B4u;
    // 0x2c65b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c65b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C65B8u;
    {
        const bool branch_taken_0x2c65b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c65b8) {
            ctx->pc = 0x2C65CCu;
            goto label_2c65cc;
        }
    }
    ctx->pc = 0x2C65C0u;
    // 0x2c65c0: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x2c65c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c65c4:
    // 0x2c65c4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2C65C4u;
    {
        const bool branch_taken_0x2c65c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65c4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C65CCu;
label_2c65cc:
    // 0x2c65cc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2C65CCu;
    {
        const bool branch_taken_0x2c65cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65cc) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C65D4u;
label_2c65d4:
    // 0x2c65d4: 0x12000089  beqz        $s0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2C65D4u;
    {
        const bool branch_taken_0x2c65d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65D4u;
            // 0x2c65d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65d4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C65DCu;
    // 0x2c65dc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C65DCu;
    SET_GPR_U32(ctx, 31, 0x2C65E4u);
    ctx->pc = 0x2C65E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65DCu;
            // 0x2c65e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C65E4u; }
        if (ctx->pc != 0x2C65E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C65E4u; }
        if (ctx->pc != 0x2C65E4u) { return; }
    }
    ctx->pc = 0x2C65E4u;
label_2c65e4:
    // 0x2c65e4: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c65e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c65e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C65E8u;
    {
        const bool branch_taken_0x2c65e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C65ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65E8u;
            // 0x2c65ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65e8) {
            ctx->pc = 0x2C65F4u;
            goto label_2c65f4;
        }
    }
    ctx->pc = 0x2C65F0u;
    // 0x2c65f0: 0x241200a0  addiu       $s2, $zero, 0xA0
    ctx->pc = 0x2c65f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2c65f4:
    // 0x2c65f4: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2C65F4u;
    {
        const bool branch_taken_0x2c65f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c65f4) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C65FCu;
    // 0x2c65fc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2C65FCu;
    {
        const bool branch_taken_0x2c65fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65FCu;
            // 0x2c6600: 0x241200fa  addiu       $s2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65fc) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6604u;
label_2c6604:
    // 0x2c6604: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6608: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6608u;
    {
        const bool branch_taken_0x2c6608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6608u;
            // 0x2c660c: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6608) {
            ctx->pc = 0x2C6620u;
            goto label_2c6620;
        }
    }
    ctx->pc = 0x2C6610u;
    // 0x2c6610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6614: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6614u;
    {
        const bool branch_taken_0x2c6614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6614) {
            ctx->pc = 0x2C662Cu;
            goto label_2c662c;
        }
    }
    ctx->pc = 0x2C661Cu;
    // 0x2c661c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c661cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c6620:
    // 0x2c6620: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c6624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6624u;
    {
        const bool branch_taken_0x2c6624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6624u;
            // 0x2c6628: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6624) {
            ctx->pc = 0x2C6630u;
            goto label_2c6630;
        }
    }
    ctx->pc = 0x2C662Cu;
label_2c662c:
    // 0x2c662c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6630:
    // 0x2c6630: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C6630u;
    SET_GPR_U32(ctx, 31, 0x2C6638u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6638u; }
        if (ctx->pc != 0x2C6638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6638u; }
        if (ctx->pc != 0x2C6638u) { return; }
    }
    ctx->pc = 0x2C6638u;
label_2c6638:
    // 0x2c6638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6638u;
    {
        const bool branch_taken_0x2c6638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6638u;
            // 0x2c663c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6638) {
            ctx->pc = 0x2C6648u;
            goto label_2c6648;
        }
    }
    ctx->pc = 0x2C6640u;
    // 0x2c6640: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2C6640u;
    {
        const bool branch_taken_0x2c6640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6640u;
            // 0x2c6644: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6640) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6648u;
label_2c6648:
    // 0x2c6648: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C6648u;
    SET_GPR_U32(ctx, 31, 0x2C6650u);
    ctx->pc = 0x2C664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6648u;
            // 0x2c664c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6650u; }
        if (ctx->pc != 0x2C6650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6650u; }
        if (ctx->pc != 0x2C6650u) { return; }
    }
    ctx->pc = 0x2C6650u;
label_2c6650:
    // 0x2c6650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6658: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6658u;
    {
        const bool branch_taken_0x2c6658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6658u;
            // 0x2c665c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6658) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C6660u;
    // 0x2c6660: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c6660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c6664: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2c6664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2c6668: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C6668u;
    SET_GPR_U32(ctx, 31, 0x2C6670u);
    ctx->pc = 0x2C666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6668u;
            // 0x2c666c: 0x241200c9  addiu       $s2, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6670u; }
        if (ctx->pc != 0x2C6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6670u; }
        if (ctx->pc != 0x2C6670u) { return; }
    }
    ctx->pc = 0x2C6670u;
label_2c6670:
    // 0x2c6670: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6670u;
    SET_GPR_U32(ctx, 31, 0x2C6678u);
    ctx->pc = 0x2C6674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6670u;
            // 0x2c6674: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6678u; }
        if (ctx->pc != 0x2C6678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6678u; }
        if (ctx->pc != 0x2C6678u) { return; }
    }
    ctx->pc = 0x2C6678u;
label_2c6678:
    // 0x2c6678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c6678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c667c:
    // 0x2c667c: 0x1602005f  bne         $s0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C667Cu;
    {
        const bool branch_taken_0x2c667c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C667Cu;
            // 0x2c6680: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c667c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6684u;
    // 0x2c6684: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6684u;
    SET_GPR_U32(ctx, 31, 0x2C668Cu);
    ctx->pc = 0x2C6688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6684u;
            // 0x2c6688: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C668Cu; }
        if (ctx->pc != 0x2C668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C668Cu; }
        if (ctx->pc != 0x2C668Cu) { return; }
    }
    ctx->pc = 0x2C668Cu;
label_2c668c:
    // 0x2c668c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2C668Cu;
    {
        const bool branch_taken_0x2c668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c668c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6694u;
label_2c6694:
    // 0x2c6694: 0x83859d2c  lb          $a1, -0x62D4($gp)
    ctx->pc = 0x2c6694u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6698: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6698u;
    {
        const bool branch_taken_0x2c6698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C669Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6698u;
            // 0x2c669c: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6698) {
            ctx->pc = 0x2C66B0u;
            goto label_2c66b0;
        }
    }
    ctx->pc = 0x2C66A0u;
    // 0x2c66a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c66a4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C66A4u;
    {
        const bool branch_taken_0x2c66a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c66a4) {
            ctx->pc = 0x2C66BCu;
            goto label_2c66bc;
        }
    }
    ctx->pc = 0x2C66ACu;
    // 0x2c66ac: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2c66acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c66b0:
    // 0x2c66b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c66b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c66b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C66B4u;
    {
        const bool branch_taken_0x2c66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66B4u;
            // 0x2c66b8: 0x24640d5c  addiu       $a0, $v1, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66b4) {
            ctx->pc = 0x2C66C0u;
            goto label_2c66c0;
        }
    }
    ctx->pc = 0x2C66BCu;
label_2c66bc:
    // 0x2c66bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c66bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c66c0:
    // 0x2c66c0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C66C0u;
    {
        const bool branch_taken_0x2c66c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c66c0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C66C8u;
    // 0x2c66c8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C66C8u;
    SET_GPR_U32(ctx, 31, 0x2C66D0u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C66D0u; }
        if (ctx->pc != 0x2C66D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C66D0u; }
        if (ctx->pc != 0x2C66D0u) { return; }
    }
    ctx->pc = 0x2C66D0u;
label_2c66d0:
    // 0x2c66d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C66D0u;
    {
        const bool branch_taken_0x2c66d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C66D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66D0u;
            // 0x2c66d4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66d0) {
            ctx->pc = 0x2C66E0u;
            goto label_2c66e0;
        }
    }
    ctx->pc = 0x2C66D8u;
    // 0x2c66d8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2C66D8u;
    {
        const bool branch_taken_0x2c66d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66D8u;
            // 0x2c66dc: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66d8) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C66E0u;
label_2c66e0:
    // 0x2c66e0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C66E0u;
    SET_GPR_U32(ctx, 31, 0x2C66E8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C66E8u; }
        if (ctx->pc != 0x2C66E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C66E8u; }
        if (ctx->pc != 0x2C66E8u) { return; }
    }
    ctx->pc = 0x2C66E8u;
label_2c66e8:
    // 0x2c66e8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2C66E8u;
    {
        const bool branch_taken_0x2c66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66E8u;
            // 0x2c66ec: 0x241200ca  addiu       $s2, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66e8) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C66F0u;
label_2c66f0:
    // 0x2c66f0: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C66F0u;
    {
        const bool branch_taken_0x2c66f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66F0u;
            // 0x2c66f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66f0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C66F8u;
    // 0x2c66f8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C66F8u;
    SET_GPR_U32(ctx, 31, 0x2C6700u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6700u; }
        if (ctx->pc != 0x2C6700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6700u; }
        if (ctx->pc != 0x2C6700u) { return; }
    }
    ctx->pc = 0x2C6700u;
label_2c6700:
    // 0x2c6700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6704: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2c6704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c6708: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c6708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c670c: 0xa7829d28  sh          $v0, -0x62D8($gp)
    ctx->pc = 0x2c670cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941992), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6710: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C6710u;
    {
        const bool branch_taken_0x2c6710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6710u;
            // 0x2c6714: 0xac23d62c  sw          $v1, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6710) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6718u;
label_2c6718:
    // 0x2c6718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c671c: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C671Cu;
    SET_GPR_U32(ctx, 31, 0x2C6724u);
    ctx->pc = 0x2C6720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C671Cu;
            // 0x2c6720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6724u; }
        if (ctx->pc != 0x2C6724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6724u; }
        if (ctx->pc != 0x2C6724u) { return; }
    }
    ctx->pc = 0x2C6724u;
label_2c6724:
    // 0x2c6724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c672c: 0x16040009  bne         $s0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C672Cu;
    {
        const bool branch_taken_0x2c672c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C6730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C672Cu;
            // 0x2c6730: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c672c) {
            ctx->pc = 0x2C6754u;
            goto label_2c6754;
        }
    }
    ctx->pc = 0x2C6734u;
    // 0x2c6734: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C6734u;
    SET_GPR_U32(ctx, 31, 0x2C673Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C673Cu; }
        if (ctx->pc != 0x2C673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C673Cu; }
        if (ctx->pc != 0x2C673Cu) { return; }
    }
    ctx->pc = 0x2C673Cu;
label_2c673c:
    // 0x2c673c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6740: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2c6740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c6744: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c6744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c6748: 0xa7839d28  sh          $v1, -0x62D8($gp)
    ctx->pc = 0x2c6748u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941992), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c674c: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2c674cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x2c6750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c6750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c6754:
    // 0x2c6754: 0x16020029  bne         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C6754u;
    {
        const bool branch_taken_0x2c6754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6754u;
            // 0x2c6758: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6754) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C675Cu;
    // 0x2c675c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C675Cu;
    SET_GPR_U32(ctx, 31, 0x2C6764u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6764u; }
        if (ctx->pc != 0x2C6764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6764u; }
        if (ctx->pc != 0x2C6764u) { return; }
    }
    ctx->pc = 0x2C6764u;
label_2c6764:
    // 0x2c6764: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2C6764u;
    {
        const bool branch_taken_0x2c6764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6764u;
            // 0x2c6768: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6764) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C676Cu;
label_2c676c:
    // 0x2c676c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C676Cu;
    {
        const bool branch_taken_0x2c676c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c676c) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C6774u;
    // 0x2c6774: 0x83839d2c  lb          $v1, -0x62D4($gp)
    ctx->pc = 0x2c6774u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6778: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6778u;
    {
        const bool branch_taken_0x2c6778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6778u;
            // 0x2c677c: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6778) {
            ctx->pc = 0x2C6790u;
            goto label_2c6790;
        }
    }
    ctx->pc = 0x2C6780u;
    // 0x2c6780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6784: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6784u;
    {
        const bool branch_taken_0x2c6784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6784u;
            // 0x2c6788: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6784) {
            ctx->pc = 0x2C6798u;
            goto label_2c6798;
        }
    }
    ctx->pc = 0x2C678Cu;
    // 0x2c678c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c678cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c6790:
    // 0x2c6790: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c6790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c6794: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2c6794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c6798:
    // 0x2c6798: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C6798u;
    SET_GPR_U32(ctx, 31, 0x2C67A0u);
    ctx->pc = 0x2C679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6798u;
            // 0x2c679c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67A0u; }
        if (ctx->pc != 0x2C67A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67A0u; }
        if (ctx->pc != 0x2C67A0u) { return; }
    }
    ctx->pc = 0x2C67A0u;
label_2c67a0:
    // 0x2c67a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C67A0u;
    {
        const bool branch_taken_0x2c67a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C67A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67A0u;
            // 0x2c67a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67a0) {
            ctx->pc = 0x2C67B8u;
            goto label_2c67b8;
        }
    }
    ctx->pc = 0x2C67A8u;
    // 0x2c67a8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C67A8u;
    SET_GPR_U32(ctx, 31, 0x2C67B0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67B0u; }
        if (ctx->pc != 0x2C67B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67B0u; }
        if (ctx->pc != 0x2C67B0u) { return; }
    }
    ctx->pc = 0x2C67B0u;
label_2c67b0:
    // 0x2c67b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C67B0u;
    {
        const bool branch_taken_0x2c67b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C67B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67B0u;
            // 0x2c67b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67b0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C67B8u;
label_2c67b8:
    // 0x2c67b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c67bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C67BCu;
    {
        const bool branch_taken_0x2c67bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C67C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67BCu;
            // 0x2c67c0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67bc) {
            ctx->pc = 0x2C67F0u;
            goto label_2c67f0;
        }
    }
    ctx->pc = 0x2C67C4u;
    // 0x2c67c4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C67C4u;
    SET_GPR_U32(ctx, 31, 0x2C67CCu);
    ctx->pc = 0x2C67C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67C4u;
            // 0x2c67c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67CCu; }
        if (ctx->pc != 0x2C67CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67CCu; }
        if (ctx->pc != 0x2C67CCu) { return; }
    }
    ctx->pc = 0x2C67CCu;
label_2c67cc:
    // 0x2c67cc: 0x83839d20  lb          $v1, -0x62E0($gp)
    ctx->pc = 0x2c67ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c67d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c67d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C67D4u;
    {
        const bool branch_taken_0x2c67d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c67d4) {
            ctx->pc = 0x2C67E0u;
            goto label_2c67e0;
        }
    }
    ctx->pc = 0x2C67DCu;
    // 0x2c67dc: 0x241200fa  addiu       $s2, $zero, 0xFA
    ctx->pc = 0x2c67dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_2c67e0:
    // 0x2c67e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C67E0u;
    {
        const bool branch_taken_0x2c67e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c67e0) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C67E8u;
    // 0x2c67e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C67E8u;
    {
        const bool branch_taken_0x2c67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67E8u;
            // 0x2c67ec: 0x241200a0  addiu       $s2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67e8) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C67F0u;
label_2c67f0:
    // 0x2c67f0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C67F0u;
    SET_GPR_U32(ctx, 31, 0x2C67F8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67F8u; }
        if (ctx->pc != 0x2C67F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67F8u; }
        if (ctx->pc != 0x2C67F8u) { return; }
    }
    ctx->pc = 0x2C67F8u;
label_2c67f8:
    // 0x2c67f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c67f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c67fc:
    // 0x2c67fc: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x2c67fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2c6800:
    // 0x2c6800: 0x14200124  bnez        $at, . + 4 + (0x124 << 2)
    ctx->pc = 0x2C6800u;
    {
        const bool branch_taken_0x2c6800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6800) {
            ctx->pc = 0x2C6C94u;
            goto label_2c6c94;
        }
    }
    ctx->pc = 0x2C6808u;
    // 0x2c6808: 0x83829d2c  lb          $v0, -0x62D4($gp)
    ctx->pc = 0x2c6808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c680c: 0x240303e9  addiu       $v1, $zero, 0x3E9
    ctx->pc = 0x2c680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x2c6810: 0x1243011f  beq         $s2, $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x2C6810u;
    {
        const bool branch_taken_0x2c6810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6810u;
            // 0x2c6814: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6810) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6818u;
    // 0x2c6818: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2c6818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2c681c: 0x124300db  beq         $s2, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x2C681Cu;
    {
        const bool branch_taken_0x2c681c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C681Cu;
            // 0x2c6820: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c681c) {
            ctx->pc = 0x2C6B8Cu;
            goto label_2c6b8c;
        }
    }
    ctx->pc = 0x2C6824u;
    // 0x2c6824: 0x124300c8  beq         $s2, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2C6824u;
    {
        const bool branch_taken_0x2c6824 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6824u;
            // 0x2c6828: 0x240300ca  addiu       $v1, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6824) {
            ctx->pc = 0x2C6B48u;
            goto label_2c6b48;
        }
    }
    ctx->pc = 0x2C682Cu;
    // 0x2c682c: 0x124300c2  beq         $s2, $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2C682Cu;
    {
        const bool branch_taken_0x2c682c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C682Cu;
            // 0x2c6830: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c682c) {
            ctx->pc = 0x2C6B38u;
            goto label_2c6b38;
        }
    }
    ctx->pc = 0x2C6834u;
    // 0x2c6834: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x2c6834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2c6838: 0x124300b1  beq         $s2, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2C6838u;
    {
        const bool branch_taken_0x2c6838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6838u;
            // 0x2c683c: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6838) {
            ctx->pc = 0x2C6B00u;
            goto label_2c6b00;
        }
    }
    ctx->pc = 0x2C6840u;
    // 0x2c6840: 0x124300a8  beq         $s2, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2C6840u;
    {
        const bool branch_taken_0x2c6840 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6840u;
            // 0x2c6844: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6840) {
            ctx->pc = 0x2C6AE4u;
            goto label_2c6ae4;
        }
    }
    ctx->pc = 0x2C6848u;
    // 0x2c6848: 0x240300a5  addiu       $v1, $zero, 0xA5
    ctx->pc = 0x2c6848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x2c684c: 0x124300a1  beq         $s2, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C684Cu;
    {
        const bool branch_taken_0x2c684c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C684Cu;
            // 0x2c6850: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c684c) {
            ctx->pc = 0x2C6AD4u;
            goto label_2c6ad4;
        }
    }
    ctx->pc = 0x2C6854u;
    // 0x2c6854: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x2c6854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2c6858: 0x12430096  beq         $s2, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2C6858u;
    {
        const bool branch_taken_0x2c6858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6858u;
            // 0x2c685c: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6858) {
            ctx->pc = 0x2C6AB4u;
            goto label_2c6ab4;
        }
    }
    ctx->pc = 0x2C6860u;
    // 0x2c6860: 0x12430090  beq         $s2, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2C6860u;
    {
        const bool branch_taken_0x2c6860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6860u;
            // 0x2c6864: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6860) {
            ctx->pc = 0x2C6AA4u;
            goto label_2c6aa4;
        }
    }
    ctx->pc = 0x2C6868u;
    // 0x2c6868: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x2c6868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x2c686c: 0x12430085  beq         $s2, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x2C686Cu;
    {
        const bool branch_taken_0x2c686c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C686Cu;
            // 0x2c6870: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c686c) {
            ctx->pc = 0x2C6A84u;
            goto label_2c6a84;
        }
    }
    ctx->pc = 0x2C6874u;
    // 0x2c6874: 0x12430076  beq         $s2, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2C6874u;
    {
        const bool branch_taken_0x2c6874 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6874u;
            // 0x2c6878: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6874) {
            ctx->pc = 0x2C6A50u;
            goto label_2c6a50;
        }
    }
    ctx->pc = 0x2C687Cu;
    // 0x2c687c: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x2c687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2c6880: 0x12430060  beq         $s2, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2C6880u;
    {
        const bool branch_taken_0x2c6880 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6880u;
            // 0x2c6884: 0x2403006e  addiu       $v1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6880) {
            ctx->pc = 0x2C6A04u;
            goto label_2c6a04;
        }
    }
    ctx->pc = 0x2C6888u;
    // 0x2c6888: 0x1243005e  beq         $s2, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C6888u;
    {
        const bool branch_taken_0x2c6888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6888u;
            // 0x2c688c: 0x24030066  addiu       $v1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6888) {
            ctx->pc = 0x2C6A04u;
            goto label_2c6a04;
        }
    }
    ctx->pc = 0x2C6890u;
    // 0x2c6890: 0x12430058  beq         $s2, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2C6890u;
    {
        const bool branch_taken_0x2c6890 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6890u;
            // 0x2c6894: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6890) {
            ctx->pc = 0x2C69F4u;
            goto label_2c69f4;
        }
    }
    ctx->pc = 0x2C6898u;
    // 0x2c6898: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x2c6898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2c689c: 0x1243004a  beq         $s2, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C689Cu;
    {
        const bool branch_taken_0x2c689c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C68A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C689Cu;
            // 0x2c68a0: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c689c) {
            ctx->pc = 0x2C69C8u;
            goto label_2c69c8;
        }
    }
    ctx->pc = 0x2C68A4u;
    // 0x2c68a4: 0x12430041  beq         $s2, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C68A4u;
    {
        const bool branch_taken_0x2c68a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C68A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68A4u;
            // 0x2c68a8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68a4) {
            ctx->pc = 0x2C69ACu;
            goto label_2c69ac;
        }
    }
    ctx->pc = 0x2C68ACu;
    // 0x2c68ac: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2c68acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c68b0: 0x1243002b  beq         $s2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C68B0u;
    {
        const bool branch_taken_0x2c68b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C68B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68B0u;
            // 0x2c68b4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68b0) {
            ctx->pc = 0x2C6960u;
            goto label_2c6960;
        }
    }
    ctx->pc = 0x2C68B8u;
    // 0x2c68b8: 0x12430029  beq         $s2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C68B8u;
    {
        const bool branch_taken_0x2c68b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C68BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68B8u;
            // 0x2c68bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68b8) {
            ctx->pc = 0x2C6960u;
            goto label_2c6960;
        }
    }
    ctx->pc = 0x2C68C0u;
    // 0x2c68c0: 0x12430022  beq         $s2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C68C0u;
    {
        const bool branch_taken_0x2c68c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C68C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68C0u;
            // 0x2c68c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68c0) {
            ctx->pc = 0x2C694Cu;
            goto label_2c694c;
        }
    }
    ctx->pc = 0x2C68C8u;
    // 0x2c68c8: 0x12430015  beq         $s2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C68C8u;
    {
        const bool branch_taken_0x2c68c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c68c8) {
            ctx->pc = 0x2C6920u;
            goto label_2c6920;
        }
    }
    ctx->pc = 0x2C68D0u;
    // 0x2c68d0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C68D0u;
    {
        const bool branch_taken_0x2c68d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c68d0) {
            ctx->pc = 0x2C68E0u;
            goto label_2c68e0;
        }
    }
    ctx->pc = 0x2C68D8u;
    // 0x2c68d8: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2C68D8u;
    {
        const bool branch_taken_0x2c68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C68DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68D8u;
            // 0x2c68dc: 0xa7929d24  sh          $s2, -0x62DC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941988), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68d8) {
            ctx->pc = 0x2C6C94u;
            goto label_2c6c94;
        }
    }
    ctx->pc = 0x2C68E0u;
label_2c68e0:
    // 0x2c68e0: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c68e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c68e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c68e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68e8: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C68E8u;
    SET_GPR_U32(ctx, 31, 0x2C68F0u);
    ctx->pc = 0x2C68ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68E8u;
            // 0x2c68ec: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C68F0u; }
        if (ctx->pc != 0x2C68F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C68F0u; }
        if (ctx->pc != 0x2C68F0u) { return; }
    }
    ctx->pc = 0x2C68F0u;
label_2c68f0:
    // 0x2c68f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c68f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c68f8: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x2c68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x2c68fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c68fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6900: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C6900u;
    SET_GPR_U32(ctx, 31, 0x2C6908u);
    ctx->pc = 0x2C6904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6900u;
            // 0x2c6904: 0xae251b14  sw          $a1, 0x1B14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6932), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6908u; }
        if (ctx->pc != 0x2C6908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6908u; }
        if (ctx->pc != 0x2C6908u) { return; }
    }
    ctx->pc = 0x2C6908u;
label_2c6908:
    // 0x2c6908: 0x83829d20  lb          $v0, -0x62E0($gp)
    ctx->pc = 0x2c6908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941984)));
    // 0x2c690c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6910: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6910u;
    SET_GPR_U32(ctx, 31, 0x2C6918u);
    ctx->pc = 0x2C6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6910u;
            // 0x2c6914: 0x24450c4e  addiu       $a1, $v0, 0xC4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6918u; }
        if (ctx->pc != 0x2C6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6918u; }
        if (ctx->pc != 0x2C6918u) { return; }
    }
    ctx->pc = 0x2C6918u;
label_2c6918:
    // 0x2c6918: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x2C6918u;
    {
        const bool branch_taken_0x2c6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6918) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6920u;
label_2c6920:
    // 0x2c6920: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c6924: 0xac6204c8  sw          $v0, 0x4C8($v1)
    ctx->pc = 0x2c6924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1224), GPR_U32(ctx, 2));
    // 0x2c6928: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c692c: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C692Cu;
    SET_GPR_U32(ctx, 31, 0x2C6934u);
    ctx->pc = 0x2C6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C692Cu;
            // 0x2c6930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6934u; }
        if (ctx->pc != 0x2C6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6934u; }
        if (ctx->pc != 0x2C6934u) { return; }
    }
    ctx->pc = 0x2C6934u;
label_2c6934:
    // 0x2c6934: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c6934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c6938: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6938u;
    SET_GPR_U32(ctx, 31, 0x2C6940u);
    ctx->pc = 0x2C693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6938u;
            // 0x2c693c: 0x2484fe78  addiu       $a0, $a0, -0x188 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6940u; }
        if (ctx->pc != 0x2C6940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6940u; }
        if (ctx->pc != 0x2C6940u) { return; }
    }
    ctx->pc = 0x2C6940u;
label_2c6940:
    // 0x2c6940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c6940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6944: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2C6944u;
    {
        const bool branch_taken_0x2c6944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6944u;
            // 0x2c6948: 0xae221b14  sw          $v0, 0x1B14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6944) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C694Cu;
label_2c694c:
    // 0x2c694c: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c6950: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C6950u;
    SET_GPR_U32(ctx, 31, 0x2C6958u);
    ctx->pc = 0x2C6954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6950u;
            // 0x2c6954: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6958u; }
        if (ctx->pc != 0x2C6958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6958u; }
        if (ctx->pc != 0x2C6958u) { return; }
    }
    ctx->pc = 0x2C6958u;
label_2c6958:
    // 0x2c6958: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2C6958u;
    {
        const bool branch_taken_0x2c6958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6958) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6960u;
label_2c6960:
    // 0x2c6960: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c6960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c6964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6968: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C6968u;
    SET_GPR_U32(ctx, 31, 0x2C6970u);
    ctx->pc = 0x2C696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6968u;
            // 0x2c696c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6970u; }
        if (ctx->pc != 0x2C6970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6970u; }
        if (ctx->pc != 0x2C6970u) { return; }
    }
    ctx->pc = 0x2C6970u;
label_2c6970:
    // 0x2c6970: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c6970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c6974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6978: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x2c6978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x2c697c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C697Cu;
    SET_GPR_U32(ctx, 31, 0x2C6984u);
    ctx->pc = 0x2C6980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C697Cu;
            // 0x2c6980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6984u; }
        if (ctx->pc != 0x2C6984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6984u; }
        if (ctx->pc != 0x2C6984u) { return; }
    }
    ctx->pc = 0x2C6984u;
label_2c6984:
    // 0x2c6984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6988: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6988u;
    SET_GPR_U32(ctx, 31, 0x2C6990u);
    ctx->pc = 0x2C698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6988u;
            // 0x2c698c: 0x24050c58  addiu       $a1, $zero, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6990u; }
        if (ctx->pc != 0x2C6990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6990u; }
        if (ctx->pc != 0x2C6990u) { return; }
    }
    ctx->pc = 0x2C6990u;
label_2c6990:
    // 0x2c6990: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2c6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c6994: 0x164200be  bne         $s2, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2C6994u;
    {
        const bool branch_taken_0x2c6994 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6994u;
            // 0x2c6998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6994) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C699Cu;
    // 0x2c699c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C699Cu;
    SET_GPR_U32(ctx, 31, 0x2C69A4u);
    ctx->pc = 0x2C69A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C699Cu;
            // 0x2c69a0: 0x24050c5b  addiu       $a1, $zero, 0xC5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3163));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69A4u; }
        if (ctx->pc != 0x2C69A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69A4u; }
        if (ctx->pc != 0x2C69A4u) { return; }
    }
    ctx->pc = 0x2C69A4u;
label_2c69a4:
    // 0x2c69a4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2C69A4u;
    {
        const bool branch_taken_0x2c69a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c69a4) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C69ACu;
label_2c69ac:
    // 0x2c69ac: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C69ACu;
    SET_GPR_U32(ctx, 31, 0x2C69B4u);
    ctx->pc = 0x2C69B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69ACu;
            // 0x2c69b0: 0x2484fe80  addiu       $a0, $a0, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69B4u; }
        if (ctx->pc != 0x2C69B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69B4u; }
        if (ctx->pc != 0x2C69B4u) { return; }
    }
    ctx->pc = 0x2C69B4u;
label_2c69b4:
    // 0x2c69b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c69b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69b8: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C69B8u;
    SET_GPR_U32(ctx, 31, 0x2C69C0u);
    ctx->pc = 0x2C69BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69B8u;
            // 0x2c69bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69C0u; }
        if (ctx->pc != 0x2C69C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69C0u; }
        if (ctx->pc != 0x2C69C0u) { return; }
    }
    ctx->pc = 0x2C69C0u;
label_2c69c0:
    // 0x2c69c0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2C69C0u;
    {
        const bool branch_taken_0x2c69c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c69c0) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C69C8u;
label_2c69c8:
    // 0x2c69c8: 0x862321e6  lh          $v1, 0x21E6($s1)
    ctx->pc = 0x2c69c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8678)));
    // 0x2c69cc: 0x24020c5c  addiu       $v0, $zero, 0xC5C
    ctx->pc = 0x2c69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3164));
    // 0x2c69d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C69D0u;
    {
        const bool branch_taken_0x2c69d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C69D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69D0u;
            // 0x2c69d4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69d0) {
            ctx->pc = 0x2C69E0u;
            goto label_2c69e0;
        }
    }
    ctx->pc = 0x2C69D8u;
    // 0x2c69d8: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C69D8u;
    SET_GPR_U32(ctx, 31, 0x2C69E0u);
    ctx->pc = 0x2C69DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69D8u;
            // 0x2c69dc: 0x2484fe90  addiu       $a0, $a0, -0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69E0u; }
        if (ctx->pc != 0x2C69E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69E0u; }
        if (ctx->pc != 0x2C69E0u) { return; }
    }
    ctx->pc = 0x2C69E0u;
label_2c69e0:
    // 0x2c69e0: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c69e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c69e4: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C69E4u;
    SET_GPR_U32(ctx, 31, 0x2C69ECu);
    ctx->pc = 0x2C69E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69E4u;
            // 0x2c69e8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69ECu; }
        if (ctx->pc != 0x2C69ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69ECu; }
        if (ctx->pc != 0x2C69ECu) { return; }
    }
    ctx->pc = 0x2C69ECu;
label_2c69ec:
    // 0x2c69ec: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2C69ECu;
    {
        const bool branch_taken_0x2c69ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c69ec) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C69F4u;
label_2c69f4:
    // 0x2c69f4: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C69F4u;
    SET_GPR_U32(ctx, 31, 0x2C69FCu);
    ctx->pc = 0x2C69F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69F4u;
            // 0x2c69f8: 0x2484fea0  addiu       $a0, $a0, -0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69FCu; }
        if (ctx->pc != 0x2C69FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69FCu; }
        if (ctx->pc != 0x2C69FCu) { return; }
    }
    ctx->pc = 0x2C69FCu;
label_2c69fc:
    // 0x2c69fc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2C69FCu;
    {
        const bool branch_taken_0x2c69fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c69fc) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6A04u;
label_2c6a04:
    // 0x2c6a04: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c6a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c6a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a0c: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C6A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A14u);
    ctx->pc = 0x2C6A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A0Cu;
            // 0x2c6a10: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A14u; }
        if (ctx->pc != 0x2C6A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A14u; }
        if (ctx->pc != 0x2C6A14u) { return; }
    }
    ctx->pc = 0x2C6A14u;
label_2c6a14:
    // 0x2c6a14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c6a18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a1c: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x2c6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x2c6a20: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6A20u;
    SET_GPR_U32(ctx, 31, 0x2C6A28u);
    ctx->pc = 0x2C6A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A20u;
            // 0x2c6a24: 0x24050bc1  addiu       $a1, $zero, 0xBC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3009));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A28u; }
        if (ctx->pc != 0x2C6A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A28u; }
        if (ctx->pc != 0x2C6A28u) { return; }
    }
    ctx->pc = 0x2C6A28u;
label_2c6a28:
    // 0x2c6a28: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x2c6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2c6a2c: 0x16420098  bne         $s2, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2C6A2Cu;
    {
        const bool branch_taken_0x2c6a2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A2Cu;
            // 0x2c6a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a2c) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6A34u;
    // 0x2c6a34: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6A34u;
    SET_GPR_U32(ctx, 31, 0x2C6A3Cu);
    ctx->pc = 0x2C6A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A34u;
            // 0x2c6a38: 0x24050c52  addiu       $a1, $zero, 0xC52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3154));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A3Cu; }
        if (ctx->pc != 0x2C6A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A3Cu; }
        if (ctx->pc != 0x2C6A3Cu) { return; }
    }
    ctx->pc = 0x2C6A3Cu;
label_2c6a3c:
    // 0x2c6a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a40: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C6A40u;
    SET_GPR_U32(ctx, 31, 0x2C6A48u);
    ctx->pc = 0x2C6A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A40u;
            // 0x2c6a44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A48u; }
        if (ctx->pc != 0x2C6A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A48u; }
        if (ctx->pc != 0x2C6A48u) { return; }
    }
    ctx->pc = 0x2C6A48u;
label_2c6a48:
    // 0x2c6a48: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2C6A48u;
    {
        const bool branch_taken_0x2c6a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a48) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6A50u;
label_2c6a50:
    // 0x2c6a50: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6A50u;
    SET_GPR_U32(ctx, 31, 0x2C6A58u);
    ctx->pc = 0x2C6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A50u;
            // 0x2c6a54: 0x2484feb0  addiu       $a0, $a0, -0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A58u; }
        if (ctx->pc != 0x2C6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A58u; }
        if (ctx->pc != 0x2C6A58u) { return; }
    }
    ctx->pc = 0x2C6A58u;
label_2c6a58:
    // 0x2c6a58: 0xdf829d50  ld          $v0, -0x62B0($gp)
    ctx->pc = 0x2c6a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294942032)));
    // 0x2c6a5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c6a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c6a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6a68: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c6a68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2c6a6c: 0x8f829d3c  lw          $v0, -0x62C4($gp)
    ctx->pc = 0x2c6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942012)));
    // 0x2c6a70: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x2c6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    // 0x2c6a74: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2C6A74u;
    SET_GPR_U32(ctx, 31, 0x2C6A7Cu);
    ctx->pc = 0x2C6A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A74u;
            // 0x2c6a78: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A7Cu; }
        if (ctx->pc != 0x2C6A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A7Cu; }
        if (ctx->pc != 0x2C6A7Cu) { return; }
    }
    ctx->pc = 0x2C6A7Cu;
label_2c6a7c:
    // 0x2c6a7c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2C6A7Cu;
    {
        const bool branch_taken_0x2c6a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a7c) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6A84u;
label_2c6a84:
    // 0x2c6a84: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c6a88: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C6A88u;
    SET_GPR_U32(ctx, 31, 0x2C6A90u);
    ctx->pc = 0x2C6A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A88u;
            // 0x2c6a8c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A90u; }
        if (ctx->pc != 0x2C6A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A90u; }
        if (ctx->pc != 0x2C6A90u) { return; }
    }
    ctx->pc = 0x2C6A90u;
label_2c6a90:
    // 0x2c6a90: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c6a94: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6A94u;
    SET_GPR_U32(ctx, 31, 0x2C6A9Cu);
    ctx->pc = 0x2C6A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A94u;
            // 0x2c6a98: 0x2484fe90  addiu       $a0, $a0, -0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A9Cu; }
        if (ctx->pc != 0x2C6A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A9Cu; }
        if (ctx->pc != 0x2C6A9Cu) { return; }
    }
    ctx->pc = 0x2C6A9Cu;
label_2c6a9c:
    // 0x2c6a9c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2C6A9Cu;
    {
        const bool branch_taken_0x2c6a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a9c) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6AA4u;
label_2c6aa4:
    // 0x2c6aa4: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6AA4u;
    SET_GPR_U32(ctx, 31, 0x2C6AACu);
    ctx->pc = 0x2C6AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AA4u;
            // 0x2c6aa8: 0x2484fec0  addiu       $a0, $a0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AACu; }
        if (ctx->pc != 0x2C6AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AACu; }
        if (ctx->pc != 0x2C6AACu) { return; }
    }
    ctx->pc = 0x2C6AACu;
label_2c6aac:
    // 0x2c6aac: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2C6AACu;
    {
        const bool branch_taken_0x2c6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6aac) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6AB4u;
label_2c6ab4:
    // 0x2c6ab4: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c6ab8: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C6AB8u;
    SET_GPR_U32(ctx, 31, 0x2C6AC0u);
    ctx->pc = 0x2C6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AB8u;
            // 0x2c6abc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AC0u; }
        if (ctx->pc != 0x2C6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AC0u; }
        if (ctx->pc != 0x2C6AC0u) { return; }
    }
    ctx->pc = 0x2C6AC0u;
label_2c6ac0:
    // 0x2c6ac0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c6ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c6ac4: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6AC4u;
    SET_GPR_U32(ctx, 31, 0x2C6ACCu);
    ctx->pc = 0x2C6AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AC4u;
            // 0x2c6ac8: 0x2484fed0  addiu       $a0, $a0, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6ACCu; }
        if (ctx->pc != 0x2C6ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6ACCu; }
        if (ctx->pc != 0x2C6ACCu) { return; }
    }
    ctx->pc = 0x2C6ACCu;
label_2c6acc:
    // 0x2c6acc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2C6ACCu;
    {
        const bool branch_taken_0x2c6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6acc) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6AD4u;
label_2c6ad4:
    // 0x2c6ad4: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6AD4u;
    SET_GPR_U32(ctx, 31, 0x2C6ADCu);
    ctx->pc = 0x2C6AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AD4u;
            // 0x2c6ad8: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6ADCu; }
        if (ctx->pc != 0x2C6ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6ADCu; }
        if (ctx->pc != 0x2C6ADCu) { return; }
    }
    ctx->pc = 0x2C6ADCu;
label_2c6adc:
    // 0x2c6adc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2C6ADCu;
    {
        const bool branch_taken_0x2c6adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6adc) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6AE4u;
label_2c6ae4:
    // 0x2c6ae4: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6AE4u;
    SET_GPR_U32(ctx, 31, 0x2C6AECu);
    ctx->pc = 0x2C6AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AE4u;
            // 0x2c6ae8: 0x2484fef0  addiu       $a0, $a0, -0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AECu; }
        if (ctx->pc != 0x2C6AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AECu; }
        if (ctx->pc != 0x2C6AECu) { return; }
    }
    ctx->pc = 0x2C6AECu;
label_2c6aec:
    // 0x2c6aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6af0: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C6AF0u;
    SET_GPR_U32(ctx, 31, 0x2C6AF8u);
    ctx->pc = 0x2C6AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AF0u;
            // 0x2c6af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AF8u; }
        if (ctx->pc != 0x2C6AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AF8u; }
        if (ctx->pc != 0x2C6AF8u) { return; }
    }
    ctx->pc = 0x2C6AF8u;
label_2c6af8:
    // 0x2c6af8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2C6AF8u;
    {
        const bool branch_taken_0x2c6af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6af8) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6B00u;
label_2c6b00:
    // 0x2c6b00: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c6b04: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C6B04u;
    SET_GPR_U32(ctx, 31, 0x2C6B0Cu);
    ctx->pc = 0x2C6B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B04u;
            // 0x2c6b08: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B0Cu; }
        if (ctx->pc != 0x2C6B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B0Cu; }
        if (ctx->pc != 0x2C6B0Cu) { return; }
    }
    ctx->pc = 0x2C6B0Cu;
label_2c6b0c:
    // 0x2c6b0c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c6b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c6b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b14: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C6B14u;
    SET_GPR_U32(ctx, 31, 0x2C6B1Cu);
    ctx->pc = 0x2C6B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B14u;
            // 0x2c6b18: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B1Cu; }
        if (ctx->pc != 0x2C6B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B1Cu; }
        if (ctx->pc != 0x2C6B1Cu) { return; }
    }
    ctx->pc = 0x2C6B1Cu;
label_2c6b1c:
    // 0x2c6b1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c6b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b24: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x2c6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x2c6b28: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6B28u;
    SET_GPR_U32(ctx, 31, 0x2C6B30u);
    ctx->pc = 0x2C6B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B28u;
            // 0x2c6b2c: 0x24050c5d  addiu       $a1, $zero, 0xC5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3165));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B30u; }
        if (ctx->pc != 0x2C6B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B30u; }
        if (ctx->pc != 0x2C6B30u) { return; }
    }
    ctx->pc = 0x2C6B30u;
label_2c6b30:
    // 0x2c6b30: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2C6B30u;
    {
        const bool branch_taken_0x2c6b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6b30) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6B38u;
label_2c6b38:
    // 0x2c6b38: 0xc0b16c8  jal         func_2C5B20
    ctx->pc = 0x2C6B38u;
    SET_GPR_U32(ctx, 31, 0x2C6B40u);
    ctx->pc = 0x2C6B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B38u;
            // 0x2c6b3c: 0x2484ff00  addiu       $a0, $a0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B20u;
    if (runtime->hasFunction(0x2C5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B40u; }
        if (ctx->pc != 0x2C6B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameCFGAnalyze__FPc_0x2c5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B40u; }
        if (ctx->pc != 0x2C6B40u) { return; }
    }
    ctx->pc = 0x2C6B40u;
label_2c6b40:
    // 0x2c6b40: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2C6B40u;
    {
        const bool branch_taken_0x2c6b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6b40) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6B48u;
label_2c6b48:
    // 0x2c6b48: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c6b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c6b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b50: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C6B50u;
    SET_GPR_U32(ctx, 31, 0x2C6B58u);
    ctx->pc = 0x2C6B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B50u;
            // 0x2c6b54: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B58u; }
        if (ctx->pc != 0x2C6B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B58u; }
        if (ctx->pc != 0x2C6B58u) { return; }
    }
    ctx->pc = 0x2C6B58u;
label_2c6b58:
    // 0x2c6b58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c6b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b60: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x2c6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x2c6b64: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C6B64u;
    SET_GPR_U32(ctx, 31, 0x2C6B6Cu);
    ctx->pc = 0x2C6B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B64u;
            // 0x2c6b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B6Cu; }
        if (ctx->pc != 0x2C6B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B6Cu; }
        if (ctx->pc != 0x2C6B6Cu) { return; }
    }
    ctx->pc = 0x2C6B6Cu;
label_2c6b6c:
    // 0x2c6b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c6b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b70: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C6B70u;
    SET_GPR_U32(ctx, 31, 0x2C6B78u);
    ctx->pc = 0x2C6B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B70u;
            // 0x2c6b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B78u; }
        if (ctx->pc != 0x2C6B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B78u; }
        if (ctx->pc != 0x2C6B78u) { return; }
    }
    ctx->pc = 0x2C6B78u;
label_2c6b78:
    // 0x2c6b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b7c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6B7Cu;
    SET_GPR_U32(ctx, 31, 0x2C6B84u);
    ctx->pc = 0x2C6B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B7Cu;
            // 0x2c6b80: 0x24050c59  addiu       $a1, $zero, 0xC59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3161));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B84u; }
        if (ctx->pc != 0x2C6B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B84u; }
        if (ctx->pc != 0x2C6B84u) { return; }
    }
    ctx->pc = 0x2C6B84u;
label_2c6b84:
    // 0x2c6b84: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2C6B84u;
    {
        const bool branch_taken_0x2c6b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6b84) {
            ctx->pc = 0x2C6C90u;
            goto label_2c6c90;
        }
    }
    ctx->pc = 0x2C6B8Cu;
label_2c6b8c:
    // 0x2c6b8c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c6b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c6b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b94: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C6B94u;
    SET_GPR_U32(ctx, 31, 0x2C6B9Cu);
    ctx->pc = 0x2C6B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B94u;
            // 0x2c6b98: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B9Cu; }
        if (ctx->pc != 0x2C6B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B9Cu; }
        if (ctx->pc != 0x2C6B9Cu) { return; }
    }
    ctx->pc = 0x2C6B9Cu;
label_2c6b9c:
    // 0x2c6b9c: 0x83849d2c  lb          $a0, -0x62D4($gp)
    ctx->pc = 0x2c6b9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941996)));
    // 0x2c6ba0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6BA0u;
    {
        const bool branch_taken_0x2c6ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BA0u;
            // 0x2c6ba4: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ba0) {
            ctx->pc = 0x2C6BB4u;
            goto label_2c6bb4;
        }
    }
    ctx->pc = 0x2C6BA8u;
    // 0x2c6ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6bac: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6BACu;
    {
        const bool branch_taken_0x2c6bac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BACu;
            // 0x2c6bb0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bac) {
            ctx->pc = 0x2C6BC0u;
            goto label_2c6bc0;
        }
    }
    ctx->pc = 0x2C6BB4u;
label_2c6bb4:
    // 0x2c6bb4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c6bb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6bbc: 0x24530d5c  addiu       $s3, $v0, 0xD5C
    ctx->pc = 0x2c6bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c6bc0:
    // 0x2c6bc0: 0x87839d24  lh          $v1, -0x62DC($gp)
    ctx->pc = 0x2c6bc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941988)));
    // 0x2c6bc4: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x2c6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2c6bc8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6BC8u;
    {
        const bool branch_taken_0x2c6bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BC8u;
            // 0x2c6bcc: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bc8) {
            ctx->pc = 0x2C6BF0u;
            goto label_2c6bf0;
        }
    }
    ctx->pc = 0x2C6BD0u;
    // 0x2c6bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bd4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6BD4u;
    SET_GPR_U32(ctx, 31, 0x2C6BDCu);
    ctx->pc = 0x2C6BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BD4u;
            // 0x2c6bd8: 0x24050be5  addiu       $a1, $zero, 0xBE5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3045));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BDCu; }
        if (ctx->pc != 0x2C6BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BDCu; }
        if (ctx->pc != 0x2C6BDCu) { return; }
    }
    ctx->pc = 0x2C6BDCu;
label_2c6bdc:
    // 0x2c6bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c6bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6be0: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C6BE0u;
    SET_GPR_U32(ctx, 31, 0x2C6BE8u);
    ctx->pc = 0x2C6BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BE0u;
            // 0x2c6be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BE8u; }
        if (ctx->pc != 0x2C6BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BE8u; }
        if (ctx->pc != 0x2C6BE8u) { return; }
    }
    ctx->pc = 0x2C6BE8u;
label_2c6be8:
    // 0x2c6be8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C6BE8u;
    {
        const bool branch_taken_0x2c6be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BE8u;
            // 0x2c6bec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6be8) {
            ctx->pc = 0x2C6C8Cu;
            goto label_2c6c8c;
        }
    }
    ctx->pc = 0x2C6BF0u;
label_2c6bf0:
    // 0x2c6bf0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C6BF0u;
    {
        const bool branch_taken_0x2c6bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BF0u;
            // 0x2c6bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bf0) {
            ctx->pc = 0x2C6C1Cu;
            goto label_2c6c1c;
        }
    }
    ctx->pc = 0x2C6BF8u;
    // 0x2c6bf8: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c6bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c6bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c00: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C6C00u;
    SET_GPR_U32(ctx, 31, 0x2C6C08u);
    ctx->pc = 0x2C6C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C00u;
            // 0x2c6c04: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C08u; }
        if (ctx->pc != 0x2C6C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C08u; }
        if (ctx->pc != 0x2C6C08u) { return; }
    }
    ctx->pc = 0x2C6C08u;
label_2c6c08:
    // 0x2c6c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c0c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C14u);
    ctx->pc = 0x2C6C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C0Cu;
            // 0x2c6c10: 0x24050bc6  addiu       $a1, $zero, 0xBC6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3014));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C14u; }
        if (ctx->pc != 0x2C6C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C14u; }
        if (ctx->pc != 0x2C6C14u) { return; }
    }
    ctx->pc = 0x2C6C14u;
label_2c6c14:
    // 0x2c6c14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C6C14u;
    {
        const bool branch_taken_0x2c6c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6c14) {
            ctx->pc = 0x2C6C88u;
            goto label_2c6c88;
        }
    }
    ctx->pc = 0x2C6C1Cu;
label_2c6c1c:
    // 0x2c6c1c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C6C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C24u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C24u; }
        if (ctx->pc != 0x2C6C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C24u; }
        if (ctx->pc != 0x2C6C24u) { return; }
    }
    ctx->pc = 0x2C6C24u;
label_2c6c24:
    // 0x2c6c24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6C24u;
    {
        const bool branch_taken_0x2c6c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C24u;
            // 0x2c6c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c24) {
            ctx->pc = 0x2C6C48u;
            goto label_2c6c48;
        }
    }
    ctx->pc = 0x2C6C2Cu;
    // 0x2c6c2c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6C2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C34u);
    ctx->pc = 0x2C6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C2Cu;
            // 0x2c6c30: 0x24050bb9  addiu       $a1, $zero, 0xBB9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3001));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C34u; }
        if (ctx->pc != 0x2C6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C34u; }
        if (ctx->pc != 0x2C6C34u) { return; }
    }
    ctx->pc = 0x2C6C34u;
label_2c6c34:
    // 0x2c6c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c6c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c38: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C6C38u;
    SET_GPR_U32(ctx, 31, 0x2C6C40u);
    ctx->pc = 0x2C6C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C38u;
            // 0x2c6c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C40u; }
        if (ctx->pc != 0x2C6C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C40u; }
        if (ctx->pc != 0x2C6C40u) { return; }
    }
    ctx->pc = 0x2C6C40u;
label_2c6c40:
    // 0x2c6c40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6C40u;
    {
        const bool branch_taken_0x2c6c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6c40) {
            ctx->pc = 0x2C6C88u;
            goto label_2c6c88;
        }
    }
    ctx->pc = 0x2C6C48u;
label_2c6c48:
    // 0x2c6c48: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2c6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c6c4c: 0x8f829d3c  lw          $v0, -0x62C4($gp)
    ctx->pc = 0x2c6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942012)));
    // 0x2c6c50: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c6c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c6c54: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6C54u;
    {
        const bool branch_taken_0x2c6c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C54u;
            // 0x2c6c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c54) {
            ctx->pc = 0x2C6C88u;
            goto label_2c6c88;
        }
    }
    ctx->pc = 0x2C6C5Cu;
    // 0x2c6c5c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C64u);
    ctx->pc = 0x2C6C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C5Cu;
            // 0x2c6c60: 0x24050c50  addiu       $a1, $zero, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C64u; }
        if (ctx->pc != 0x2C6C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C64u; }
        if (ctx->pc != 0x2C6C64u) { return; }
    }
    ctx->pc = 0x2C6C64u;
label_2c6c64:
    // 0x2c6c64: 0xdf829d58  ld          $v0, -0x62A8($gp)
    ctx->pc = 0x2c6c64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294942040)));
    // 0x2c6c68: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2c6c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c6c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c70: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2c6c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6c74: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2c6c78: 0x8f829d3c  lw          $v0, -0x62C4($gp)
    ctx->pc = 0x2c6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942012)));
    // 0x2c6c7c: 0xafb00058  sw          $s0, 0x58($sp)
    ctx->pc = 0x2c6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
    // 0x2c6c80: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2C6C80u;
    SET_GPR_U32(ctx, 31, 0x2C6C88u);
    ctx->pc = 0x2C6C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C80u;
            // 0x2c6c84: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C88u; }
        if (ctx->pc != 0x2C6C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C88u; }
        if (ctx->pc != 0x2C6C88u) { return; }
    }
    ctx->pc = 0x2C6C88u;
label_2c6c88:
    // 0x2c6c88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c6c8c:
    // 0x2c6c8c: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x2c6c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
label_2c6c90:
    // 0x2c6c90: 0xa7929d24  sh          $s2, -0x62DC($gp)
    ctx->pc = 0x2c6c90u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941988), (uint16_t)GPR_U32(ctx, 18));
label_2c6c94:
    // 0x2c6c94: 0x87839d28  lh          $v1, -0x62D8($gp)
    ctx->pc = 0x2c6c94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941992)));
    // 0x2c6c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6c9c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6C9Cu;
    {
        const bool branch_taken_0x2c6c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6c9c) {
            ctx->pc = 0x2C6CC0u;
            goto label_2c6cc0;
        }
    }
    ctx->pc = 0x2C6CA4u;
    // 0x2c6ca4: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2c6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c6ca8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c6ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6cac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2c6cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c6cb0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c6cb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6cb4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c6cb4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6cb8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2C6CB8u;
    SET_GPR_U32(ctx, 31, 0x2C6CC0u);
    ctx->pc = 0x2C6CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CB8u;
            // 0x2c6cbc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CC0u; }
        if (ctx->pc != 0x2C6CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CC0u; }
        if (ctx->pc != 0x2C6CC0u) { return; }
    }
    ctx->pc = 0x2C6CC0u;
label_2c6cc0:
    // 0x2c6cc0: 0xc7829d40  lwc1        $f2, -0x62C0($gp)
    ctx->pc = 0x2c6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6cc4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6cd0: 0x0  nop
    ctx->pc = 0x2c6cd0u;
    // NOP
    // 0x2c6cd4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2c6cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c6cd8: 0xe7819d40  swc1        $f1, -0x62C0($gp)
    ctx->pc = 0x2c6cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942016), bits); }
    // 0x2c6cdc: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x2c6cdcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x2c6ce0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c6ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6ce4: 0x0  nop
    ctx->pc = 0x2c6ce4u;
    // NOP
    // 0x2c6ce8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6CE8u;
    {
        const bool branch_taken_0x2c6ce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6ce8) {
            ctx->pc = 0x2C6D04u;
            goto label_2c6d04;
        }
    }
    ctx->pc = 0x2C6CF0u;
    // 0x2c6cf0: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2c6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2c6cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6cf8: 0x0  nop
    ctx->pc = 0x2c6cf8u;
    // NOP
    // 0x2c6cfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6d00: 0xe7809d40  swc1        $f0, -0x62C0($gp)
    ctx->pc = 0x2c6d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942016), bits); }
label_2c6d04:
    // 0x2c6d04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c6d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c6d08: 0xc087898  jal         func_21E260
    ctx->pc = 0x2C6D08u;
    SET_GPR_U32(ctx, 31, 0x2C6D10u);
    ctx->pc = 0x2C6D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D08u;
            // 0x2c6d0c: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D10u; }
        if (ctx->pc != 0x2C6D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D10u; }
        if (ctx->pc != 0x2C6D10u) { return; }
    }
    ctx->pc = 0x2C6D10u;
label_2c6d10:
    // 0x2c6d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c6d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6d18:
    // 0x2c6d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c6d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c6d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D28u;
            // 0x2c6d2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6D30u;
}
