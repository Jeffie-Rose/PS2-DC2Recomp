#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadedBGFile__FPcPi
// Address: 0x262b10 - 0x262b8c
void CheckLoadedBGFile__FPcPi_0x262b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadedBGFile__FPcPi_0x262b10");
#endif

    switch (ctx->pc) {
        case 0x262b30u: goto label_262b30;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b44u: goto label_262b44;
        default: break;
    }

    ctx->pc = 0x262b10u;

    // 0x262b10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x262b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x262b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x262b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x262b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b28: 0xc0521f0  jal         func_1487C0
    ctx->pc = 0x262B28u;
    SET_GPR_U32(ctx, 31, 0x262B30u);
    ctx->pc = 0x262B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262B28u;
            // 0x262b2c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487C0u;
    if (runtime->hasFunction(0x1487C0u)) {
        auto targetFn = runtime->lookupFunction(0x1487C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B30u; }
        if (ctx->pc != 0x262B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCurrentDir__FPc_0x1487c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B30u; }
        if (ctx->pc != 0x262B30u) { return; }
    }
    ctx->pc = 0x262B30u;
label_262b30:
    // 0x262b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x262b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b34: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x262B34u;
    SET_GPR_U32(ctx, 31, 0x262B3Cu);
    ctx->pc = 0x262B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262B34u;
            // 0x262b38: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B3Cu; }
        if (ctx->pc != 0x262B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B3Cu; }
        if (ctx->pc != 0x262B3Cu) { return; }
    }
    ctx->pc = 0x262B3Cu;
label_262b3c:
    // 0x262b3c: 0xc0522fc  jal         func_148BF0
    ctx->pc = 0x262B3Cu;
    SET_GPR_U32(ctx, 31, 0x262B44u);
    ctx->pc = 0x262B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262B3Cu;
            // 0x262b40: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148BF0u;
    if (runtime->hasFunction(0x148BF0u)) {
        auto targetFn = runtime->lookupFunction(0x148BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B44u; }
        if (ctx->pc != 0x262B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__FPc_0x148bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B44u; }
        if (ctx->pc != 0x262B44u) { return; }
    }
    ctx->pc = 0x262B44u;
label_262b44:
    // 0x262b44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262B44u;
    {
        const bool branch_taken_0x262b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262b44) {
            ctx->pc = 0x262B54u;
            goto label_262b54;
        }
    }
    ctx->pc = 0x262B4Cu;
    // 0x262b4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x262B4Cu;
    {
        const bool branch_taken_0x262b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B4Cu;
            // 0x262b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b4c) {
            ctx->pc = 0x262B78u;
            goto label_262b78;
        }
    }
    ctx->pc = 0x262B54u;
label_262b54:
    // 0x262b54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262b58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262B58u;
    {
        const bool branch_taken_0x262b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262b58) {
            ctx->pc = 0x262B68u;
            goto label_262b68;
        }
    }
    ctx->pc = 0x262B60u;
    // 0x262b60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x262B60u;
    {
        const bool branch_taken_0x262b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B60u;
            // 0x262b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b60) {
            ctx->pc = 0x262B78u;
            goto label_262b78;
        }
    }
    ctx->pc = 0x262B68u;
label_262b68:
    // 0x262b68: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x262b6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x262b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x262b70: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x262b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x262b74: 0x0  nop
    ctx->pc = 0x262b74u;
    // NOP
label_262b78:
    // 0x262b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262b84: 0x3e00008  jr          $ra
    ctx->pc = 0x262B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262B84u;
            // 0x262b88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262B8Cu;
}
