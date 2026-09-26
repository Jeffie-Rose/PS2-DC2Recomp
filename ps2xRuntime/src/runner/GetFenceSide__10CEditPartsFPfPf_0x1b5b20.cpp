#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFenceSide__10CEditPartsFPfPf
// Address: 0x1b5b20 - 0x1b5bd0
void GetFenceSide__10CEditPartsFPfPf_0x1b5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFenceSide__10CEditPartsFPfPf_0x1b5b20");
#endif

    switch (ctx->pc) {
        case 0x1b5b6cu: goto label_1b5b6c;
        case 0x1b5ba4u: goto label_1b5ba4;
        case 0x1b5bb4u: goto label_1b5bb4;
        default: break;
    }

    ctx->pc = 0x1b5b20u;

    // 0x1b5b20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b5b24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b5b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b5b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5b30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b5b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5b38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b3c: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x1b5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x1b5b40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5B40u;
    {
        const bool branch_taken_0x1b5b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B40u;
            // 0x1b5b44: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b40) {
            ctx->pc = 0x1B5B50u;
            goto label_1b5b50;
        }
    }
    ctx->pc = 0x1B5B48u;
    // 0x1b5b48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B5B48u;
    {
        const bool branch_taken_0x1b5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B48u;
            // 0x1b5b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b48) {
            ctx->pc = 0x1B5BB8u;
            goto label_1b5bb8;
        }
    }
    ctx->pc = 0x1B5B50u;
label_1b5b50:
    // 0x1b5b50: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1b5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b5b54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5B54u;
    {
        const bool branch_taken_0x1b5b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B54u;
            // 0x1b5b58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b54) {
            ctx->pc = 0x1B5B64u;
            goto label_1b5b64;
        }
    }
    ctx->pc = 0x1B5B5Cu;
    // 0x1b5b5c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5B5Cu;
    {
        const bool branch_taken_0x1b5b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B5Cu;
            // 0x1b5b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b5c) {
            ctx->pc = 0x1B5BB8u;
            goto label_1b5bb8;
        }
    }
    ctx->pc = 0x1B5B64u;
label_1b5b64:
    // 0x1b5b64: 0xc059cc0  jal         func_167300
    ctx->pc = 0x1B5B64u;
    SET_GPR_U32(ctx, 31, 0x1B5B6Cu);
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B6Cu; }
        if (ctx->pc != 0x1B5B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5B6Cu; }
        if (ctx->pc != 0x1B5B6Cu) { return; }
    }
    ctx->pc = 0x1B5B6Cu;
label_1b5b6c:
    // 0x1b5b6c: 0x8e270324  lw          $a3, 0x324($s1)
    ctx->pc = 0x1b5b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b5b70: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1b5b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5b74: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1b5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b5b78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b80: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b5b84: 0x78e700a0  lq          $a3, 0xA0($a3)
    ctx->pc = 0x1b5b84u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x1b5b88: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1b5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x1b5b8c: 0x8e270324  lw          $a3, 0x324($s1)
    ctx->pc = 0x1b5b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b5b90: 0x78e700b0  lq          $a3, 0xB0($a3)
    ctx->pc = 0x1b5b90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x1b5b94: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1b5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1b5b98: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1b5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1b5b9c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1B5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5BA4u);
    ctx->pc = 0x1B5BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B9Cu;
            // 0x1b5ba0: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BA4u; }
        if (ctx->pc != 0x1B5BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BA4u; }
        if (ctx->pc != 0x1B5BA4u) { return; }
    }
    ctx->pc = 0x1B5BA4u;
label_1b5ba4:
    // 0x1b5ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ba8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b5bac: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1B5BACu;
    SET_GPR_U32(ctx, 31, 0x1B5BB4u);
    ctx->pc = 0x1B5BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BACu;
            // 0x1b5bb0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BB4u; }
        if (ctx->pc != 0x1B5BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BB4u; }
        if (ctx->pc != 0x1B5BB4u) { return; }
    }
    ctx->pc = 0x1B5BB4u;
label_1b5bb4:
    // 0x1b5bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5bb8:
    // 0x1b5bb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BC8u;
            // 0x1b5bcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5BD0u;
}
