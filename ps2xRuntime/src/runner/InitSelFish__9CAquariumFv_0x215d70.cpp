#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSelFish__9CAquariumFv
// Address: 0x215d70 - 0x215e00
void InitSelFish__9CAquariumFv_0x215d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSelFish__9CAquariumFv_0x215d70");
#endif

    switch (ctx->pc) {
        case 0x215d90u: goto label_215d90;
        case 0x215dd4u: goto label_215dd4;
        default: break;
    }

    ctx->pc = 0x215d70u;

    // 0x215d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x215d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215d7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x215d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d80: 0xa48202d8  sh          $v0, 0x2D8($a0)
    ctx->pc = 0x215d80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 728), (uint16_t)GPR_U32(ctx, 2));
    // 0x215d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215d8c: 0xa0820116  sb          $v0, 0x116($a0)
    ctx->pc = 0x215d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 2));
label_215d90:
    // 0x215d90: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x215d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x215d94: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x215d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x215d98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x215D98u;
    {
        const bool branch_taken_0x215d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d98) {
            ctx->pc = 0x215DDCu;
            goto label_215ddc;
        }
    }
    ctx->pc = 0x215DA0u;
    // 0x215da0: 0xa48302d8  sh          $v1, 0x2D8($a0)
    ctx->pc = 0x215da0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 728), (uint16_t)GPR_U32(ctx, 3));
    // 0x215da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215da8: 0x8c83010c  lw          $v1, 0x10C($a0)
    ctx->pc = 0x215da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x215dac: 0xc4611af0  lwc1        $f1, 0x1AF0($v1)
    ctx->pc = 0x215dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215db0: 0xc4601af4  lwc1        $f0, 0x1AF4($v1)
    ctx->pc = 0x215db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215db4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x215db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x215db8: 0xe4810120  swc1        $f1, 0x120($a0)
    ctx->pc = 0x215db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x215dbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215dc0: 0xe4810118  swc1        $f1, 0x118($a0)
    ctx->pc = 0x215dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x215dc4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x215dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x215dc8: 0xe480011c  swc1        $f0, 0x11C($a0)
    ctx->pc = 0x215dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
    // 0x215dcc: 0xc0857c8  jal         func_215F20
    ctx->pc = 0x215DCCu;
    SET_GPR_U32(ctx, 31, 0x215DD4u);
    ctx->pc = 0x215DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215DCCu;
            // 0x215dd0: 0xa0820115  sb          $v0, 0x115($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 277), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215F20u;
    if (runtime->hasFunction(0x215F20u)) {
        auto targetFn = runtime->lookupFunction(0x215F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DD4u; }
        if (ctx->pc != 0x215DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelFishSetCursor__9CAquariumFv_0x215f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215DD4u; }
        if (ctx->pc != 0x215DD4u) { return; }
    }
    ctx->pc = 0x215DD4u;
label_215dd4:
    // 0x215dd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x215DD4u;
    {
        const bool branch_taken_0x215dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215DD4u;
            // 0x215dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215dd4) {
            ctx->pc = 0x215DF4u;
            goto label_215df4;
        }
    }
    ctx->pc = 0x215DDCu;
label_215ddc:
    // 0x215ddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x215ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x215de0: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x215de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x215de4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x215DE4u;
    {
        const bool branch_taken_0x215de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215DE4u;
            // 0x215de8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215de4) {
            ctx->pc = 0x215D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215d90;
        }
    }
    ctx->pc = 0x215DECu;
    // 0x215dec: 0xa0800116  sb          $zero, 0x116($a0)
    ctx->pc = 0x215decu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 0));
    // 0x215df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215df4:
    // 0x215df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215df8: 0x3e00008  jr          $ra
    ctx->pc = 0x215DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215DF8u;
            // 0x215dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215E00u;
}
