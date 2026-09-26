#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePan__FUiiii
// Address: 0x18ec00 - 0x18ece0
void sndSetSePan__FUiiii_0x18ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePan__FUiiii_0x18ec00");
#endif

    switch (ctx->pc) {
        case 0x18ec20u: goto label_18ec20;
        case 0x18ec28u: goto label_18ec28;
        case 0x18ec34u: goto label_18ec34;
        case 0x18ecd4u: goto label_18ecd4;
        default: break;
    }

    ctx->pc = 0x18ec00u;

    // 0x18ec00: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18ec00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ec04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ec08: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x18ec08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ec10: 0x10e30030  beq         $a3, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x18EC10u;
    {
        const bool branch_taken_0x18ec10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC10u;
            // 0x18ec14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec10) {
            ctx->pc = 0x18ECD4u;
            goto label_18ecd4;
        }
    }
    ctx->pc = 0x18EC18u;
    // 0x18ec18: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18EC18u;
    SET_GPR_U32(ctx, 31, 0x18EC20u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC20u; }
        if (ctx->pc != 0x18EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC20u; }
        if (ctx->pc != 0x18EC20u) { return; }
    }
    ctx->pc = 0x18EC20u;
label_18ec20:
    // 0x18ec20: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18EC20u;
    SET_GPR_U32(ctx, 31, 0x18EC28u);
    ctx->pc = 0x18EC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC20u;
            // 0x18ec24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC28u; }
        if (ctx->pc != 0x18EC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC28u; }
        if (ctx->pc != 0x18EC28u) { return; }
    }
    ctx->pc = 0x18EC28u;
label_18ec28:
    // 0x18ec28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec2c: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18EC2Cu;
    SET_GPR_U32(ctx, 31, 0x18EC34u);
    ctx->pc = 0x18EC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC2Cu;
            // 0x18ec30: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC34u; }
        if (ctx->pc != 0x18EC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC34u; }
        if (ctx->pc != 0x18EC34u) { return; }
    }
    ctx->pc = 0x18EC34u;
label_18ec34:
    // 0x18ec34: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x18EC34u;
    {
        const bool branch_taken_0x18ec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec34) {
            ctx->pc = 0x18ECD4u;
            goto label_18ecd4;
        }
    }
    ctx->pc = 0x18EC3Cu;
    // 0x18ec3c: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EC3Cu;
    {
        const bool branch_taken_0x18ec3c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x18EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC3Cu;
            // 0x18ec40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec3c) {
            ctx->pc = 0x18EC54u;
            goto label_18ec54;
        }
    }
    ctx->pc = 0x18EC44u;
    // 0x18ec44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18ec48: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x18ec48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ec4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EC4Cu;
    {
        const bool branch_taken_0x18ec4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC4Cu;
            // 0x18ec50: 0x918c0  sll         $v1, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec4c) {
            ctx->pc = 0x18EC5Cu;
            goto label_18ec5c;
        }
    }
    ctx->pc = 0x18EC54u;
label_18ec54:
    // 0x18ec54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EC54u;
    {
        const bool branch_taken_0x18ec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec54) {
            ctx->pc = 0x18EC6Cu;
            goto label_18ec6c;
        }
    }
    ctx->pc = 0x18EC5Cu;
label_18ec5c:
    // 0x18ec5c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x18ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18ec60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ec64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ec68: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x18ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18ec6c:
    // 0x18ec6c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18EC6Cu;
    {
        const bool branch_taken_0x18ec6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec6c) {
            ctx->pc = 0x18ECD4u;
            goto label_18ecd4;
        }
    }
    ctx->pc = 0x18EC74u;
    // 0x18ec74: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EC74u;
    {
        const bool branch_taken_0x18ec74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18EC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC74u;
            // 0x18ec78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec74) {
            ctx->pc = 0x18EC8Cu;
            goto label_18ec8c;
        }
    }
    ctx->pc = 0x18EC7Cu;
    // 0x18ec7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ec80: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18ec80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ec84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EC84u;
    {
        const bool branch_taken_0x18ec84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec84) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC8Cu;
label_18ec8c:
    // 0x18ec8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC8Cu;
    {
        const bool branch_taken_0x18ec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec8c) {
            ctx->pc = 0x18ECA8u;
            goto label_18eca8;
        }
    }
    ctx->pc = 0x18EC94u;
label_18ec94:
    // 0x18ec94: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18ec98: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ec9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18eca0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18eca4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x18eca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18eca8:
    // 0x18eca8: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x18ECA8u;
    {
        const bool branch_taken_0x18eca8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eca8) {
            ctx->pc = 0x18ECD4u;
            goto label_18ecd4;
        }
    }
    ctx->pc = 0x18ECB0u;
    // 0x18ecb0: 0x81240004  lb          $a0, 0x4($t1)
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x18ecb4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ECB4u;
    {
        const bool branch_taken_0x18ecb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECB4u;
            // 0x18ecb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecb4) {
            ctx->pc = 0x18ECD4u;
            goto label_18ecd4;
        }
    }
    ctx->pc = 0x18ECBCu;
    // 0x18ecbc: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ECBCu;
    {
        const bool branch_taken_0x18ecbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18ECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECBCu;
            // 0x18ecc0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecbc) {
            ctx->pc = 0x18ECD4u;
            goto label_18ecd4;
        }
    }
    ctx->pc = 0x18ECC4u;
    // 0x18ecc4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18ecc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecc8: 0x81260006  lb          $a2, 0x6($t1)
    ctx->pc = 0x18ecc8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x18eccc: 0xc063ca4  jal         func_18F290
    ctx->pc = 0x18ECCCu;
    SET_GPR_U32(ctx, 31, 0x18ECD4u);
    ctx->pc = 0x18ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECCCu;
            // 0x18ecd0: 0x81250005  lb          $a1, 0x5($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F290u;
    if (runtime->hasFunction(0x18F290u)) {
        auto targetFn = runtime->lookupFunction(0x18F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECD4u; }
        if (ctx->pc != 0x18ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanPrKr__FUiiiii_0x18f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECD4u; }
        if (ctx->pc != 0x18ECD4u) { return; }
    }
    ctx->pc = 0x18ECD4u;
label_18ecd4:
    // 0x18ecd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ecd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ecd8: 0x3e00008  jr          $ra
    ctx->pc = 0x18ECD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECD8u;
            // 0x18ecdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ECE0u;
}
