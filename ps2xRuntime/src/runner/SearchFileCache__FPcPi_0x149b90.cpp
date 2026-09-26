#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchFileCache__FPcPi
// Address: 0x149b90 - 0x149bec
void SearchFileCache__FPcPi_0x149b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFileCache__FPcPi_0x149b90");
#endif

    switch (ctx->pc) {
        case 0x149bb4u: goto label_149bb4;
        default: break;
    }

    ctx->pc = 0x149b90u;

    // 0x149b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149b9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ba0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149BA0u;
    {
        const bool branch_taken_0x149ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ba0) {
            ctx->pc = 0x149BACu;
            goto label_149bac;
        }
    }
    ctx->pc = 0x149BA8u;
    // 0x149ba8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x149ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_149bac:
    // 0x149bac: 0xc0526c0  jal         func_149B00
    ctx->pc = 0x149BACu;
    SET_GPR_U32(ctx, 31, 0x149BB4u);
    ctx->pc = 0x149B00u;
    if (runtime->hasFunction(0x149B00u)) {
        auto targetFn = runtime->lookupFunction(0x149B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BB4u; }
        if (ctx->pc != 0x149BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFileCache__FPc_0x149b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BB4u; }
        if (ctx->pc != 0x149BB4u) { return; }
    }
    ctx->pc = 0x149BB4u;
label_149bb4:
    // 0x149bb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BB4u;
    {
        const bool branch_taken_0x149bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149bb4) {
            ctx->pc = 0x149BC4u;
            goto label_149bc4;
        }
    }
    ctx->pc = 0x149BBCu;
    // 0x149bbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149BBCu;
    {
        const bool branch_taken_0x149bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149BBCu;
            // 0x149bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bbc) {
            ctx->pc = 0x149BDCu;
            goto label_149bdc;
        }
    }
    ctx->pc = 0x149BC4u;
label_149bc4:
    // 0x149bc4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BC4u;
    {
        const bool branch_taken_0x149bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149bc4) {
            ctx->pc = 0x149BD4u;
            goto label_149bd4;
        }
    }
    ctx->pc = 0x149BCCu;
    // 0x149bcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x149bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x149bd0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x149bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_149bd4:
    // 0x149bd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149bd8: 0x0  nop
    ctx->pc = 0x149bd8u;
    // NOP
label_149bdc:
    // 0x149bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149be4: 0x3e00008  jr          $ra
    ctx->pc = 0x149BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149BE4u;
            // 0x149be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149BECu;
}
