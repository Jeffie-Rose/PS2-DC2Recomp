#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharaAttach__12CSceneCmrSeqFifi
// Address: 0x25a7a0 - 0x25a7f4
void CharaAttach__12CSceneCmrSeqFifi_0x25a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharaAttach__12CSceneCmrSeqFifi_0x25a7a0");
#endif

    switch (ctx->pc) {
        case 0x25a7c4u: goto label_25a7c4;
        default: break;
    }

    ctx->pc = 0x25a7a0u;

    // 0x25a7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a7a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25a7a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25a7ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a7b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25a7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a7b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25a7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7bc: 0xc0966e0  jal         func_259B80
    ctx->pc = 0x25A7BCu;
    SET_GPR_U32(ctx, 31, 0x25A7C4u);
    ctx->pc = 0x25A7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7BCu;
            // 0x25a7c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259B80u;
    if (runtime->hasFunction(0x259B80u)) {
        auto targetFn = runtime->lookupFunction(0x259B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A7C4u; }
        if (ctx->pc != 0x25A7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextCharaSeq__12CSceneCmrSeqFv_0x259b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A7C4u; }
        if (ctx->pc != 0x25A7C4u) { return; }
    }
    ctx->pc = 0x25A7C4u;
label_25a7c4:
    // 0x25a7c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A7C4u;
    {
        const bool branch_taken_0x25a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7C4u;
            // 0x25a7c8: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7c4) {
            ctx->pc = 0x25A7DCu;
            goto label_25a7dc;
        }
    }
    ctx->pc = 0x25A7CCu;
    // 0x25a7cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a7d0: 0xac510030  sw          $s1, 0x30($v0)
    ctx->pc = 0x25a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 17));
    // 0x25a7d4: 0xe4540034  swc1        $f20, 0x34($v0)
    ctx->pc = 0x25a7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x25a7d8: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x25a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
label_25a7dc:
    // 0x25a7dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25a7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a7e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a7e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25a7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a7e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25A7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A7ECu;
            // 0x25a7f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A7F4u;
}
