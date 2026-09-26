#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CDataWeaponFv
// Address: 0x194650 - 0x19468c
void ps2___ct__11CDataWeaponFv_0x194650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CDataWeaponFv_0x194650");
#endif

    switch (ctx->pc) {
        case 0x19466cu: goto label_19466c;
        default: break;
    }

    ctx->pc = 0x194650u;

    // 0x194650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19465c: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x19465cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x194660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194664: 0xc049c86  jal         func_127218
    ctx->pc = 0x194664u;
    SET_GPR_U32(ctx, 31, 0x19466Cu);
    ctx->pc = 0x194668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194664u;
            // 0x194668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19466Cu; }
        if (ctx->pc != 0x19466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19466Cu; }
        if (ctx->pc != 0x19466Cu) { return; }
    }
    ctx->pc = 0x19466Cu;
label_19466c:
    // 0x19466c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x194670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x194670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194674: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x194674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x194678: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x194678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x19467c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194684: 0x3e00008  jr          $ra
    ctx->pc = 0x194684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194684u;
            // 0x194688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19468Cu;
}
