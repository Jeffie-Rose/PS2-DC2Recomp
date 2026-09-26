#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_AHD_SLOWING__FP12RS_STACKDATAi
// Address: 0x270230 - 0x270278
void ps2__CMRS_AHD_SLOWING__FP12RS_STACKDATAi_0x270230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_AHD_SLOWING__FP12RS_STACKDATAi_0x270230");
#endif

    switch (ctx->pc) {
        case 0x270244u: goto label_270244;
        case 0x270250u: goto label_270250;
        case 0x270264u: goto label_270264;
        default: break;
    }

    ctx->pc = 0x270230u;

    // 0x270230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270234: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x270234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x270238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27023c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27023Cu;
    SET_GPR_U32(ctx, 31, 0x270244u);
    ctx->pc = 0x270240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27023Cu;
            // 0x270240: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270244u; }
        if (ctx->pc != 0x270244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270244u; }
        if (ctx->pc != 0x270244u) { return; }
    }
    ctx->pc = 0x270244u;
label_270244:
    // 0x270244: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x270244u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x270248: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270248u;
    SET_GPR_U32(ctx, 31, 0x270250u);
    ctx->pc = 0x27024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270248u;
            // 0x27024c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270250u; }
        if (ctx->pc != 0x270250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270250u; }
        if (ctx->pc != 0x270250u) { return; }
    }
    ctx->pc = 0x270250u;
label_270250:
    // 0x270250: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x270250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x270254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270258: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x270258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27025c: 0xc096910  jal         func_25A440
    ctx->pc = 0x27025Cu;
    SET_GPR_U32(ctx, 31, 0x270264u);
    ctx->pc = 0x270260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27025Cu;
            // 0x270260: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A440u;
    if (runtime->hasFunction(0x25A440u)) {
        auto targetFn = runtime->lookupFunction(0x25A440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270264u; }
        if (ctx->pc != 0x270264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AHDSlowing__12CSceneCmrSeqFfi_0x25a440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270264u; }
        if (ctx->pc != 0x270264u) { return; }
    }
    ctx->pc = 0x270264u;
label_270264:
    // 0x270264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270268: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x270268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27026c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270270: 0x3e00008  jr          $ra
    ctx->pc = 0x270270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270270u;
            // 0x270274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270278u;
}
