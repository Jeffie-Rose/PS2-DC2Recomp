#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddHash__17mgCTextureManagerFP10mgCTexture
// Address: 0x12ccc0 - 0x12cd98
void AddHash__17mgCTextureManagerFP10mgCTexture_0x12ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddHash__17mgCTextureManagerFP10mgCTexture_0x12ccc0");
#endif

    switch (ctx->pc) {
        case 0x12cd30u: goto label_12cd30;
        case 0x12cd54u: goto label_12cd54;
        default: break;
    }

    ctx->pc = 0x12ccc0u;

    // 0x12ccc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ccc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ccc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ccd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ccd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccd4: 0x8c8601d4  lw          $a2, 0x1D4($a0)
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x12ccd8: 0x8c8301d0  lw          $v1, 0x1D0($a0)
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x12ccdc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x12ccdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12cce0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CCE0u;
    {
        const bool branch_taken_0x12cce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cce0) {
            ctx->pc = 0x12CCF4u;
            goto label_12ccf4;
        }
    }
    ctx->pc = 0x12CCE8u;
    // 0x12cce8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12cce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CCECu;
    {
        const bool branch_taken_0x12ccec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ccec) {
            ctx->pc = 0x12CD10u;
            goto label_12cd10;
        }
    }
    ctx->pc = 0x12CCF4u;
label_12ccf4:
    // 0x12ccf4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12ccf8: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x12ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x12ccfc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12cd00: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x12cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x12cd04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12cd08: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x12cd08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12cd0c: 0x0  nop
    ctx->pc = 0x12cd0cu;
    // NOP
label_12cd10:
    // 0x12cd10: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12CD10u;
    {
        const bool branch_taken_0x12cd10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd10) {
            ctx->pc = 0x12CD80u;
            goto label_12cd80;
        }
    }
    ctx->pc = 0x12CD18u;
    // 0x12cd18: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x12cd1c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x12cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x12cd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd24: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12cd28: 0xc04b31c  jal         func_12CC70
    ctx->pc = 0x12CD28u;
    SET_GPR_U32(ctx, 31, 0x12CD30u);
    ctx->pc = 0x12CC70u;
    if (runtime->hasFunction(0x12CC70u)) {
        auto targetFn = runtime->lookupFunction(0x12CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD30u; }
        if (ctx->pc != 0x12CD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hash__17mgCTextureManagerFPc_0x12cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD30u; }
        if (ctx->pc != 0x12CD30u) { return; }
    }
    ctx->pc = 0x12CD30u;
label_12cd30:
    // 0x12cd30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12cd34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12cd38: 0x24640024  addiu       $a0, $v1, 0x24
    ctx->pc = 0x12cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x12cd3c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x12cd40: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12CD40u;
    {
        const bool branch_taken_0x12cd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cd40) {
            ctx->pc = 0x12CD74u;
            goto label_12cd74;
        }
    }
    ctx->pc = 0x12CD48u;
    // 0x12cd48: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x12cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x12cd4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12CD4Cu;
    {
        const bool branch_taken_0x12cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd4c) {
            ctx->pc = 0x12CD80u;
            goto label_12cd80;
        }
    }
    ctx->pc = 0x12CD54u;
label_12cd54:
    // 0x12cd54: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12cd58: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CD58u;
    {
        const bool branch_taken_0x12cd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cd58) {
            ctx->pc = 0x12CD6Cu;
            goto label_12cd6c;
        }
    }
    ctx->pc = 0x12CD60u;
    // 0x12cd60: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x12cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x12cd64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CD64u;
    {
        const bool branch_taken_0x12cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd64) {
            ctx->pc = 0x12CD80u;
            goto label_12cd80;
        }
    }
    ctx->pc = 0x12CD6Cu;
label_12cd6c:
    // 0x12cd6c: 0x0  nop
    ctx->pc = 0x12cd6cu;
    // NOP
    // 0x12cd70: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12cd70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12cd74:
    // 0x12cd74: 0x0  nop
    ctx->pc = 0x12cd74u;
    // NOP
    // 0x12cd78: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x12CD78u;
    {
        const bool branch_taken_0x12cd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cd78) {
            ctx->pc = 0x12CD54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cd54;
        }
    }
    ctx->pc = 0x12CD80u;
label_12cd80:
    // 0x12cd80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12cd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cd8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12cd8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cd90: 0x3e00008  jr          $ra
    ctx->pc = 0x12CD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CD98u;
}
