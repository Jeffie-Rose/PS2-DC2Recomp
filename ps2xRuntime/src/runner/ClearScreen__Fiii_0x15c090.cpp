#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearScreen__Fiii
// Address: 0x15c090 - 0x15c15c
void ClearScreen__Fiii_0x15c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearScreen__Fiii_0x15c090");
#endif

    switch (ctx->pc) {
        case 0x15c0d0u: goto label_15c0d0;
        case 0x15c0fcu: goto label_15c0fc;
        case 0x15c104u: goto label_15c104;
        case 0x15c10cu: goto label_15c10c;
        case 0x15c114u: goto label_15c114;
        case 0x15c120u: goto label_15c120;
        case 0x15c12cu: goto label_15c12c;
        case 0x15c138u: goto label_15c138;
        case 0x15c144u: goto label_15c144;
        default: break;
    }

    ctx->pc = 0x15c090u;

    // 0x15c090: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x15c094: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15c098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15c09c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c0a4: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x15c0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15c0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c0ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c0b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15c0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15c0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15c0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0c4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x15c0c8: 0xc040c02  jal         func_103008
    ctx->pc = 0x15C0C8u;
    SET_GPR_U32(ctx, 31, 0x15C0D0u);
    ctx->pc = 0x15C0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0C8u;
            // 0x15c0cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103008u;
    if (runtime->hasFunction(0x103008u)) {
        auto targetFn = runtime->lookupFunction(0x103008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0D0u; }
        if (ctx->pc != 0x15C0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDBuff_0x103008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0D0u; }
        if (ctx->pc != 0x15C0D0u) { return; }
    }
    ctx->pc = 0x15C0D0u;
label_15c0d0:
    // 0x15c0d0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15c0d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0d8: 0xa3a20143  sb          $v0, 0x143($sp)
    ctx->pc = 0x15c0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 323), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c0dc: 0xa3a20233  sb          $v0, 0x233($sp)
    ctx->pc = 0x15c0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 563), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c0e0: 0xa3b20140  sb          $s2, 0x140($sp)
    ctx->pc = 0x15c0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 18));
    // 0x15c0e4: 0xa3b20230  sb          $s2, 0x230($sp)
    ctx->pc = 0x15c0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 560), (uint8_t)GPR_U32(ctx, 18));
    // 0x15c0e8: 0xa3b10141  sb          $s1, 0x141($sp)
    ctx->pc = 0x15c0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 321), (uint8_t)GPR_U32(ctx, 17));
    // 0x15c0ec: 0xa3b10231  sb          $s1, 0x231($sp)
    ctx->pc = 0x15c0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 561), (uint8_t)GPR_U32(ctx, 17));
    // 0x15c0f0: 0xa3b00142  sb          $s0, 0x142($sp)
    ctx->pc = 0x15c0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 322), (uint8_t)GPR_U32(ctx, 16));
    // 0x15c0f4: 0xc0440d8  jal         func_110360
    ctx->pc = 0x15C0F4u;
    SET_GPR_U32(ctx, 31, 0x15C0FCu);
    ctx->pc = 0x15C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0F4u;
            // 0x15c0f8: 0xa3b00232  sb          $s0, 0x232($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 562), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0FCu; }
        if (ctx->pc != 0x15C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0FCu; }
        if (ctx->pc != 0x15C0FCu) { return; }
    }
    ctx->pc = 0x15C0FCu;
label_15c0fc:
    // 0x15c0fc: 0xc040cc0  jal         func_103300
    ctx->pc = 0x15C0FCu;
    SET_GPR_U32(ctx, 31, 0x15C104u);
    ctx->pc = 0x15C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0FCu;
            // 0x15c100: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C104u; }
        if (ctx->pc != 0x15C104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C104u; }
        if (ctx->pc != 0x15C104u) { return; }
    }
    ctx->pc = 0x15C104u;
label_15c104:
    // 0x15c104: 0xc0440d8  jal         func_110360
    ctx->pc = 0x15C104u;
    SET_GPR_U32(ctx, 31, 0x15C10Cu);
    ctx->pc = 0x15C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C104u;
            // 0x15c108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C10Cu; }
        if (ctx->pc != 0x15C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C10Cu; }
        if (ctx->pc != 0x15C10Cu) { return; }
    }
    ctx->pc = 0x15C10Cu;
label_15c10c:
    // 0x15c10c: 0xc040cc0  jal         func_103300
    ctx->pc = 0x15C10Cu;
    SET_GPR_U32(ctx, 31, 0x15C114u);
    ctx->pc = 0x15C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C10Cu;
            // 0x15c110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C114u; }
        if (ctx->pc != 0x15C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C114u; }
        if (ctx->pc != 0x15C114u) { return; }
    }
    ctx->pc = 0x15C114u;
label_15c114:
    // 0x15c114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15c118: 0xc040ca8  jal         func_1032A0
    ctx->pc = 0x15C118u;
    SET_GPR_U32(ctx, 31, 0x15C120u);
    ctx->pc = 0x15C11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C118u;
            // 0x15c11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1032A0u;
    if (runtime->hasFunction(0x1032A0u)) {
        auto targetFn = runtime->lookupFunction(0x1032A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C120u; }
        if (ctx->pc != 0x15C120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x1032a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C120u; }
        if (ctx->pc != 0x15C120u) { return; }
    }
    ctx->pc = 0x15C120u;
label_15c120:
    // 0x15c120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c124: 0xc040ce6  jal         func_103398
    ctx->pc = 0x15C124u;
    SET_GPR_U32(ctx, 31, 0x15C12Cu);
    ctx->pc = 0x15C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C124u;
            // 0x15c128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C12Cu; }
        if (ctx->pc != 0x15C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C12Cu; }
        if (ctx->pc != 0x15C12Cu) { return; }
    }
    ctx->pc = 0x15C12Cu;
label_15c12c:
    // 0x15c12c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15c130: 0xc040ca8  jal         func_1032A0
    ctx->pc = 0x15C130u;
    SET_GPR_U32(ctx, 31, 0x15C138u);
    ctx->pc = 0x15C134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C130u;
            // 0x15c134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1032A0u;
    if (runtime->hasFunction(0x1032A0u)) {
        auto targetFn = runtime->lookupFunction(0x1032A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C138u; }
        if (ctx->pc != 0x15C138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x1032a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C138u; }
        if (ctx->pc != 0x15C138u) { return; }
    }
    ctx->pc = 0x15C138u;
label_15c138:
    // 0x15c138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c13c: 0xc040ce6  jal         func_103398
    ctx->pc = 0x15C13Cu;
    SET_GPR_U32(ctx, 31, 0x15C144u);
    ctx->pc = 0x15C140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C13Cu;
            // 0x15c140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C144u; }
        if (ctx->pc != 0x15C144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C144u; }
        if (ctx->pc != 0x15C144u) { return; }
    }
    ctx->pc = 0x15C144u;
label_15c144:
    // 0x15c144: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c154: 0x3e00008  jr          $ra
    ctx->pc = 0x15C154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C154u;
            // 0x15c158: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C15Cu;
}
