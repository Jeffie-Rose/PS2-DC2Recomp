#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: End__13mgCMDTBuilderFv
// Address: 0x133bb0 - 0x133c04
void End__13mgCMDTBuilderFv_0x133bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__13mgCMDTBuilderFv_0x133bb0");
#endif

    switch (ctx->pc) {
        case 0x133becu: goto label_133bec;
        default: break;
    }

    ctx->pc = 0x133bb0u;

    // 0x133bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133bc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x133bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133bc8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x133bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133bcc: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x133bccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    // 0x133bd0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133BD0u;
    {
        const bool branch_taken_0x133bd0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x133bd0) {
            ctx->pc = 0x133BE0u;
            goto label_133be0;
        }
    }
    ctx->pc = 0x133BD8u;
    // 0x133bd8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x133bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x133bdc: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x133bdcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_133be0:
    // 0x133be0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133be4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x133BE4u;
    SET_GPR_U32(ctx, 31, 0x133BECu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133BECu; }
        if (ctx->pc != 0x133BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133BECu; }
        if (ctx->pc != 0x133BECu) { return; }
    }
    ctx->pc = 0x133BECu;
label_133bec:
    // 0x133bec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x133becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133bf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x133BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133C04u;
}
