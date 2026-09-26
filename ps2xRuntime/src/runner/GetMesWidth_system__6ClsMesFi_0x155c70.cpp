#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMesWidth_system__6ClsMesFi
// Address: 0x155c70 - 0x155ed8
void GetMesWidth_system__6ClsMesFi_0x155c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMesWidth_system__6ClsMesFi_0x155c70");
#endif

    switch (ctx->pc) {
        case 0x155cb8u: goto label_155cb8;
        case 0x155cd0u: goto label_155cd0;
        case 0x155d58u: goto label_155d58;
        case 0x155d94u: goto label_155d94;
        case 0x155dccu: goto label_155dcc;
        case 0x155e14u: goto label_155e14;
        case 0x155e24u: goto label_155e24;
        case 0x155e5cu: goto label_155e5c;
        case 0x155e74u: goto label_155e74;
        case 0x155e94u: goto label_155e94;
        default: break;
    }

    ctx->pc = 0x155c70u;

    // 0x155c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x155c74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x155c78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155c7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155c80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x155c80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155c8c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155C8Cu;
    {
        const bool branch_taken_0x155c8c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x155C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C8Cu;
            // 0x155c90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c8c) {
            ctx->pc = 0x155C9Cu;
            goto label_155c9c;
        }
    }
    ctx->pc = 0x155C94u;
    // 0x155c94: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x155C94u;
    {
        const bool branch_taken_0x155c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155C94u;
            // 0x155c98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c94) {
            ctx->pc = 0x155EB4u;
            goto label_155eb4;
        }
    }
    ctx->pc = 0x155C9Cu;
label_155c9c:
    // 0x155c9c: 0x8e8221d8  lw          $v0, 0x21D8($s4)
    ctx->pc = 0x155c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8664)));
    // 0x155ca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155CA0u;
    {
        const bool branch_taken_0x155ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155CA0u;
            // 0x155ca4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ca0) {
            ctx->pc = 0x155CB0u;
            goto label_155cb0;
        }
    }
    ctx->pc = 0x155CA8u;
    // 0x155ca8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x155CA8u;
    {
        const bool branch_taken_0x155ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ca8) {
            ctx->pc = 0x155EB4u;
            goto label_155eb4;
        }
    }
    ctx->pc = 0x155CB0u;
label_155cb0:
    // 0x155cb0: 0xc0557d4  jal         func_155F50
    ctx->pc = 0x155CB0u;
    SET_GPR_U32(ctx, 31, 0x155CB8u);
    ctx->pc = 0x155F50u;
    if (runtime->hasFunction(0x155F50u)) {
        auto targetFn = runtime->lookupFunction(0x155F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CB8u; }
        if (ctx->pc != 0x155CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextLineDataTop_system__6ClsMesFi_0x155f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CB8u; }
        if (ctx->pc != 0x155CB8u) { return; }
    }
    ctx->pc = 0x155CB8u;
label_155cb8:
    // 0x155cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cbc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155CBCu;
    {
        const bool branch_taken_0x155cbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x155CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155CBCu;
            // 0x155cc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cbc) {
            ctx->pc = 0x155CCCu;
            goto label_155ccc;
        }
    }
    ctx->pc = 0x155CC4u;
    // 0x155cc4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x155CC4u;
    {
        const bool branch_taken_0x155cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155CC4u;
            // 0x155cc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cc4) {
            ctx->pc = 0x155EB4u;
            goto label_155eb4;
        }
    }
    ctx->pc = 0x155CCCu;
label_155ccc:
    // 0x155ccc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155cd0:
    // 0x155cd0: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x155cd0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155cd4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x155cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x155cd8: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155CD8u;
    {
        const bool branch_taken_0x155cd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x155CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155CD8u;
            // 0x155cdc: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cd8) {
            ctx->pc = 0x155D14u;
            goto label_155d14;
        }
    }
    ctx->pc = 0x155CE0u;
    // 0x155ce0: 0x3402ff01  ori         $v0, $zero, 0xFF01
    ctx->pc = 0x155ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
    // 0x155ce4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155CE4u;
    {
        const bool branch_taken_0x155ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x155ce4) {
            ctx->pc = 0x155CF4u;
            goto label_155cf4;
        }
    }
    ctx->pc = 0x155CECu;
    // 0x155cec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x155CECu;
    {
        const bool branch_taken_0x155cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155cec) {
            ctx->pc = 0x155D30u;
            goto label_155d30;
        }
    }
    ctx->pc = 0x155CF4u;
label_155cf4:
    // 0x155cf4: 0x0  nop
    ctx->pc = 0x155cf4u;
    // NOP
    // 0x155cf8: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x155cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x155cfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x155CFCu;
    {
        const bool branch_taken_0x155cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155CFCu;
            // 0x155d00: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cfc) {
            ctx->pc = 0x155D0Cu;
            goto label_155d0c;
        }
    }
    ctx->pc = 0x155D04u;
    // 0x155d04: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x155d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d08: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x155d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_155d0c:
    // 0x155d0c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x155D0Cu;
    {
        const bool branch_taken_0x155d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155d0c) {
            ctx->pc = 0x155EB4u;
            goto label_155eb4;
        }
    }
    ctx->pc = 0x155D14u;
label_155d14:
    // 0x155d14: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x155d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x155d18: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x155D18u;
    {
        const bool branch_taken_0x155d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155d18) {
            ctx->pc = 0x155D24u;
            goto label_155d24;
        }
    }
    ctx->pc = 0x155D20u;
    // 0x155d20: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x155d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155d24:
    // 0x155d24: 0x0  nop
    ctx->pc = 0x155d24u;
    // NOP
    // 0x155d28: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x155D28u;
    {
        const bool branch_taken_0x155d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D28u;
            // 0x155d2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d28) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155D30u;
label_155d30:
    // 0x155d30: 0x3402fafa  ori         $v0, $zero, 0xFAFA
    ctx->pc = 0x155d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64250);
    // 0x155d34: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155d38: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x155D38u;
    {
        const bool branch_taken_0x155d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D38u;
            // 0x155d3c: 0x3401fb00  ori         $at, $zero, 0xFB00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d38) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D40u;
    // 0x155d40: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155d44: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x155D44u;
    {
        const bool branch_taken_0x155d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D44u;
            // 0x155d48: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d44) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D4Cu;
    // 0x155d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d50: 0xc054848  jal         func_152120
    ctx->pc = 0x155D50u;
    SET_GPR_U32(ctx, 31, 0x155D58u);
    ctx->pc = 0x155D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155D50u;
            // 0x155d54: 0x24458506  addiu       $a1, $v0, -0x7AFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935814));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152120u;
    if (runtime->hasFunction(0x152120u)) {
        auto targetFn = runtime->lookupFunction(0x152120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D58u; }
        if (ctx->pc != 0x155D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameWidth__6ClsMesFi_0x152120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D58u; }
        if (ctx->pc != 0x155D58u) { return; }
    }
    ctx->pc = 0x155D58u;
label_155d58:
    // 0x155d58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155d5c: 0x1043ffdc  beq         $v0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x155D5Cu;
    {
        const bool branch_taken_0x155d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x155d5c) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155D64u;
    // 0x155d64: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x155D64u;
    {
        const bool branch_taken_0x155d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D64u;
            // 0x155d68: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d64) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155D6Cu;
label_155d6c:
    // 0x155d6c: 0x0  nop
    ctx->pc = 0x155d6cu;
    // NOP
    // 0x155d70: 0x3402faea  ori         $v0, $zero, 0xFAEA
    ctx->pc = 0x155d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64234);
    // 0x155d74: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155d78: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x155D78u;
    {
        const bool branch_taken_0x155d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D78u;
            // 0x155d7c: 0x3402faf9  ori         $v0, $zero, 0xFAF9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64249);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d78) {
            ctx->pc = 0x155DA8u;
            goto label_155da8;
        }
    }
    ctx->pc = 0x155D80u;
    // 0x155d80: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x155d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x155d84: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x155D84u;
    {
        const bool branch_taken_0x155d84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155D84u;
            // 0x155d88: 0x512823  subu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d84) {
            ctx->pc = 0x155DA8u;
            goto label_155da8;
        }
    }
    ctx->pc = 0x155D8Cu;
    // 0x155d8c: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x155D8Cu;
    SET_GPR_U32(ctx, 31, 0x155D94u);
    ctx->pc = 0x155D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155D8Cu;
            // 0x155d90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (runtime->hasFunction(0x1522C0u)) {
        auto targetFn = runtime->lookupFunction(0x1522C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D94u; }
        if (ctx->pc != 0x155D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFi_0x1522c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D94u; }
        if (ctx->pc != 0x155D94u) { return; }
    }
    ctx->pc = 0x155D94u;
label_155d94:
    // 0x155d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155d98: 0x1043ffcd  beq         $v0, $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x155D98u;
    {
        const bool branch_taken_0x155d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x155d98) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155DA0u;
    // 0x155da0: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x155DA0u;
    {
        const bool branch_taken_0x155da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DA0u;
            // 0x155da4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155da0) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155DA8u;
label_155da8:
    // 0x155da8: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x155da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x155dac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155db0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155DB0u;
    {
        const bool branch_taken_0x155db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DB0u;
            // 0x155db4: 0x3401fd33  ori         $at, $zero, 0xFD33 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64819);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155db0) {
            ctx->pc = 0x155DDCu;
            goto label_155ddc;
        }
    }
    ctx->pc = 0x155DB8u;
    // 0x155db8: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155dbc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x155DBCu;
    {
        const bool branch_taken_0x155dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DBCu;
            // 0x155dc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dbc) {
            ctx->pc = 0x155DDCu;
            goto label_155ddc;
        }
    }
    ctx->pc = 0x155DC4u;
    // 0x155dc4: 0xc054834  jal         func_1520D0
    ctx->pc = 0x155DC4u;
    SET_GPR_U32(ctx, 31, 0x155DCCu);
    ctx->pc = 0x155DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155DC4u;
            // 0x155dc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1520D0u;
    if (runtime->hasFunction(0x1520D0u)) {
        auto targetFn = runtime->lookupFunction(0x1520D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DCCu; }
        if (ctx->pc != 0x155DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiW__6ClsMesFi_0x1520d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DCCu; }
        if (ctx->pc != 0x155DCCu) { return; }
    }
    ctx->pc = 0x155DCCu;
label_155dcc:
    // 0x155dcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x155dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x155dd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x155dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x155dd4: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x155DD4u;
    {
        const bool branch_taken_0x155dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DD4u;
            // 0x155dd8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dd4) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155DDCu;
label_155ddc:
    // 0x155ddc: 0x0  nop
    ctx->pc = 0x155ddcu;
    // NOP
    // 0x155de0: 0x3402f900  ori         $v0, $zero, 0xF900
    ctx->pc = 0x155de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63744);
    // 0x155de4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155de8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155DE8u;
    {
        const bool branch_taken_0x155de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DE8u;
            // 0x155dec: 0x3401fa00  ori         $at, $zero, 0xFA00 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155de8) {
            ctx->pc = 0x155E08u;
            goto label_155e08;
        }
    }
    ctx->pc = 0x155DF0u;
    // 0x155df0: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x155df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x155df4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x155DF4u;
    {
        const bool branch_taken_0x155df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DF4u;
            // 0x155df8: 0x26228000  addiu       $v0, $s1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155df4) {
            ctx->pc = 0x155E08u;
            goto label_155e08;
        }
    }
    ctx->pc = 0x155DFCu;
    // 0x155dfc: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x155dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x155e00: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x155E00u;
    {
        const bool branch_taken_0x155e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E00u;
            // 0x155e04: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e00) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155E08u;
label_155e08:
    // 0x155e08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e0c: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x155E0Cu;
    SET_GPR_U32(ctx, 31, 0x155E14u);
    ctx->pc = 0x155E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E0Cu;
            // 0x155e10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E14u; }
        if (ctx->pc != 0x155E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E14u; }
        if (ctx->pc != 0x155E14u) { return; }
    }
    ctx->pc = 0x155E14u;
label_155e14:
    // 0x155e14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x155E14u;
    {
        const bool branch_taken_0x155e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E14u;
            // 0x155e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e14) {
            ctx->pc = 0x155E64u;
            goto label_155e64;
        }
    }
    ctx->pc = 0x155E1Cu;
    // 0x155e1c: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x155E1Cu;
    SET_GPR_U32(ctx, 31, 0x155E24u);
    ctx->pc = 0x155E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E1Cu;
            // 0x155e20: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E24u; }
        if (ctx->pc != 0x155E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E24u; }
        if (ctx->pc != 0x155E24u) { return; }
    }
    ctx->pc = 0x155E24u;
label_155e24:
    // 0x155e24: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x155E24u;
    {
        const bool branch_taken_0x155e24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x155e24) {
            ctx->pc = 0x155E48u;
            goto label_155e48;
        }
    }
    ctx->pc = 0x155E2Cu;
    // 0x155e2c: 0x8e8300c0  lw          $v1, 0xC0($s4)
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155e30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155E30u;
    {
        const bool branch_taken_0x155e30 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x155E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E30u;
            // 0x155e34: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e30) {
            ctx->pc = 0x155E40u;
            goto label_155e40;
        }
    }
    ctx->pc = 0x155E38u;
    // 0x155e38: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155e3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x155e3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_155e40:
    // 0x155e40: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x155E40u;
    {
        const bool branch_taken_0x155e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E40u;
            // 0x155e44: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e40) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155E48u;
label_155e48:
    // 0x155e48: 0xc68100c0  lwc1        $f1, 0xC0($s4)
    ctx->pc = 0x155e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155e4c: 0xc68000c8  lwc1        $f0, 0xC8($s4)
    ctx->pc = 0x155e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x155e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x155e54: 0xc0a248c  jal         func_289230
    ctx->pc = 0x155E54u;
    SET_GPR_U32(ctx, 31, 0x155E5Cu);
    ctx->pc = 0x155E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E54u;
            // 0x155e58: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E5Cu; }
        if (ctx->pc != 0x155E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E5Cu; }
        if (ctx->pc != 0x155E5Cu) { return; }
    }
    ctx->pc = 0x155E5Cu;
label_155e5c:
    // 0x155e5c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x155E5Cu;
    {
        const bool branch_taken_0x155e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E5Cu;
            // 0x155e60: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e5c) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155E64u;
label_155e64:
    // 0x155e64: 0x0  nop
    ctx->pc = 0x155e64u;
    // NOP
    // 0x155e68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e6c: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155E6Cu;
    SET_GPR_U32(ctx, 31, 0x155E74u);
    ctx->pc = 0x155E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E6Cu;
            // 0x155e70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E74u; }
        if (ctx->pc != 0x155E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E74u; }
        if (ctx->pc != 0x155E74u) { return; }
    }
    ctx->pc = 0x155E74u;
label_155e74:
    // 0x155e74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155E74u;
    {
        const bool branch_taken_0x155e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e74) {
            ctx->pc = 0x155E88u;
            goto label_155e88;
        }
    }
    ctx->pc = 0x155E7Cu;
    // 0x155e7c: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x155e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155e80: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x155E80u;
    {
        const bool branch_taken_0x155e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155E80u;
            // 0x155e84: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e80) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155E88u;
label_155e88:
    // 0x155e88: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x155e88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155e8c: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x155E8Cu;
    SET_GPR_U32(ctx, 31, 0x155E94u);
    ctx->pc = 0x155E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E8Cu;
            // 0x155e90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E94u; }
        if (ctx->pc != 0x155E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E94u; }
        if (ctx->pc != 0x155E94u) { return; }
    }
    ctx->pc = 0x155E94u;
label_155e94:
    // 0x155e94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155E94u;
    {
        const bool branch_taken_0x155e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e94) {
            ctx->pc = 0x155EA8u;
            goto label_155ea8;
        }
    }
    ctx->pc = 0x155E9Cu;
    // 0x155e9c: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155ea0: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x155EA0u;
    {
        const bool branch_taken_0x155ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155EA0u;
            // 0x155ea4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ea0) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155EA8u;
label_155ea8:
    // 0x155ea8: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x155ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x155eac: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x155EACu;
    {
        const bool branch_taken_0x155eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155EACu;
            // 0x155eb0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155eac) {
            ctx->pc = 0x155CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155cd0;
        }
    }
    ctx->pc = 0x155EB4u;
label_155eb4:
    // 0x155eb4: 0x0  nop
    ctx->pc = 0x155eb4u;
    // NOP
    // 0x155eb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x155eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155ebc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155ec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155ec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155ec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x155ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155ED0u;
            // 0x155ed4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155ED8u;
}
