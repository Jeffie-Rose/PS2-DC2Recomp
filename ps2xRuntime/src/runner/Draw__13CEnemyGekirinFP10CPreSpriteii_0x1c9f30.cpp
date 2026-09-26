#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CEnemyGekirinFP10CPreSpriteii
// Address: 0x1c9f30 - 0x1ca058
void Draw__13CEnemyGekirinFP10CPreSpriteii_0x1c9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CEnemyGekirinFP10CPreSpriteii_0x1c9f30");
#endif

    switch (ctx->pc) {
        case 0x1c9f70u: goto label_1c9f70;
        case 0x1c9f88u: goto label_1c9f88;
        case 0x1c9fc4u: goto label_1c9fc4;
        case 0x1c9fdcu: goto label_1c9fdc;
        case 0x1c9ff4u: goto label_1c9ff4;
        case 0x1ca03cu: goto label_1ca03c;
        default: break;
    }

    ctx->pc = 0x1c9f30u;

    // 0x1c9f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c9f34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9f38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c9f3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c9f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c9f40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c9f44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c9f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c9f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c9f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c9f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9f54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f58: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1c9f58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9f5c: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C9F5Cu;
    {
        const bool branch_taken_0x1c9f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F5Cu;
            // 0x1c9f60: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f5c) {
            ctx->pc = 0x1CA03Cu;
            goto label_1ca03c;
        }
    }
    ctx->pc = 0x1C9F64u;
    // 0x1c9f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f68: 0xc079ff0  jal         func_1E7FC0
    ctx->pc = 0x1C9F68u;
    SET_GPR_U32(ctx, 31, 0x1C9F70u);
    ctx->pc = 0x1C9F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F68u;
            // 0x1c9f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F70u; }
        if (ctx->pc != 0x1C9F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F70u; }
        if (ctx->pc != 0x1C9F70u) { return; }
    }
    ctx->pc = 0x1C9F70u;
label_1c9f70:
    // 0x1c9f70: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f7c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c9f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f80: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C9F80u;
    SET_GPR_U32(ctx, 31, 0x1C9F88u);
    ctx->pc = 0x1C9F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F80u;
            // 0x1c9f84: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F88u; }
        if (ctx->pc != 0x1C9F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9F88u; }
        if (ctx->pc != 0x1C9F88u) { return; }
    }
    ctx->pc = 0x1C9F88u;
label_1c9f88:
    // 0x1c9f88: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1c9f8c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c9f90: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1c9f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c9f94: 0x24428e50  addiu       $v0, $v0, -0x71B0
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938192));
    // 0x1c9f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fa0: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1c9fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c9fa4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c9fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fa8: 0x240a00ca  addiu       $t2, $zero, 0xCA
    ctx->pc = 0x1c9fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1c9fac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9fb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9fbc: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1C9FBCu;
    SET_GPR_U32(ctx, 31, 0x1C9FC4u);
    ctx->pc = 0x1C9FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FBCu;
            // 0x1c9fc0: 0x2023023  subu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FC4u; }
        if (ctx->pc != 0x1C9FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FC4u; }
        if (ctx->pc != 0x1C9FC4u) { return; }
    }
    ctx->pc = 0x1C9FC4u;
label_1c9fc4:
    // 0x1c9fc4: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c9fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9fcc: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C9FCCu;
    {
        const bool branch_taken_0x1c9fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C9FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FCCu;
            // 0x1c9fd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fcc) {
            ctx->pc = 0x1CA03Cu;
            goto label_1ca03c;
        }
    }
    ctx->pc = 0x1C9FD4u;
    // 0x1c9fd4: 0xc079ff0  jal         func_1E7FC0
    ctx->pc = 0x1C9FD4u;
    SET_GPR_U32(ctx, 31, 0x1C9FDCu);
    ctx->pc = 0x1C9FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FD4u;
            // 0x1c9fd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FDCu; }
        if (ctx->pc != 0x1C9FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FDCu; }
        if (ctx->pc != 0x1C9FDCu) { return; }
    }
    ctx->pc = 0x1C9FDCu;
label_1c9fdc:
    // 0x1c9fdc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c9fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fe4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fe8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c9fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fec: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C9FECu;
    SET_GPR_U32(ctx, 31, 0x1C9FF4u);
    ctx->pc = 0x1C9FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FECu;
            // 0x1c9ff0: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FF4u; }
        if (ctx->pc != 0x1C9FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FF4u; }
        if (ctx->pc != 0x1C9FF4u) { return; }
    }
    ctx->pc = 0x1C9FF4u;
label_1c9ff4:
    // 0x1c9ff4: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1c9ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c9ff8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c9ffc: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x1ca000: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ca000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ca004: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1ca008: 0x24428e50  addiu       $v0, $v0, -0x71B0
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938192));
    // 0x1ca00c: 0x2625fffc  addiu       $a1, $s1, -0x4
    ctx->pc = 0x1ca00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1ca010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca014: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ca014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca018: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ca01c: 0x240a00ca  addiu       $t2, $zero, 0xCA
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1ca020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca02c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca030: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ca034: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x1CA034u;
    SET_GPR_U32(ctx, 31, 0x1CA03Cu);
    ctx->pc = 0x1CA038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA034u;
            // 0x1ca038: 0x2446fffc  addiu       $a2, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA03Cu; }
        if (ctx->pc != 0x1CA03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA03Cu; }
        if (ctx->pc != 0x1CA03Cu) { return; }
    }
    ctx->pc = 0x1CA03Cu;
label_1ca03c:
    // 0x1ca03c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ca03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca040: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ca040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca044: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ca044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca048: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ca048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca04c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca050: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA050u;
            // 0x1ca054: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA058u;
}
