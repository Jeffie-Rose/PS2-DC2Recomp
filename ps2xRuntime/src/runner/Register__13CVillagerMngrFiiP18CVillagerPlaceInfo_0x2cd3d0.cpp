#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Register__13CVillagerMngrFiiP18CVillagerPlaceInfo
// Address: 0x2cd3d0 - 0x2cd464
void Register__13CVillagerMngrFiiP18CVillagerPlaceInfo_0x2cd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Register__13CVillagerMngrFiiP18CVillagerPlaceInfo_0x2cd3d0");
#endif

    switch (ctx->pc) {
        case 0x2cd3f8u: goto label_2cd3f8;
        case 0x2cd414u: goto label_2cd414;
        case 0x2cd43cu: goto label_2cd43c;
        default: break;
    }

    ctx->pc = 0x2cd3d0u;

    // 0x2cd3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cd3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cd3d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cd3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cd3d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cd3dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cd3e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cd3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd3e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cd3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cd3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3f0: 0xc0b353c  jal         func_2CD4F0
    ctx->pc = 0x2CD3F0u;
    SET_GPR_U32(ctx, 31, 0x2CD3F8u);
    ctx->pc = 0x2CD3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD3F0u;
            // 0x2cd3f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4F0u;
    if (runtime->hasFunction(0x2CD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD3F8u; }
        if (ctx->pc != 0x2CD3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewData__13CVillagerMngrFv_0x2cd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD3F8u; }
        if (ctx->pc != 0x2CD3F8u) { return; }
    }
    ctx->pc = 0x2CD3F8u;
label_2cd3f8:
    // 0x2cd3f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD3FCu;
    {
        const bool branch_taken_0x2cd3fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD3FCu;
            // 0x2cd400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3fc) {
            ctx->pc = 0x2CD40Cu;
            goto label_2cd40c;
        }
    }
    ctx->pc = 0x2CD404u;
    // 0x2cd404: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CD404u;
    {
        const bool branch_taken_0x2cd404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD404u;
            // 0x2cd408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd404) {
            ctx->pc = 0x2CD448u;
            goto label_2cd448;
        }
    }
    ctx->pc = 0x2CD40Cu;
label_2cd40c:
    // 0x2cd40c: 0xc0b3444  jal         func_2CD110
    ctx->pc = 0x2CD40Cu;
    SET_GPR_U32(ctx, 31, 0x2CD414u);
    ctx->pc = 0x2CD110u;
    if (runtime->hasFunction(0x2CD110u)) {
        auto targetFn = runtime->lookupFunction(0x2CD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD414u; }
        if (ctx->pc != 0x2CD414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerDataFv_0x2cd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD414u; }
        if (ctx->pc != 0x2CD414u) { return; }
    }
    ctx->pc = 0x2CD414u;
label_2cd414:
    // 0x2cd414: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2cd414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x2cd418: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2cd418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2cd41c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD41Cu;
    {
        const bool branch_taken_0x2cd41c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD41Cu;
            // 0x2cd420: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd41c) {
            ctx->pc = 0x2CD444u;
            goto label_2cd444;
        }
    }
    ctx->pc = 0x2CD424u;
    // 0x2cd424: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2cd424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cd428: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cd428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd42c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2cd42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2cd430: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x2cd430u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x2cd434: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2CD434u;
    SET_GPR_U32(ctx, 31, 0x2CD43Cu);
    ctx->pc = 0x2CD438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD434u;
            // 0x2cd438: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD43Cu; }
        if (ctx->pc != 0x2CD43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD43Cu; }
        if (ctx->pc != 0x2CD43Cu) { return; }
    }
    ctx->pc = 0x2CD43Cu;
label_2cd43c:
    // 0x2cd43c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2cd43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd440: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2cd440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_2cd444:
    // 0x2cd444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd448:
    // 0x2cd448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cd448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd44c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cd44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cd450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd45c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD45Cu;
            // 0x2cd460: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD464u;
}
