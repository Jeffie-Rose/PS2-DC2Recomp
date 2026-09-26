#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AHDSlowing__12CSceneCmrSeqFfi
// Address: 0x25a440 - 0x25a484
void AHDSlowing__12CSceneCmrSeqFfi_0x25a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AHDSlowing__12CSceneCmrSeqFfi_0x25a440");
#endif

    switch (ctx->pc) {
        case 0x25a45cu: goto label_25a45c;
        default: break;
    }

    ctx->pc = 0x25a440u;

    // 0x25a440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a448: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a44c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a450: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a454: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A454u;
    SET_GPR_U32(ctx, 31, 0x25A45Cu);
    ctx->pc = 0x25A458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A454u;
            // 0x25a458: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A45Cu; }
        if (ctx->pc != 0x25A45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A45Cu; }
        if (ctx->pc != 0x25A45Cu) { return; }
    }
    ctx->pc = 0x25A45Cu;
label_25a45c:
    // 0x25a45c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A45Cu;
    {
        const bool branch_taken_0x25a45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A45Cu;
            // 0x25a460: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a45c) {
            ctx->pc = 0x25A470u;
            goto label_25a470;
        }
    }
    ctx->pc = 0x25A464u;
    // 0x25a464: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a468: 0xe4540030  swc1        $f20, 0x30($v0)
    ctx->pc = 0x25a468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x25a46c: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x25a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
label_25a470:
    // 0x25a470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a474: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a47c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A47Cu;
            // 0x25a480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A484u;
}
