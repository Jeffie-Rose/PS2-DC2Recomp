#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetMotStep__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bc70 - 0x25bc9c
void scsSetMotStep__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetMotStep__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bc70");
#endif

    switch (ctx->pc) {
        case 0x25bc8cu: goto label_25bc8c;
        default: break;
    }

    ctx->pc = 0x25bc70u;

    // 0x25bc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bc78: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x25bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bc7c: 0x8ca50064  lw          $a1, 0x64($a1)
    ctx->pc = 0x25bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x25bc80: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bc84: 0xc097984  jal         func_25E610
    ctx->pc = 0x25BC84u;
    SET_GPR_U32(ctx, 31, 0x25BC8Cu);
    ctx->pc = 0x25BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BC84u;
            // 0x25bc88: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E610u;
    if (runtime->hasFunction(0x25E610u)) {
        auto targetFn = runtime->lookupFunction(0x25E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BC8Cu; }
        if (ctx->pc != 0x25BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStep__10CEohMotherFif_0x25e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BC8Cu; }
        if (ctx->pc != 0x25BC8Cu) { return; }
    }
    ctx->pc = 0x25BC8Cu;
label_25bc8c:
    // 0x25bc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bc90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25bc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc94: 0x3e00008  jr          $ra
    ctx->pc = 0x25BC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BC94u;
            // 0x25bc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BC9Cu;
}
