#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextMotion__12CSceneObjSeqFPcif
// Address: 0x25cf90 - 0x25d000
void NextMotion__12CSceneObjSeqFPcif_0x25cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextMotion__12CSceneObjSeqFPcif_0x25cf90");
#endif

    switch (ctx->pc) {
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfd8u: goto label_25cfd8;
        default: break;
    }

    ctx->pc = 0x25cf90u;

    // 0x25cf90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25cf94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25cf98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25cf9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25cfa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25cfa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25cfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25cfa8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25cfa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25cfacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25cfb0: 0xc097130  jal         func_25C4C0
    ctx->pc = 0x25CFB0u;
    SET_GPR_U32(ctx, 31, 0x25CFB8u);
    ctx->pc = 0x25CFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFB0u;
            // 0x25cfb4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C4C0u;
    if (runtime->hasFunction(0x25C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFB8u; }
        if (ctx->pc != 0x25CFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFB8u; }
        if (ctx->pc != 0x25CFB8u) { return; }
    }
    ctx->pc = 0x25CFB8u;
label_25cfb8:
    // 0x25cfb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cfb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfbc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CFBCu;
    {
        const bool branch_taken_0x25cfbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfbc) {
            ctx->pc = 0x25CFE4u;
            goto label_25cfe4;
        }
    }
    ctx->pc = 0x25CFC4u;
    // 0x25cfc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x25cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25cfc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfcc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25cfd0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25CFD0u;
    SET_GPR_U32(ctx, 31, 0x25CFD8u);
    ctx->pc = 0x25CFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFD0u;
            // 0x25cfd4: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFD8u; }
        if (ctx->pc != 0x25CFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CFD8u; }
        if (ctx->pc != 0x25CFD8u) { return; }
    }
    ctx->pc = 0x25CFD8u;
label_25cfd8:
    // 0x25cfd8: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x25cfdc: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x25cfdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x25cfe0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x25cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_25cfe4:
    // 0x25cfe4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25cfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cfe8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25cfec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25cfecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25cff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25cff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cff8: 0x3e00008  jr          $ra
    ctx->pc = 0x25CFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CFF8u;
            // 0x25cffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D000u;
}
