#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveAHD2__12CSceneCmrSeqFfffiif
// Address: 0x25a2b0 - 0x25a334
void MoveAHD2__12CSceneCmrSeqFfffiif_0x25a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveAHD2__12CSceneCmrSeqFfffiif_0x25a2b0");
#endif

    switch (ctx->pc) {
        case 0x25a2ecu: goto label_25a2ec;
        default: break;
    }

    ctx->pc = 0x25a2b0u;

    // 0x25a2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a2b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25a2b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25a2bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a2c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25a2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2c4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25a2c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25a2c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25a2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a2ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a2d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a2d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a2d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a2d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a2d8: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x25a2d8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x25a2dc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x25a2dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x25a2e0: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x25a2e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x25a2e4: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A2E4u;
    SET_GPR_U32(ctx, 31, 0x25A2ECu);
    ctx->pc = 0x25A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A2E4u;
            // 0x25a2e8: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A2ECu; }
        if (ctx->pc != 0x25A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A2ECu; }
        if (ctx->pc != 0x25A2ECu) { return; }
    }
    ctx->pc = 0x25A2ECu;
label_25a2ec:
    // 0x25a2ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25A2ECu;
    {
        const bool branch_taken_0x25a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A2ECu;
            // 0x25a2f0: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a2ec) {
            ctx->pc = 0x25A310u;
            goto label_25a310;
        }
    }
    ctx->pc = 0x25A2F4u;
    // 0x25a2f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a2f8: 0xe4570010  swc1        $f23, 0x10($v0)
    ctx->pc = 0x25a2f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25a2fc: 0xe4560014  swc1        $f22, 0x14($v0)
    ctx->pc = 0x25a2fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25a300: 0xe4550018  swc1        $f21, 0x18($v0)
    ctx->pc = 0x25a300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x25a304: 0xac510030  sw          $s1, 0x30($v0)
    ctx->pc = 0x25a304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 17));
    // 0x25a308: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x25a308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x25a30c: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x25a30cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_25a310:
    // 0x25a310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25a310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a314: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x25a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25a318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25a318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a31c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a324: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a328: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a32c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A32Cu;
            // 0x25a330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A334u;
}
