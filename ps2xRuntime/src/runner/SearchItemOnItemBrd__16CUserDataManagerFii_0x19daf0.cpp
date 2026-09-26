#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchItemOnItemBrd__16CUserDataManagerFii
// Address: 0x19daf0 - 0x19db7c
void SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0");
#endif

    switch (ctx->pc) {
        case 0x19db14u: goto label_19db14;
        case 0x19db20u: goto label_19db20;
        case 0x19db30u: goto label_19db30;
        case 0x19db3cu: goto label_19db3c;
        default: break;
    }

    ctx->pc = 0x19daf0u;

    // 0x19daf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19daf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19daf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dafc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19db00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19db00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19db04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19db08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db0c: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19DB0Cu;
    SET_GPR_U32(ctx, 31, 0x19DB14u);
    ctx->pc = 0x19DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB0Cu;
            // 0x19db10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB14u; }
        if (ctx->pc != 0x19DB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB14u; }
        if (ctx->pc != 0x19DB14u) { return; }
    }
    ctx->pc = 0x19DB14u;
label_19db14:
    // 0x19db14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19db14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db18: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19DB18u;
    SET_GPR_U32(ctx, 31, 0x19DB20u);
    ctx->pc = 0x19DB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB18u;
            // 0x19db1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB20u; }
        if (ctx->pc != 0x19DB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB20u; }
        if (ctx->pc != 0x19DB20u) { return; }
    }
    ctx->pc = 0x19DB20u;
label_19db20:
    // 0x19db20: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DB20u;
    {
        const bool branch_taken_0x19db20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB20u;
            // 0x19db24: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db20) {
            ctx->pc = 0x19DB34u;
            goto label_19db34;
        }
    }
    ctx->pc = 0x19DB28u;
    // 0x19db28: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19DB28u;
    SET_GPR_U32(ctx, 31, 0x19DB30u);
    ctx->pc = 0x19DB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB28u;
            // 0x19db2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB30u; }
        if (ctx->pc != 0x19DB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB30u; }
        if (ctx->pc != 0x19DB30u) { return; }
    }
    ctx->pc = 0x19DB30u;
label_19db30:
    // 0x19db30: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19db30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19db34:
    // 0x19db34: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19DB34u;
    {
        const bool branch_taken_0x19db34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB34u;
            // 0x19db38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db34) {
            ctx->pc = 0x19DB60u;
            goto label_19db60;
        }
    }
    ctx->pc = 0x19DB3Cu;
label_19db3c:
    // 0x19db3c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x19db3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19db40: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DB40u;
    {
        const bool branch_taken_0x19db40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x19db40) {
            ctx->pc = 0x19DB50u;
            goto label_19db50;
        }
    }
    ctx->pc = 0x19DB48u;
    // 0x19db48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19DB48u;
    {
        const bool branch_taken_0x19db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB48u;
            // 0x19db4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db48) {
            ctx->pc = 0x19DB64u;
            goto label_19db64;
        }
    }
    ctx->pc = 0x19DB50u;
label_19db50:
    // 0x19db50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19db54: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x19db54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19db58: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19DB58u;
    {
        const bool branch_taken_0x19db58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB58u;
            // 0x19db5c: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db58) {
            ctx->pc = 0x19DB3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19db3c;
        }
    }
    ctx->pc = 0x19DB60u;
label_19db60:
    // 0x19db60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19db60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19db64:
    // 0x19db64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19db68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19db68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19db6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19db6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19db70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19db70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db74: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB74u;
            // 0x19db78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DB7Cu;
}
