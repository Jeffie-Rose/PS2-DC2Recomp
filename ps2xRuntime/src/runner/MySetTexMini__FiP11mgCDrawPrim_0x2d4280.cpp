#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MySetTexMini__FiP11mgCDrawPrim
// Address: 0x2d4280 - 0x2d42f4
void MySetTexMini__FiP11mgCDrawPrim_0x2d4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MySetTexMini__FiP11mgCDrawPrim_0x2d4280");
#endif

    switch (ctx->pc) {
        case 0x2d42b0u: goto label_2d42b0;
        case 0x2d42bcu: goto label_2d42bc;
        case 0x2d42d8u: goto label_2d42d8;
        case 0x2d42e4u: goto label_2d42e4;
        default: break;
    }

    ctx->pc = 0x2d4280u;

    // 0x2d4280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4284: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2d4284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2d4288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d428c: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x2d428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x2d4290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4294: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D4294u;
    {
        const bool branch_taken_0x2d4294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4294u;
            // 0x2d4298: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4294) {
            ctx->pc = 0x2D42C4u;
            goto label_2d42c4;
        }
    }
    ctx->pc = 0x2D429Cu;
    // 0x2d429c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d429cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d42a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d42a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42a4: 0x24a506c8  addiu       $a1, $a1, 0x6C8
    ctx->pc = 0x2d42a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1736));
    // 0x2d42a8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2D42A8u;
    SET_GPR_U32(ctx, 31, 0x2D42B0u);
    ctx->pc = 0x2D42ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42A8u;
            // 0x2d42ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42B0u; }
        if (ctx->pc != 0x2D42B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42B0u; }
        if (ctx->pc != 0x2D42B0u) { return; }
    }
    ctx->pc = 0x2D42B0u;
label_2d42b0:
    // 0x2d42b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d42b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42b4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2D42B4u;
    SET_GPR_U32(ctx, 31, 0x2D42BCu);
    ctx->pc = 0x2D42B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42B4u;
            // 0x2d42b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42BCu; }
        if (ctx->pc != 0x2D42BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42BCu; }
        if (ctx->pc != 0x2D42BCu) { return; }
    }
    ctx->pc = 0x2D42BCu;
label_2d42bc:
    // 0x2d42bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D42BCu;
    {
        const bool branch_taken_0x2d42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D42C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42BCu;
            // 0x2d42c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42bc) {
            ctx->pc = 0x2D42E8u;
            goto label_2d42e8;
        }
    }
    ctx->pc = 0x2D42C4u;
label_2d42c4:
    // 0x2d42c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d42c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d42c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d42c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42cc: 0x24a506d8  addiu       $a1, $a1, 0x6D8
    ctx->pc = 0x2d42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
    // 0x2d42d0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2D42D0u;
    SET_GPR_U32(ctx, 31, 0x2D42D8u);
    ctx->pc = 0x2D42D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42D0u;
            // 0x2d42d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42D8u; }
        if (ctx->pc != 0x2D42D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42D8u; }
        if (ctx->pc != 0x2D42D8u) { return; }
    }
    ctx->pc = 0x2D42D8u;
label_2d42d8:
    // 0x2d42d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d42dc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2D42DCu;
    SET_GPR_U32(ctx, 31, 0x2D42E4u);
    ctx->pc = 0x2D42E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42DCu;
            // 0x2d42e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42E4u; }
        if (ctx->pc != 0x2D42E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42E4u; }
        if (ctx->pc != 0x2D42E4u) { return; }
    }
    ctx->pc = 0x2D42E4u;
label_2d42e4:
    // 0x2d42e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d42e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d42e8:
    // 0x2d42e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d42e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d42ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D42ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D42F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42ECu;
            // 0x2d42f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D42F4u;
}
