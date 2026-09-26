#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ratio
// Address: 0x1281d8 - 0x128298
void _ratio_0x1281d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ratio_0x1281d8");
#endif

    switch (ctx->pc) {
        case 0x1281fcu: goto label_1281fc;
        case 0x12820cu: goto label_12820c;
        case 0x128280u: goto label_128280;
        default: break;
    }

    ctx->pc = 0x1281d8u;

    // 0x1281d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1281d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1281dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1281dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1281e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1281e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1281e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1281e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1281e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1281ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1281f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1281f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1281f4: 0xc049fb6  jal         func_127ED8
    ctx->pc = 0x1281F4u;
    SET_GPR_U32(ctx, 31, 0x1281FCu);
    ctx->pc = 0x1281F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1281F4u;
            // 0x1281f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127ED8u;
    if (runtime->hasFunction(0x127ED8u)) {
        auto targetFn = runtime->lookupFunction(0x127ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281FCu; }
        if (ctx->pc != 0x1281FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x127ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281FCu; }
        if (ctx->pc != 0x1281FCu) { return; }
    }
    ctx->pc = 0x1281FCu;
label_1281fc:
    // 0x1281fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1281fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128204: 0xc049fb6  jal         func_127ED8
    ctx->pc = 0x128204u;
    SET_GPR_U32(ctx, 31, 0x12820Cu);
    ctx->pc = 0x128208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128204u;
            // 0x128208: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127ED8u;
    if (runtime->hasFunction(0x127ED8u)) {
        auto targetFn = runtime->lookupFunction(0x127ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12820Cu; }
        if (ctx->pc != 0x12820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x127ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12820Cu; }
        if (ctx->pc != 0x12820Cu) { return; }
    }
    ctx->pc = 0x12820Cu;
label_12820c:
    // 0x12820c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x12820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x128210: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x128210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128214: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x128214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x128218: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12821c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128220: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x128220u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128224: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x128224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x128228: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x128228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12822c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128230: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128230u;
    {
        const bool branch_taken_0x128230 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128230u;
            // 0x128234: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128230) {
            ctx->pc = 0x128258u;
            goto label_128258;
        }
    }
    ctx->pc = 0x128238u;
    // 0x128238: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x128238u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12823c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128240: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x128244: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x128244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x128248: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x128248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12824c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x12824cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x128250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128250u;
    {
        const bool branch_taken_0x128250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128250u;
            // 0x128254: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128250) {
            ctx->pc = 0x128274u;
            goto label_128274;
        }
    }
    ctx->pc = 0x128258u;
label_128258:
    // 0x128258: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x128258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x12825c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128260: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x128260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x128264: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x128264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x128268: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x128268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12826c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x12826cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x128270: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x128270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_128274:
    // 0x128274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128278: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x128278u;
    SET_GPR_U32(ctx, 31, 0x128280u);
    ctx->pc = 0x12827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128278u;
            // 0x12827c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128280u; }
        if (ctx->pc != 0x128280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128280u; }
        if (ctx->pc != 0x128280u) { return; }
    }
    ctx->pc = 0x128280u;
label_128280:
    // 0x128280: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x128280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128284: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x128284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128288: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x128288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12828c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12828cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128290: 0x3e00008  jr          $ra
    ctx->pc = 0x128290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128290u;
            // 0x128294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128298u;
}
