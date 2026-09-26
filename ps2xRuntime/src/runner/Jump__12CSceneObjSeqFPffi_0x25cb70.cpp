#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Jump__12CSceneObjSeqFPffi
// Address: 0x25cb70 - 0x25cbdc
void Jump__12CSceneObjSeqFPffi_0x25cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Jump__12CSceneObjSeqFPffi_0x25cb70");
#endif

    switch (ctx->pc) {
        case 0x25cb98u: goto label_25cb98;
        case 0x25cbb8u: goto label_25cbb8;
        default: break;
    }

    ctx->pc = 0x25cb70u;

    // 0x25cb70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25cb74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25cb78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25cb7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25cb80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25cb80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25cb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25cb88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25cb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25cb8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25cb90: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CB90u;
    SET_GPR_U32(ctx, 31, 0x25CB98u);
    ctx->pc = 0x25CB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB90u;
            // 0x25cb94: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB98u; }
        if (ctx->pc != 0x25CB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB98u; }
        if (ctx->pc != 0x25CB98u) { return; }
    }
    ctx->pc = 0x25CB98u;
label_25cb98:
    // 0x25cb98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb9c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CB9Cu;
    {
        const bool branch_taken_0x25cb9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb9c) {
            ctx->pc = 0x25CBC0u;
            goto label_25cbc0;
        }
    }
    ctx->pc = 0x25CBA4u;
    // 0x25cba4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25cba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25cbb0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CBB0u;
    SET_GPR_U32(ctx, 31, 0x25CBB8u);
    ctx->pc = 0x25CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBB0u;
            // 0x25cbb4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBB8u; }
        if (ctx->pc != 0x25CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBB8u; }
        if (ctx->pc != 0x25CBB8u) { return; }
    }
    ctx->pc = 0x25CBB8u;
label_25cbb8:
    // 0x25cbb8: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x25cbb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x25cbbc: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x25cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_25cbc0:
    // 0x25cbc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25cbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cbc4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25cbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25cbc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25cbc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cbcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25cbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cbd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25cbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBD4u;
            // 0x25cbd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CBDCu;
}
