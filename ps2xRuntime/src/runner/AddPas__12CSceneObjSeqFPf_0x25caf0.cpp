#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPas__12CSceneObjSeqFPf
// Address: 0x25caf0 - 0x25cb2c
void AddPas__12CSceneObjSeqFPf_0x25caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPas__12CSceneObjSeqFPf_0x25caf0");
#endif

    switch (ctx->pc) {
        case 0x25cb04u: goto label_25cb04;
        case 0x25cb1cu: goto label_25cb1c;
        default: break;
    }

    ctx->pc = 0x25caf0u;

    // 0x25caf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25caf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25caf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cafc: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CAFCu;
    SET_GPR_U32(ctx, 31, 0x25CB04u);
    ctx->pc = 0x25CB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAFCu;
            // 0x25cb00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB04u; }
        if (ctx->pc != 0x25CB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB04u; }
        if (ctx->pc != 0x25CB04u) { return; }
    }
    ctx->pc = 0x25CB04u;
label_25cb04:
    // 0x25cb04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25CB04u;
    {
        const bool branch_taken_0x25cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB04u;
            // 0x25cb08: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb04) {
            ctx->pc = 0x25CB1Cu;
            goto label_25cb1c;
        }
    }
    ctx->pc = 0x25CB0Cu;
    // 0x25cb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25cb14: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CB14u;
    SET_GPR_U32(ctx, 31, 0x25CB1Cu);
    ctx->pc = 0x25CB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB14u;
            // 0x25cb18: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB1Cu; }
        if (ctx->pc != 0x25CB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB1Cu; }
        if (ctx->pc != 0x25CB1Cu) { return; }
    }
    ctx->pc = 0x25CB1Cu;
label_25cb1c:
    // 0x25cb1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb24: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB24u;
            // 0x25cb28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CB2Cu;
}
