#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamStandBy__6CSoundFi
// Address: 0x18b0f0 - 0x18b194
void StreamStandBy__6CSoundFi_0x18b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamStandBy__6CSoundFi_0x18b0f0");
#endif

    switch (ctx->pc) {
        case 0x18b10cu: goto label_18b10c;
        case 0x18b138u: goto label_18b138;
        case 0x18b144u: goto label_18b144;
        case 0x18b150u: goto label_18b150;
        case 0x18b160u: goto label_18b160;
        case 0x18b16cu: goto label_18b16c;
        case 0x18b178u: goto label_18b178;
        case 0x18b184u: goto label_18b184;
        default: break;
    }

    ctx->pc = 0x18b0f0u;

    // 0x18b0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b0f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b0fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b100: 0x360480d0  ori         $a0, $s0, 0x80D0
    ctx->pc = 0x18b100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32976);
    // 0x18b104: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B104u;
    SET_GPR_U32(ctx, 31, 0x18B10Cu);
    ctx->pc = 0x18B108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B104u;
            // 0x18b108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B10Cu; }
        if (ctx->pc != 0x18B10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B10Cu; }
        if (ctx->pc != 0x18B10Cu) { return; }
    }
    ctx->pc = 0x18B10Cu;
label_18b10c:
    // 0x18b10c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x18b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b110: 0x27838a78  addiu       $v1, $gp, -0x7588
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937208));
    // 0x18b114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18b118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18b11c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18b124: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18B124u;
    {
        const bool branch_taken_0x18b124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B124u;
            // 0x18b128: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b124) {
            ctx->pc = 0x18B158u;
            goto label_18b158;
        }
    }
    ctx->pc = 0x18B12Cu;
    // 0x18b12c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18b130: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18B130u;
    SET_GPR_U32(ctx, 31, 0x18B138u);
    ctx->pc = 0x18B134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B130u;
            // 0x18b134: 0x24844a08  addiu       $a0, $a0, 0x4A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B138u; }
        if (ctx->pc != 0x18B138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B138u; }
        if (ctx->pc != 0x18B138u) { return; }
    }
    ctx->pc = 0x18B138u;
label_18b138:
    // 0x18b138: 0x36048000  ori         $a0, $s0, 0x8000
    ctx->pc = 0x18b138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x18b13c: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B13Cu;
    SET_GPR_U32(ctx, 31, 0x18B144u);
    ctx->pc = 0x18B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B13Cu;
            // 0x18b140: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B144u; }
        if (ctx->pc != 0x18B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B144u; }
        if (ctx->pc != 0x18B144u) { return; }
    }
    ctx->pc = 0x18B144u;
label_18b144:
    // 0x18b144: 0x360480c0  ori         $a0, $s0, 0x80C0
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32960);
    // 0x18b148: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B148u;
    SET_GPR_U32(ctx, 31, 0x18B150u);
    ctx->pc = 0x18B14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B148u;
            // 0x18b14c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B150u; }
        if (ctx->pc != 0x18B150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B150u; }
        if (ctx->pc != 0x18B150u) { return; }
    }
    ctx->pc = 0x18B150u;
label_18b150:
    // 0x18b150: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B150u;
    {
        const bool branch_taken_0x18b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B150u;
            // 0x18b154: 0x36040040  ori         $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b150) {
            ctx->pc = 0x18B17Cu;
            goto label_18b17c;
        }
    }
    ctx->pc = 0x18B158u;
label_18b158:
    // 0x18b158: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18B158u;
    SET_GPR_U32(ctx, 31, 0x18B160u);
    ctx->pc = 0x18B15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B158u;
            // 0x18b15c: 0x24844a10  addiu       $a0, $a0, 0x4A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B160u; }
        if (ctx->pc != 0x18B160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B160u; }
        if (ctx->pc != 0x18B160u) { return; }
    }
    ctx->pc = 0x18B160u;
label_18b160:
    // 0x18b160: 0x36048000  ori         $a0, $s0, 0x8000
    ctx->pc = 0x18b160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x18b164: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B164u;
    SET_GPR_U32(ctx, 31, 0x18B16Cu);
    ctx->pc = 0x18B168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B164u;
            // 0x18b168: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B16Cu; }
        if (ctx->pc != 0x18B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B16Cu; }
        if (ctx->pc != 0x18B16Cu) { return; }
    }
    ctx->pc = 0x18B16Cu;
label_18b16c:
    // 0x18b16c: 0x360480c0  ori         $a0, $s0, 0x80C0
    ctx->pc = 0x18b16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32960);
    // 0x18b170: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B170u;
    SET_GPR_U32(ctx, 31, 0x18B178u);
    ctx->pc = 0x18B174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B170u;
            // 0x18b174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B178u; }
        if (ctx->pc != 0x18B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B178u; }
        if (ctx->pc != 0x18B178u) { return; }
    }
    ctx->pc = 0x18B178u;
label_18b178:
    // 0x18b178: 0x36040040  ori         $a0, $s0, 0x40
    ctx->pc = 0x18b178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
label_18b17c:
    // 0x18b17c: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18B17Cu;
    SET_GPR_U32(ctx, 31, 0x18B184u);
    ctx->pc = 0x18B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B17Cu;
            // 0x18b180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B184u; }
        if (ctx->pc != 0x18B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B184u; }
        if (ctx->pc != 0x18B184u) { return; }
    }
    ctx->pc = 0x18B184u;
label_18b184:
    // 0x18b184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b18c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B18Cu;
            // 0x18b190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B194u;
}
