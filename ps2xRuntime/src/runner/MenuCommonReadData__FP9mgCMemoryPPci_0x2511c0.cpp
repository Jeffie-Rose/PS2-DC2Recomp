#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCommonReadData__FP9mgCMemoryPPci
// Address: 0x2511c0 - 0x251284
void MenuCommonReadData__FP9mgCMemoryPPci_0x2511c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCommonReadData__FP9mgCMemoryPPci_0x2511c0");
#endif

    switch (ctx->pc) {
        case 0x2511f0u: goto label_2511f0;
        case 0x2511fcu: goto label_2511fc;
        case 0x251204u: goto label_251204;
        case 0x25121cu: goto label_25121c;
        case 0x25123cu: goto label_25123c;
        case 0x25124cu: goto label_25124c;
        default: break;
    }

    ctx->pc = 0x2511c0u;

    // 0x2511c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2511c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2511c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2511c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2511c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2511c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2511cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2511ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2511d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2511d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2511d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2511d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2511d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2511dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2511e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2511e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2511e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2511e8: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2511E8u;
    SET_GPR_U32(ctx, 31, 0x2511F0u);
    ctx->pc = 0x2511ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2511E8u;
            // 0x2511ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511F0u; }
        if (ctx->pc != 0x2511F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511F0u; }
        if (ctx->pc != 0x2511F0u) { return; }
    }
    ctx->pc = 0x2511F0u;
label_2511f0:
    // 0x2511f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2511f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511f4: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2511F4u;
    SET_GPR_U32(ctx, 31, 0x2511FCu);
    ctx->pc = 0x2511F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2511F4u;
            // 0x2511f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511FCu; }
        if (ctx->pc != 0x2511FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511FCu; }
        if (ctx->pc != 0x2511FCu) { return; }
    }
    ctx->pc = 0x2511FCu;
label_2511fc:
    // 0x2511fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2511FCu;
    {
        const bool branch_taken_0x2511fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2511FCu;
            // 0x251200: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511fc) {
            ctx->pc = 0x25124Cu;
            goto label_25124c;
        }
    }
    ctx->pc = 0x251204u;
label_251204:
    // 0x251204: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x251204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x251208: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x251208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25120c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x25120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x251210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x251210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x251214: 0xc094440  jal         func_251100
    ctx->pc = 0x251214u;
    SET_GPR_U32(ctx, 31, 0x25121Cu);
    ctx->pc = 0x251218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251214u;
            // 0x251218: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25121Cu; }
        if (ctx->pc != 0x25121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25121Cu; }
        if (ctx->pc != 0x25121Cu) { return; }
    }
    ctx->pc = 0x25121Cu;
label_25121c:
    // 0x25121c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25121cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251220: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x251220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x251224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251224u;
    {
        const bool branch_taken_0x251224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251224u;
            // 0x251228: 0x122902  srl         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251224) {
            ctx->pc = 0x251234u;
            goto label_251234;
        }
    }
    ctx->pc = 0x25122Cu;
    // 0x25122c: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x25122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x251230: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x251230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_251234:
    // 0x251234: 0xc04e748  jal         func_139D20
    ctx->pc = 0x251234u;
    SET_GPR_U32(ctx, 31, 0x25123Cu);
    ctx->pc = 0x251238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251234u;
            // 0x251238: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25123Cu; }
        if (ctx->pc != 0x25123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25123Cu; }
        if (ctx->pc != 0x25123Cu) { return; }
    }
    ctx->pc = 0x25123Cu;
label_25123c:
    // 0x25123c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25123cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251240: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x251240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x251244: 0xc04e780  jal         func_139E00
    ctx->pc = 0x251244u;
    SET_GPR_U32(ctx, 31, 0x25124Cu);
    ctx->pc = 0x251248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251244u;
            // 0x251248: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25124Cu; }
        if (ctx->pc != 0x25124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25124Cu; }
        if (ctx->pc != 0x25124Cu) { return; }
    }
    ctx->pc = 0x25124Cu;
label_25124c:
    // 0x25124c: 0x0  nop
    ctx->pc = 0x25124cu;
    // NOP
    // 0x251250: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x251250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x251254: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x251254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251258: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x251258u;
    {
        const bool branch_taken_0x251258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251258u;
            // 0x25125c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251258) {
            ctx->pc = 0x251204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251204;
        }
    }
    ctx->pc = 0x251260u;
    // 0x251260: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251264: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x251264u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251268: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x251268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25126c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25126cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25127c: 0x3e00008  jr          $ra
    ctx->pc = 0x25127Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25127Cu;
            // 0x251280: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251284u;
}
