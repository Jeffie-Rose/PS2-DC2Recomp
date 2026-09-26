#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeOut__12CSceneCmrSeqFifff
// Address: 0x25a5d0 - 0x25a634
void FadeOut__12CSceneCmrSeqFifff_0x25a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeOut__12CSceneCmrSeqFifff_0x25a5d0");
#endif

    switch (ctx->pc) {
        case 0x25a5fcu: goto label_25a5fc;
        default: break;
    }

    ctx->pc = 0x25a5d0u;

    // 0x25a5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a5d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a5dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a5dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a5e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a5e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a5e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a5e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a5ec: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25a5ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25a5f0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25a5f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25a5f4: 0xc0966b0  jal         func_259AC0
    ctx->pc = 0x25A5F4u;
    SET_GPR_U32(ctx, 31, 0x25A5FCu);
    ctx->pc = 0x25A5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5F4u;
            // 0x25a5f8: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259AC0u;
    if (runtime->hasFunction(0x259AC0u)) {
        auto targetFn = runtime->lookupFunction(0x259AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A5FCu; }
        if (ctx->pc != 0x25A5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextFadeSeq__12CSceneCmrSeqFv_0x259ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A5FCu; }
        if (ctx->pc != 0x25A5FCu) { return; }
    }
    ctx->pc = 0x25A5FCu;
label_25a5fc:
    // 0x25a5fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A5FCu;
    {
        const bool branch_taken_0x25a5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5FCu;
            // 0x25a600: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5fc) {
            ctx->pc = 0x25A618u;
            goto label_25a618;
        }
    }
    ctx->pc = 0x25A604u;
    // 0x25a604: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a608: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x25a60c: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x25a60cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25a610: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x25a610u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25a614: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x25a614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_25a618:
    // 0x25a618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a61c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a624: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a628: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a62c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A62Cu;
            // 0x25a630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A634u;
}
