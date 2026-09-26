#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: JoinPartyChara__16CUserDataManagerFiii
// Address: 0x19c6e0 - 0x19c74c
void JoinPartyChara__16CUserDataManagerFiii_0x19c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JoinPartyChara__16CUserDataManagerFiii_0x19c6e0");
#endif

    switch (ctx->pc) {
        case 0x19c72cu: goto label_19c72c;
        default: break;
    }

    ctx->pc = 0x19c6e0u;

    // 0x19c6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c6e8: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C6E8u;
    {
        const bool branch_taken_0x19c6e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x19C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6E8u;
            // 0x19c6ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6e8) {
            ctx->pc = 0x19C73Cu;
            goto label_19c73c;
        }
    }
    ctx->pc = 0x19C6F0u;
    // 0x19c6f0: 0x28a10021  slti        $at, $a1, 0x21
    ctx->pc = 0x19c6f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x19c6f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C6F4u;
    {
        const bool branch_taken_0x19c6f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6F4u;
            // 0x19c6f8: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6f4) {
            ctx->pc = 0x19C708u;
            goto label_19c708;
        }
    }
    ctx->pc = 0x19C6FCu;
    // 0x19c6fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19C6FCu;
    {
        const bool branch_taken_0x19c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6FCu;
            // 0x19c700: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6fc) {
            ctx->pc = 0x19C740u;
            goto label_19c740;
        }
    }
    ctx->pc = 0x19C704u;
    // 0x19c704: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_19c708:
    // 0x19c708: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19c708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19c70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c714: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19c718: 0xa4467db2  sh          $a2, 0x7DB2($v0)
    ctx->pc = 0x19c718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32178), (uint16_t)GPR_U32(ctx, 6));
    // 0x19c71c: 0x24507db0  addiu       $s0, $v0, 0x7DB0
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x19c720: 0xa4457db0  sh          $a1, 0x7DB0($v0)
    ctx->pc = 0x19c720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32176), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c724: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x19C724u;
    SET_GPR_U32(ctx, 31, 0x19C72Cu);
    ctx->pc = 0x19C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C724u;
            // 0x19c728: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C72Cu; }
        if (ctx->pc != 0x19C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C72Cu; }
        if (ctx->pc != 0x19C72Cu) { return; }
    }
    ctx->pc = 0x19C72Cu;
label_19c72c:
    // 0x19c72c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C72Cu;
    {
        const bool branch_taken_0x19c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c72c) {
            ctx->pc = 0x19C73Cu;
            goto label_19c73c;
        }
    }
    ctx->pc = 0x19C734u;
    // 0x19c734: 0x8043002f  lb          $v1, 0x2F($v0)
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
    // 0x19c738: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x19c738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_19c73c:
    // 0x19c73c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c740:
    // 0x19c740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c744: 0x3e00008  jr          $ra
    ctx->pc = 0x19C744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C744u;
            // 0x19c748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C74Cu;
}
