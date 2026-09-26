#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckKanjiPosition__13CNameRegiMenuFiPsi
// Address: 0x30b970 - 0x30bab0
void CheckKanjiPosition__13CNameRegiMenuFiPsi_0x30b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckKanjiPosition__13CNameRegiMenuFiPsi_0x30b970");
#endif

    switch (ctx->pc) {
        case 0x30b9c4u: goto label_30b9c4;
        case 0x30b9ccu: goto label_30b9cc;
        case 0x30b9dcu: goto label_30b9dc;
        case 0x30ba10u: goto label_30ba10;
        case 0x30ba20u: goto label_30ba20;
        case 0x30ba30u: goto label_30ba30;
        case 0x30ba64u: goto label_30ba64;
        default: break;
    }

    ctx->pc = 0x30b970u;

    // 0x30b970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30b974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30b978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30b97c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b980: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30b980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b988: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30b988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30b990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b994: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x30b994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x30b998: 0x24900114  addiu       $s0, $a0, 0x114
    ctx->pc = 0x30b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
    // 0x30b99c: 0xa3a0005e  sb          $zero, 0x5E($sp)
    ctx->pc = 0x30b99cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b9a0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x30b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x30b9a4: 0x8c860118  lw          $a2, 0x118($a0)
    ctx->pc = 0x30b9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x30b9a8: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x30b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x30b9ac: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x30b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x30b9b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30b9b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b9b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30b9bc: 0xc0c2b1c  jal         func_30AC70
    ctx->pc = 0x30B9BCu;
    SET_GPR_U32(ctx, 31, 0x30B9C4u);
    ctx->pc = 0x30B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9BCu;
            // 0x30b9c0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AC70u;
    if (runtime->hasFunction(0x30AC70u)) {
        auto targetFn = runtime->lookupFunction(0x30AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9C4u; }
        if (ctx->pc != 0x30B9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameRegistFontKanjiList__FiPc_0x30ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9C4u; }
        if (ctx->pc != 0x30B9C4u) { return; }
    }
    ctx->pc = 0x30B9C4u;
label_30b9c4:
    // 0x30b9c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x30B9C4u;
    {
        const bool branch_taken_0x30b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9c4) {
            ctx->pc = 0x30BA80u;
            goto label_30ba80;
        }
    }
    ctx->pc = 0x30B9CCu;
label_30b9cc:
    // 0x30b9cc: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x30b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x30b9d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30b9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9d4: 0xc0c2d78  jal         func_30B5E0
    ctx->pc = 0x30B9D4u;
    SET_GPR_U32(ctx, 31, 0x30B9DCu);
    ctx->pc = 0x30B9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9D4u;
            // 0x30b9d8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B5E0u;
    if (runtime->hasFunction(0x30B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x30B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9DCu; }
        if (ctx->pc != 0x30B9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi_0x30b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9DCu; }
        if (ctx->pc != 0x30B9DCu) { return; }
    }
    ctx->pc = 0x30B9DCu;
label_30b9dc:
    // 0x30b9dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30b9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b9e4: 0x1222002a  beq         $s1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30B9E4u;
    {
        const bool branch_taken_0x30b9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b9e4) {
            ctx->pc = 0x30BA90u;
            goto label_30ba90;
        }
    }
    ctx->pc = 0x30B9ECu;
    // 0x30b9ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x30b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30b9f0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x30b9f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30b9f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30b9fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ba00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30ba04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ba08: 0xc0c2b1c  jal         func_30AC70
    ctx->pc = 0x30BA08u;
    SET_GPR_U32(ctx, 31, 0x30BA10u);
    ctx->pc = 0x30BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA08u;
            // 0x30ba0c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AC70u;
    if (runtime->hasFunction(0x30AC70u)) {
        auto targetFn = runtime->lookupFunction(0x30AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA10u; }
        if (ctx->pc != 0x30BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameRegistFontKanjiList__FiPc_0x30ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA10u; }
        if (ctx->pc != 0x30BA10u) { return; }
    }
    ctx->pc = 0x30BA10u;
label_30ba10:
    // 0x30ba10: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30BA10u;
    {
        const bool branch_taken_0x30ba10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30BA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA10u;
            // 0x30ba14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba10) {
            ctx->pc = 0x30BA80u;
            goto label_30ba80;
        }
    }
    ctx->pc = 0x30BA18u;
    // 0x30ba18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30BA18u;
    {
        const bool branch_taken_0x30ba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA18u;
            // 0x30ba1c: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba18) {
            ctx->pc = 0x30BA64u;
            goto label_30ba64;
        }
    }
    ctx->pc = 0x30BA20u;
label_30ba20:
    // 0x30ba20: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x30ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x30ba24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30ba24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba28: 0xc0c2d78  jal         func_30B5E0
    ctx->pc = 0x30BA28u;
    SET_GPR_U32(ctx, 31, 0x30BA30u);
    ctx->pc = 0x30BA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA28u;
            // 0x30ba2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B5E0u;
    if (runtime->hasFunction(0x30B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x30B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA30u; }
        if (ctx->pc != 0x30BA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi_0x30b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA30u; }
        if (ctx->pc != 0x30BA30u) { return; }
    }
    ctx->pc = 0x30BA30u;
label_30ba30:
    // 0x30ba30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30ba30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ba38: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30BA38u;
    {
        const bool branch_taken_0x30ba38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x30ba38) {
            ctx->pc = 0x30BA90u;
            goto label_30ba90;
        }
    }
    ctx->pc = 0x30BA40u;
    // 0x30ba40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x30ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ba44: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x30ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x30ba48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ba4c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30ba50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ba54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30ba58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ba5c: 0xc0c2b1c  jal         func_30AC70
    ctx->pc = 0x30BA5Cu;
    SET_GPR_U32(ctx, 31, 0x30BA64u);
    ctx->pc = 0x30BA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA5Cu;
            // 0x30ba60: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AC70u;
    if (runtime->hasFunction(0x30AC70u)) {
        auto targetFn = runtime->lookupFunction(0x30AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA64u; }
        if (ctx->pc != 0x30BA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameRegistFontKanjiList__FiPc_0x30ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA64u; }
        if (ctx->pc != 0x30BA64u) { return; }
    }
    ctx->pc = 0x30BA64u;
label_30ba64:
    // 0x30ba64: 0x0  nop
    ctx->pc = 0x30ba64u;
    // NOP
    // 0x30ba68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30BA68u;
    {
        const bool branch_taken_0x30ba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA68u;
            // 0x30ba6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba68) {
            ctx->pc = 0x30BA90u;
            goto label_30ba90;
        }
    }
    ctx->pc = 0x30BA70u;
    // 0x30ba70: 0x1443ffeb  bne         $v0, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30BA70u;
    {
        const bool branch_taken_0x30ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA70u;
            // 0x30ba74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba70) {
            ctx->pc = 0x30BA20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ba20;
        }
    }
    ctx->pc = 0x30BA78u;
    // 0x30ba78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30BA78u;
    {
        const bool branch_taken_0x30ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ba78) {
            ctx->pc = 0x30BA90u;
            goto label_30ba90;
        }
    }
    ctx->pc = 0x30BA80u;
label_30ba80:
    // 0x30ba80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BA80u;
    {
        const bool branch_taken_0x30ba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA80u;
            // 0x30ba84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba80) {
            ctx->pc = 0x30BA90u;
            goto label_30ba90;
        }
    }
    ctx->pc = 0x30BA88u;
    // 0x30ba88: 0x1443ffd0  bne         $v0, $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x30BA88u;
    {
        const bool branch_taken_0x30ba88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA88u;
            // 0x30ba8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba88) {
            ctx->pc = 0x30B9CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b9cc;
        }
    }
    ctx->pc = 0x30BA90u;
label_30ba90:
    // 0x30ba90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30ba90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30ba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ba98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30ba98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ba9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ba9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30baa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30baa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30baa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30baa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30baa8: 0x3e00008  jr          $ra
    ctx->pc = 0x30BAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BAA8u;
            // 0x30baac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BAB0u;
}
