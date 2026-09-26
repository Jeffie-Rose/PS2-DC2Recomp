#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHeight__12CSceneCmrSeqFf
// Address: 0x25a160 - 0x25a194
void SetHeight__12CSceneCmrSeqFf_0x25a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHeight__12CSceneCmrSeqFf_0x25a160");
#endif

    switch (ctx->pc) {
        case 0x25a174u: goto label_25a174;
        default: break;
    }

    ctx->pc = 0x25a160u;

    // 0x25a160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a168: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a16c: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A16Cu;
    SET_GPR_U32(ctx, 31, 0x25A174u);
    ctx->pc = 0x25A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A16Cu;
            // 0x25a170: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A174u; }
        if (ctx->pc != 0x25A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A174u; }
        if (ctx->pc != 0x25A174u) { return; }
    }
    ctx->pc = 0x25A174u;
label_25a174:
    // 0x25a174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A174u;
    {
        const bool branch_taken_0x25a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A174u;
            // 0x25a178: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a174) {
            ctx->pc = 0x25A184u;
            goto label_25a184;
        }
    }
    ctx->pc = 0x25A17Cu;
    // 0x25a17c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a180: 0xe4540030  swc1        $f20, 0x30($v0)
    ctx->pc = 0x25a180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_25a184:
    // 0x25a184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a188: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a18c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A18Cu;
            // 0x25a190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A194u;
}
