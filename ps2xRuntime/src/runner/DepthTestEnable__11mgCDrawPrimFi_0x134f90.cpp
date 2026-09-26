#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DepthTestEnable__11mgCDrawPrimFi
// Address: 0x134f90 - 0x134fe8
void DepthTestEnable__11mgCDrawPrimFi_0x134f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DepthTestEnable__11mgCDrawPrimFi_0x134f90");
#endif

    switch (ctx->pc) {
        case 0x134fdcu: goto label_134fdc;
        default: break;
    }

    ctx->pc = 0x134f90u;

    // 0x134f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134f94: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x134f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x134f98: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x134F98u;
    {
        const bool branch_taken_0x134f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x134F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F98u;
            // 0x134f9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f98) {
            ctx->pc = 0x134FD4u;
            goto label_134fd4;
        }
    }
    ctx->pc = 0x134FA0u;
    // 0x134fa0: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x134fa0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x134fa4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x134fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x134fa8: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x134fa8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x134fac: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x134facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x134fb0: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x134fb0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x134fb4: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x134fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x134fb8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x134fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x134fbc: 0xa1050002  sb          $a1, 0x2($t0)
    ctx->pc = 0x134fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x134fc0: 0x91050002  lbu         $a1, 0x2($t0)
    ctx->pc = 0x134fc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x134fc4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x134fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x134fc8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x134fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x134fcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134FCCu;
    {
        const bool branch_taken_0x134fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134FCCu;
            // 0x134fd0: 0xa1030002  sb          $v1, 0x2($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fcc) {
            ctx->pc = 0x134FDCu;
            goto label_134fdc;
        }
    }
    ctx->pc = 0x134FD4u;
label_134fd4:
    // 0x134fd4: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x134FD4u;
    SET_GPR_U32(ctx, 31, 0x134FDCu);
    ctx->pc = 0x134FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134FD4u;
            // 0x134fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FDCu; }
        if (ctx->pc != 0x134FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FDCu; }
        if (ctx->pc != 0x134FDCu) { return; }
    }
    ctx->pc = 0x134FDCu;
label_134fdc:
    // 0x134fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x134FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134FE0u;
            // 0x134fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134FE8u;
}
