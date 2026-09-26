#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SystemMesClose__FP6CScene
// Address: 0x2d8a60 - 0x2d8ad0
void SystemMesClose__FP6CScene_0x2d8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SystemMesClose__FP6CScene_0x2d8a60");
#endif

    switch (ctx->pc) {
        case 0x2d8a74u: goto label_2d8a74;
        case 0x2d8a9cu: goto label_2d8a9c;
        default: break;
    }

    ctx->pc = 0x2d8a60u;

    // 0x2d8a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d8a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8a6c: 0xc0a0e78  jal         func_2839E0
    ctx->pc = 0x2D8A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A74u);
    ctx->pc = 0x2D8A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A6Cu;
            // 0x2d8a70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A74u; }
        if (ctx->pc != 0x2D8A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A74u; }
        if (ctx->pc != 0x2D8A74u) { return; }
    }
    ctx->pc = 0x2D8A74u;
label_2d8a74:
    // 0x2d8a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a78: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8A78u;
    {
        const bool branch_taken_0x2d8a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a78) {
            ctx->pc = 0x2D8AC0u;
            goto label_2d8ac0;
        }
    }
    ctx->pc = 0x2D8A80u;
    // 0x2d8a80: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x2d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
    // 0x2d8a84: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8A84u;
    {
        const bool branch_taken_0x2d8a84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D8A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A84u;
            // 0x2d8a88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a84) {
            ctx->pc = 0x2D8A90u;
            goto label_2d8a90;
        }
    }
    ctx->pc = 0x2D8A8Cu;
    // 0x2d8a8c: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x2d8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_2d8a90:
    // 0x2d8a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a94: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x2D8A94u;
    SET_GPR_U32(ctx, 31, 0x2D8A9Cu);
    ctx->pc = 0x2D8A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A94u;
            // 0x2d8a98: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A9Cu; }
        if (ctx->pc != 0x2D8A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A9Cu; }
        if (ctx->pc != 0x2D8A9Cu) { return; }
    }
    ctx->pc = 0x2D8A9Cu;
label_2d8a9c:
    // 0x2d8a9c: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2d8a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x2d8aa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d8aa4: 0xae0317e4  sw          $v1, 0x17E4($s0)
    ctx->pc = 0x2d8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 3));
    // 0x2d8aa8: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x2d8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x2d8aac: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2d8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x2d8ab0: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2d8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x2d8ab4: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x2d8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x2d8ab8: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x2d8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
    // 0x2d8abc: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x2d8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_2d8ac0:
    // 0x2d8ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8AC8u;
            // 0x2d8acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8AD0u;
}
