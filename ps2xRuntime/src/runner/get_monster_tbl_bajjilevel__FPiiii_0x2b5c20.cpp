#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: get_monster_tbl_bajjilevel__FPiiii
// Address: 0x2b5c20 - 0x2b5d98
void get_monster_tbl_bajjilevel__FPiiii_0x2b5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_monster_tbl_bajjilevel__FPiiii_0x2b5c20");
#endif

    switch (ctx->pc) {
        case 0x2b5c6cu: goto label_2b5c6c;
        case 0x2b5d08u: goto label_2b5d08;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d3cu: goto label_2b5d3c;
        default: break;
    }

    ctx->pc = 0x2b5c20u;

    // 0x2b5c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b5c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b5c24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b5c28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b5c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b5c2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b5c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b5c30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b5c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5c38: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5C38u;
    {
        const bool branch_taken_0x2b5c38 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2B5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C38u;
            // 0x2b5c3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c38) {
            ctx->pc = 0x2B5C4Cu;
            goto label_2b5c4c;
        }
    }
    ctx->pc = 0x2B5C40u;
    // 0x2b5c40: 0x28e10004  slti        $at, $a3, 0x4
    ctx->pc = 0x2b5c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b5c44: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5C44u;
    {
        const bool branch_taken_0x2b5c44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C44u;
            // 0x2b5c48: 0x3c080035  lui         $t0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c44) {
            ctx->pc = 0x2B5C54u;
            goto label_2b5c54;
        }
    }
    ctx->pc = 0x2B5C4Cu;
label_2b5c4c:
    // 0x2b5c4c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2B5C4Cu;
    {
        const bool branch_taken_0x2b5c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C4Cu;
            // 0x2b5c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c4c) {
            ctx->pc = 0x2B5D7Cu;
            goto label_2b5d7c;
        }
    }
    ctx->pc = 0x2B5C54u;
label_2b5c54:
    // 0x2b5c54: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2b5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b5c58: 0x25084640  addiu       $t0, $t0, 0x4640
    ctx->pc = 0x2b5c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17984));
    // 0x2b5c5c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2b5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2b5c60: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2b5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2b5c64: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B5C64u;
    {
        const bool branch_taken_0x2b5c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C64u;
            // 0x2b5c68: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c64) {
            ctx->pc = 0x2B5CECu;
            goto label_2b5cec;
        }
    }
    ctx->pc = 0x2B5C6Cu;
label_2b5c6c:
    // 0x2b5c6c: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5C6Cu;
    {
        const bool branch_taken_0x2b5c6c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2B5C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C6Cu;
            // 0x2b5c70: 0xc0082a  slt         $at, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c6c) {
            ctx->pc = 0x2B5C9Cu;
            goto label_2b5c9c;
        }
    }
    ctx->pc = 0x2B5C74u;
    // 0x2b5c74: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B5C74u;
    {
        const bool branch_taken_0x2b5c74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c74) {
            ctx->pc = 0x2B5CE0u;
            goto label_2b5ce0;
        }
    }
    ctx->pc = 0x2B5C7Cu;
    // 0x2b5c7c: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B5C7Cu;
    {
        const bool branch_taken_0x2b5c7c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2B5C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C7Cu;
            // 0x2b5c80: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c7c) {
            ctx->pc = 0x2B5CE0u;
            goto label_2b5ce0;
        }
    }
    ctx->pc = 0x2B5C84u;
    // 0x2b5c84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5c88: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b5c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b5c90: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2b5c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5c94: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B5C94u;
    {
        const bool branch_taken_0x2b5c94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5c94) {
            ctx->pc = 0x2B5CE0u;
            goto label_2b5ce0;
        }
    }
    ctx->pc = 0x2B5C9Cu;
label_2b5c9c:
    // 0x2b5c9c: 0x0  nop
    ctx->pc = 0x2b5c9cu;
    // NOP
    // 0x2b5ca0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5ca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5ca8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2b5ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b5cac: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x2b5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b5cb0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2b5cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5cb4: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5CB4u;
    {
        const bool branch_taken_0x2b5cb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5cb4) {
            ctx->pc = 0x2B5CE0u;
            goto label_2b5ce0;
        }
    }
    ctx->pc = 0x2B5CBCu;
    // 0x2b5cbc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2b5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2b5cc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5cc4: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x2b5cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b5cc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5ccc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2b5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2b5cd0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b5cd4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2b5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2b5cd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5cdc: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2b5cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_2b5ce0:
    // 0x2b5ce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2b5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b5ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5ce8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2b5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2b5cec:
    // 0x2b5cec: 0x0  nop
    ctx->pc = 0x2b5cecu;
    // NOP
    // 0x2b5cf0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2b5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b5cf4: 0x28830013  slti        $v1, $a0, 0x13
    ctx->pc = 0x2b5cf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2b5cf8: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2B5CF8u;
    {
        const bool branch_taken_0x2b5cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5cf8) {
            ctx->pc = 0x2B5C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5c6c;
        }
    }
    ctx->pc = 0x2B5D00u;
    // 0x2b5d00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B5D00u;
    {
        const bool branch_taken_0x2b5d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D00u;
            // 0x2b5d04: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d00) {
            ctx->pc = 0x2B5D64u;
            goto label_2b5d64;
        }
    }
    ctx->pc = 0x2B5D08u;
label_2b5d08:
    // 0x2b5d08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5d0c: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x2b5d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b5d10: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b5d14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b5d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5d18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B5D18u;
    {
        const bool branch_taken_0x2b5d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D18u;
            // 0x2b5d1c: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d18) {
            ctx->pc = 0x2B5D48u;
            goto label_2b5d48;
        }
    }
    ctx->pc = 0x2B5D20u;
label_2b5d20:
    // 0x2b5d20: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2b5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b5d24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5d28: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5D28u;
    {
        const bool branch_taken_0x2b5d28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D28u;
            // 0x2b5d2c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d28) {
            ctx->pc = 0x2B5D3Cu;
            goto label_2b5d3c;
        }
    }
    ctx->pc = 0x2B5D30u;
    // 0x2b5d30: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2b5d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b5d34: 0xc094400  jal         func_251000
    ctx->pc = 0x2B5D34u;
    SET_GPR_U32(ctx, 31, 0x2B5D3Cu);
    ctx->pc = 0x2B5D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D34u;
            // 0x2b5d38: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D3Cu; }
        if (ctx->pc != 0x2B5D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D3Cu; }
        if (ctx->pc != 0x2B5D3Cu) { return; }
    }
    ctx->pc = 0x2B5D3Cu;
label_2b5d3c:
    // 0x2b5d3c: 0x0  nop
    ctx->pc = 0x2b5d3cu;
    // NOP
    // 0x2b5d40: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2b5d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b5d44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b5d48:
    // 0x2b5d48: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2b5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2b5d4c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b5d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5d50: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B5D50u;
    {
        const bool branch_taken_0x2b5d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d50) {
            ctx->pc = 0x2B5D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5d20;
        }
    }
    ctx->pc = 0x2B5D58u;
    // 0x2b5d58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2b5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b5d5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5d60: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2b5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2b5d64:
    // 0x2b5d64: 0x0  nop
    ctx->pc = 0x2b5d64u;
    // NOP
    // 0x2b5d68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b5d6c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2b5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2b5d70: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2b5d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5d74: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2B5D74u;
    {
        const bool branch_taken_0x2b5d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d74) {
            ctx->pc = 0x2B5D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5d08;
        }
    }
    ctx->pc = 0x2B5D7Cu;
label_2b5d7c:
    // 0x2b5d7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b5d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b5d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D90u;
            // 0x2b5d94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5D98u;
}
