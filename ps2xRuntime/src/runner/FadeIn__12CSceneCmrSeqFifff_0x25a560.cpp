#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeIn__12CSceneCmrSeqFifff
// Address: 0x25a560 - 0x25a5c4
void FadeIn__12CSceneCmrSeqFifff_0x25a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeIn__12CSceneCmrSeqFifff_0x25a560");
#endif

    switch (ctx->pc) {
        case 0x25a58cu: goto label_25a58c;
        default: break;
    }

    ctx->pc = 0x25a560u;

    // 0x25a560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a568: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a56c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a56cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a574: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a578: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a57c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25a57cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25a580: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25a580u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25a584: 0xc0966b0  jal         func_259AC0
    ctx->pc = 0x25A584u;
    SET_GPR_U32(ctx, 31, 0x25A58Cu);
    ctx->pc = 0x25A588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A584u;
            // 0x25a588: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259AC0u;
    if (runtime->hasFunction(0x259AC0u)) {
        auto targetFn = runtime->lookupFunction(0x259AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A58Cu; }
        if (ctx->pc != 0x25A58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextFadeSeq__12CSceneCmrSeqFv_0x259ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A58Cu; }
        if (ctx->pc != 0x25A58Cu) { return; }
    }
    ctx->pc = 0x25A58Cu;
label_25a58c:
    // 0x25a58c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A58Cu;
    {
        const bool branch_taken_0x25a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A58Cu;
            // 0x25a590: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a58c) {
            ctx->pc = 0x25A5A8u;
            goto label_25a5a8;
        }
    }
    ctx->pc = 0x25A594u;
    // 0x25a594: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a598: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x25a59c: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x25a59cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25a5a0: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x25a5a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25a5a4: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x25a5a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_25a5a8:
    // 0x25a5a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a5ac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a5b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a5b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a5b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A5BCu;
            // 0x25a5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A5C4u;
}
