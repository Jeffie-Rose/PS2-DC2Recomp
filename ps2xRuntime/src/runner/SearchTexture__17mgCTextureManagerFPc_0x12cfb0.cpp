#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchTexture__17mgCTextureManagerFPc
// Address: 0x12cfb0 - 0x12d048
void SearchTexture__17mgCTextureManagerFPc_0x12cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchTexture__17mgCTextureManagerFPc_0x12cfb0");
#endif

    switch (ctx->pc) {
        case 0x12d010u: goto label_12d010;
        case 0x12d02cu: goto label_12d02c;
        default: break;
    }

    ctx->pc = 0x12cfb0u;

    // 0x12cfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12cfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12cfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12cfc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfc4: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x12cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x12cfc8: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x12cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x12cfcc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x12cfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12cfd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CFD0u;
    {
        const bool branch_taken_0x12cfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cfd0) {
            ctx->pc = 0x12CFE4u;
            goto label_12cfe4;
        }
    }
    ctx->pc = 0x12CFD8u;
    // 0x12cfd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12cfd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CFDCu;
    {
        const bool branch_taken_0x12cfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cfdc) {
            ctx->pc = 0x12D000u;
            goto label_12d000;
        }
    }
    ctx->pc = 0x12CFE4u;
label_12cfe4:
    // 0x12cfe4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x12cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12cfe8: 0xac8201c4  sw          $v0, 0x1C4($a0)
    ctx->pc = 0x12cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 2));
    // 0x12cfec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12cff0: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x12cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x12cff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cff8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cffc: 0x0  nop
    ctx->pc = 0x12cffcu;
    // NOP
label_12d000:
    // 0x12d000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d004: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12d004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d008: 0xc04b3d0  jal         func_12CF40
    ctx->pc = 0x12D008u;
    SET_GPR_U32(ctx, 31, 0x12D010u);
    ctx->pc = 0x12CF40u;
    if (runtime->hasFunction(0x12CF40u)) {
        auto targetFn = runtime->lookupFunction(0x12CF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D010u; }
        if (ctx->pc != 0x12D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchTextureName__17mgCTextureManagerFPci_0x12cf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D010u; }
        if (ctx->pc != 0x12D010u) { return; }
    }
    ctx->pc = 0x12D010u;
label_12d010:
    // 0x12d010: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D010u;
    {
        const bool branch_taken_0x12d010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d010) {
            ctx->pc = 0x12D02Cu;
            goto label_12d02c;
        }
    }
    ctx->pc = 0x12D018u;
    // 0x12d018: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12d01c: 0x248424c0  addiu       $a0, $a0, 0x24C0
    ctx->pc = 0x12d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9408));
    // 0x12d020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d024: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x12D024u;
    SET_GPR_U32(ctx, 31, 0x12D02Cu);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D02Cu; }
        if (ctx->pc != 0x12D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D02Cu; }
        if (ctx->pc != 0x12D02Cu) { return; }
    }
    ctx->pc = 0x12D02Cu;
label_12d02c:
    // 0x12d02c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12d02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12d030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d03c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12d03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12d040: 0x3e00008  jr          $ra
    ctx->pc = 0x12D040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D048u;
}
