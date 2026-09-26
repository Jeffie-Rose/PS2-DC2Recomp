#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapIMG__FP9SPI_STACKi
// Address: 0x165090 - 0x165154
void mapIMG__FP9SPI_STACKi_0x165090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapIMG__FP9SPI_STACKi_0x165090");
#endif

    switch (ctx->pc) {
        case 0x1650d0u: goto label_1650d0;
        case 0x1650ecu: goto label_1650ec;
        case 0x16510cu: goto label_16510c;
        case 0x16511cu: goto label_16511c;
        default: break;
    }

    ctx->pc = 0x165090u;

    // 0x165090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16509c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1650a0: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x1650a4: 0x8f838964  lw          $v1, -0x769C($gp)
    ctx->pc = 0x1650a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936932)));
    // 0x1650a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1650ac: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1650acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1650b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650B0u;
    {
        const bool branch_taken_0x1650b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650B0u;
            // 0x1650b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650b0) {
            ctx->pc = 0x1650C0u;
            goto label_1650c0;
        }
    }
    ctx->pc = 0x1650B8u;
    // 0x1650b8: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650B8u;
    {
        const bool branch_taken_0x1650b8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1650b8) {
            ctx->pc = 0x1650C8u;
            goto label_1650c8;
        }
    }
    ctx->pc = 0x1650C0u;
label_1650c0:
    // 0x1650c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1650C0u;
    {
        const bool branch_taken_0x1650c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650C0u;
            // 0x1650c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650c0) {
            ctx->pc = 0x165144u;
            goto label_165144;
        }
    }
    ctx->pc = 0x1650C8u;
label_1650c8:
    // 0x1650c8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1650C8u;
    SET_GPR_U32(ctx, 31, 0x1650D0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650D0u; }
        if (ctx->pc != 0x1650D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650D0u; }
        if (ctx->pc != 0x1650D0u) { return; }
    }
    ctx->pc = 0x1650D0u;
label_1650d0:
    // 0x1650d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1650d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650d4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650D4u;
    {
        const bool branch_taken_0x1650d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1650D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650D4u;
            // 0x1650d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650d4) {
            ctx->pc = 0x1650E4u;
            goto label_1650e4;
        }
    }
    ctx->pc = 0x1650DCu;
    // 0x1650dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1650DCu;
    {
        const bool branch_taken_0x1650dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650DCu;
            // 0x1650e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650dc) {
            ctx->pc = 0x165140u;
            goto label_165140;
        }
    }
    ctx->pc = 0x1650E4u;
label_1650e4:
    // 0x1650e4: 0xc04a422  jal         func_129088
    ctx->pc = 0x1650E4u;
    SET_GPR_U32(ctx, 31, 0x1650ECu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650ECu; }
        if (ctx->pc != 0x1650ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650ECu; }
        if (ctx->pc != 0x1650ECu) { return; }
    }
    ctx->pc = 0x1650ECu;
label_1650ec:
    // 0x1650ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1650ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1650f0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1650f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1650f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650F4u;
    {
        const bool branch_taken_0x1650f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650F4u;
            // 0x1650f8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650f4) {
            ctx->pc = 0x165104u;
            goto label_165104;
        }
    }
    ctx->pc = 0x1650FCu;
    // 0x1650fc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x165100: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165104:
    // 0x165104: 0xc04e748  jal         func_139D20
    ctx->pc = 0x165104u;
    SET_GPR_U32(ctx, 31, 0x16510Cu);
    ctx->pc = 0x165108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165104u;
            // 0x165108: 0x8f848960  lw          $a0, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16510Cu; }
        if (ctx->pc != 0x16510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16510Cu; }
        if (ctx->pc != 0x16510Cu) { return; }
    }
    ctx->pc = 0x16510Cu;
label_16510c:
    // 0x16510c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16510cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165114: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x165114u;
    SET_GPR_U32(ctx, 31, 0x16511Cu);
    ctx->pc = 0x165118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165114u;
            // 0x165118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16511Cu; }
        if (ctx->pc != 0x16511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16511Cu; }
        if (ctx->pc != 0x16511Cu) { return; }
    }
    ctx->pc = 0x16511Cu;
label_16511c:
    // 0x16511c: 0x8f838964  lw          $v1, -0x769C($gp)
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936932)));
    // 0x165120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165124: 0x8f84895c  lw          $a0, -0x76A4($gp)
    ctx->pc = 0x165124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16512c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165130: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x165130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x165134: 0x8f838964  lw          $v1, -0x769C($gp)
    ctx->pc = 0x165134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936932)));
    // 0x165138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16513c: 0xaf838964  sw          $v1, -0x769C($gp)
    ctx->pc = 0x16513cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), GPR_U32(ctx, 3));
label_165140:
    // 0x165140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165144:
    // 0x165144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16514c: 0x3e00008  jr          $ra
    ctx->pc = 0x16514Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16514Cu;
            // 0x165150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165154u;
}
