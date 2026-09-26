#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAction__16CMenuPosDataFormFPc
// Address: 0x228900 - 0x228990
void SetAction__16CMenuPosDataFormFPc_0x228900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAction__16CMenuPosDataFormFPc_0x228900");
#endif

    switch (ctx->pc) {
        case 0x22892cu: goto label_22892c;
        case 0x22893cu: goto label_22893c;
        default: break;
    }

    ctx->pc = 0x228900u;

    // 0x228900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x228900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x228904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x228904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x228908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x228908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22890c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x228910: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x228910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228918: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x228918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22891c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22891cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228924: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x228924u;
    {
        const bool branch_taken_0x228924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228924u;
            // 0x228928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228924) {
            ctx->pc = 0x22895Cu;
            goto label_22895c;
        }
    }
    ctx->pc = 0x22892Cu;
label_22892c:
    // 0x22892c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x228930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x228930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228934: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x228934u;
    SET_GPR_U32(ctx, 31, 0x22893Cu);
    ctx->pc = 0x228938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228934u;
            // 0x228938: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22893Cu; }
        if (ctx->pc != 0x22893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22893Cu; }
        if (ctx->pc != 0x22893Cu) { return; }
    }
    ctx->pc = 0x22893Cu;
label_22893c:
    // 0x22893c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22893Cu;
    {
        const bool branch_taken_0x22893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22893c) {
            ctx->pc = 0x228954u;
            goto label_228954;
        }
    }
    ctx->pc = 0x228944u;
    // 0x228944: 0xa611005e  sh          $s1, 0x5E($s0)
    ctx->pc = 0x228944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 17));
    // 0x228948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22894c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22894Cu;
    {
        const bool branch_taken_0x22894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22894Cu;
            // 0x228950: 0xa6030060  sh          $v1, 0x60($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22894c) {
            ctx->pc = 0x228974u;
            goto label_228974;
        }
    }
    ctx->pc = 0x228954u;
label_228954:
    // 0x228954: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x228954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x228958: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22895c:
    // 0x22895c: 0x0  nop
    ctx->pc = 0x22895cu;
    // NOP
    // 0x228960: 0x86030062  lh          $v1, 0x62($s0)
    ctx->pc = 0x228960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x228964: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x228964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x228968: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x228968u;
    {
        const bool branch_taken_0x228968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228968u;
            // 0x22896c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228968) {
            ctx->pc = 0x22892Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22892c;
        }
    }
    ctx->pc = 0x228970u;
    // 0x228970: 0xa603005e  sh          $v1, 0x5E($s0)
    ctx->pc = 0x228970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
label_228974:
    // 0x228974: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x228974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228978: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x228978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22897c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22897cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228988: 0x3e00008  jr          $ra
    ctx->pc = 0x228988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228988u;
            // 0x22898c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228990u;
}
