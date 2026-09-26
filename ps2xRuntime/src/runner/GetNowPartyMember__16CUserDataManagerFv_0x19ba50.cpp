#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowPartyMember__16CUserDataManagerFv
// Address: 0x19ba50 - 0x19ba94
void GetNowPartyMember__16CUserDataManagerFv_0x19ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowPartyMember__16CUserDataManagerFv_0x19ba50");
#endif

    switch (ctx->pc) {
        case 0x19ba74u: goto label_19ba74;
        default: break;
    }

    ctx->pc = 0x19ba50u;

    // 0x19ba50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ba54: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ba58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ba5c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19ba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19ba60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ba64: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x19ba68: 0x94304d90  lhu         $s0, 0x4D90($at)
    ctx->pc = 0x19ba68u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19856)));
    // 0x19ba6c: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x19BA6Cu;
    SET_GPR_U32(ctx, 31, 0x19BA74u);
    ctx->pc = 0x19BA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA6Cu;
            // 0x19ba70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA74u; }
        if (ctx->pc != 0x19BA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA74u; }
        if (ctx->pc != 0x19BA74u) { return; }
    }
    ctx->pc = 0x19BA74u;
label_19ba74:
    // 0x19ba74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BA74u;
    {
        const bool branch_taken_0x19ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA74u;
            // 0x19ba78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba74) {
            ctx->pc = 0x19BA84u;
            goto label_19ba84;
        }
    }
    ctx->pc = 0x19BA7Cu;
    // 0x19ba7c: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x19ba7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x19ba80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ba80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ba84:
    // 0x19ba84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ba84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ba88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ba88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ba8c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA8Cu;
            // 0x19ba90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BA94u;
}
