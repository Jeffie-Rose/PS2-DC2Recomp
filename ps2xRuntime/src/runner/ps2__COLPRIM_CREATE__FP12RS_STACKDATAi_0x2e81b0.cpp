#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_CREATE__FP12RS_STACKDATAi
// Address: 0x2e81b0 - 0x2e825c
void ps2__COLPRIM_CREATE__FP12RS_STACKDATAi_0x2e81b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_CREATE__FP12RS_STACKDATAi_0x2e81b0");
#endif

    switch (ctx->pc) {
        case 0x2e81e0u: goto label_2e81e0;
        case 0x2e81ecu: goto label_2e81ec;
        case 0x2e8214u: goto label_2e8214;
        case 0x2e822cu: goto label_2e822c;
        case 0x2e8240u: goto label_2e8240;
        default: break;
    }

    ctx->pc = 0x2e81b0u;

    // 0x2e81b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e81b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e81b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e81b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e81b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e81bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e81bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e81c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e81c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e81c4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e81c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e81c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81cc: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e81ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e81d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E81D0u;
    {
        const bool branch_taken_0x2e81d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E81D0u;
            // 0x2e81d4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81d0) {
            ctx->pc = 0x2E81E0u;
            goto label_2e81e0;
        }
    }
    ctx->pc = 0x2E81D8u;
    // 0x2e81d8: 0xc06e9a0  jal         func_1BA680
    ctx->pc = 0x2E81D8u;
    SET_GPR_U32(ctx, 31, 0x2E81E0u);
    ctx->pc = 0x2E81DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E81D8u;
            // 0x2e81dc: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81E0u; }
        if (ctx->pc != 0x2E81E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81E0u; }
        if (ctx->pc != 0x2E81E0u) { return; }
    }
    ctx->pc = 0x2E81E0u;
label_2e81e0:
    // 0x2e81e0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2e81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2e81e4: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2E81E4u;
    SET_GPR_U32(ctx, 31, 0x2E81ECu);
    ctx->pc = 0x2E81E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E81E4u;
            // 0x2e81e8: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81ECu; }
        if (ctx->pc != 0x2E81ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E81ECu; }
        if (ctx->pc != 0x2E81ECu) { return; }
    }
    ctx->pc = 0x2E81ECu;
label_2e81ec:
    // 0x2e81ec: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e81f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E81F0u;
    {
        const bool branch_taken_0x2e81f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E81F0u;
            // 0x2e81f4: 0xac620134  sw          $v0, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81f0) {
            ctx->pc = 0x2E8200u;
            goto label_2e8200;
        }
    }
    ctx->pc = 0x2E81F8u;
    // 0x2e81f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E81F8u;
    {
        const bool branch_taken_0x2e81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E81F8u;
            // 0x2e81fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81f8) {
            ctx->pc = 0x2E8244u;
            goto label_2e8244;
        }
    }
    ctx->pc = 0x2E8200u;
label_2e8200:
    // 0x2e8200: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8208: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e820c: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E820Cu;
    SET_GPR_U32(ctx, 31, 0x2E8214u);
    ctx->pc = 0x2E8210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E820Cu;
            // 0x2e8210: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8214u; }
        if (ctx->pc != 0x2E8214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8214u; }
        if (ctx->pc != 0x2E8214u) { return; }
    }
    ctx->pc = 0x2E8214u;
label_2e8214:
    // 0x2e8214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e8214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8218: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2e8218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e821c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E821Cu;
    {
        const bool branch_taken_0x2e821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E821Cu;
            // 0x2e8220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e821c) {
            ctx->pc = 0x2E8230u;
            goto label_2e8230;
        }
    }
    ctx->pc = 0x2E8224u;
    // 0x2e8224: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8224u;
    SET_GPR_U32(ctx, 31, 0x2E822Cu);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E822Cu; }
        if (ctx->pc != 0x2E822Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E822Cu; }
        if (ctx->pc != 0x2E822Cu) { return; }
    }
    ctx->pc = 0x2E822Cu;
label_2e822c:
    // 0x2e822c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e822cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8230:
    // 0x2e8230: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8234: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x2e8234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8238: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2E8238u;
    SET_GPR_U32(ctx, 31, 0x2E8240u);
    ctx->pc = 0x2E823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8238u;
            // 0x2e823c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8240u; }
        if (ctx->pc != 0x2E8240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8240u; }
        if (ctx->pc != 0x2E8240u) { return; }
    }
    ctx->pc = 0x2E8240u;
label_2e8240:
    // 0x2e8240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8244:
    // 0x2e8244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e8244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e824c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e824cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8254: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8254u;
            // 0x2e8258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E825Cu;
}
