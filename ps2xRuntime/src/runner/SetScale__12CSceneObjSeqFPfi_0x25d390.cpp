#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScale__12CSceneObjSeqFPfi
// Address: 0x25d390 - 0x25d3ec
void SetScale__12CSceneObjSeqFPfi_0x25d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScale__12CSceneObjSeqFPfi_0x25d390");
#endif

    switch (ctx->pc) {
        case 0x25d3b0u: goto label_25d3b0;
        case 0x25d3d0u: goto label_25d3d0;
        default: break;
    }

    ctx->pc = 0x25d390u;

    // 0x25d390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d3a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25d3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3a8: 0xc097178  jal         func_25C5E0
    ctx->pc = 0x25D3A8u;
    SET_GPR_U32(ctx, 31, 0x25D3B0u);
    ctx->pc = 0x25D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3A8u;
            // 0x25d3ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C5E0u;
    if (runtime->hasFunction(0x25C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x25C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D3B0u; }
        if (ctx->pc != 0x25D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextScaleSeq__12CSceneObjSeqFv_0x25c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D3B0u; }
        if (ctx->pc != 0x25D3B0u) { return; }
    }
    ctx->pc = 0x25D3B0u;
label_25d3b0:
    // 0x25d3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3b4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D3B4u;
    {
        const bool branch_taken_0x25d3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d3b4) {
            ctx->pc = 0x25D3D4u;
            goto label_25d3d4;
        }
    }
    ctx->pc = 0x25D3BCu;
    // 0x25d3bc: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x25d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x25d3c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25d3c8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25D3C8u;
    SET_GPR_U32(ctx, 31, 0x25D3D0u);
    ctx->pc = 0x25D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3C8u;
            // 0x25d3cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D3D0u; }
        if (ctx->pc != 0x25D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D3D0u; }
        if (ctx->pc != 0x25D3D0u) { return; }
    }
    ctx->pc = 0x25D3D0u;
label_25d3d0:
    // 0x25d3d0: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_25d3d4:
    // 0x25d3d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d3d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25D3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3E4u;
            // 0x25d3e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D3ECu;
}
