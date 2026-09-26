#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InsCameraPas__10CCameraPasFiPfPf
// Address: 0x256440 - 0x256550
void InsCameraPas__10CCameraPasFiPfPf_0x256440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsCameraPas__10CCameraPasFiPfPf_0x256440");
#endif

    switch (ctx->pc) {
        case 0x256484u: goto label_256484;
        case 0x256490u: goto label_256490;
        case 0x256498u: goto label_256498;
        case 0x2564acu: goto label_2564ac;
        case 0x2564bcu: goto label_2564bc;
        case 0x2564c8u: goto label_2564c8;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564e0u: goto label_2564e0;
        case 0x2564ecu: goto label_2564ec;
        default: break;
    }

    ctx->pc = 0x256440u;

    // 0x256440: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x256444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x256448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x256448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25644c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x256450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256458: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x256458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25645c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256460: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x256460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256464: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x256464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256468u;
    {
        const bool branch_taken_0x256468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256468u;
            // 0x25646c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256468) {
            ctx->pc = 0x256478u;
            goto label_256478;
        }
    }
    ctx->pc = 0x256470u;
    // 0x256470: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x256470u;
    {
        const bool branch_taken_0x256470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256470u;
            // 0x256474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256470) {
            ctx->pc = 0x256530u;
            goto label_256530;
        }
    }
    ctx->pc = 0x256478u;
label_256478:
    // 0x256478: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x256478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25647c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25647Cu;
    SET_GPR_U32(ctx, 31, 0x256484u);
    ctx->pc = 0x256480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25647Cu;
            // 0x256480: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256484u; }
        if (ctx->pc != 0x256484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256484u; }
        if (ctx->pc != 0x256484u) { return; }
    }
    ctx->pc = 0x256484u;
label_256484:
    // 0x256484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x256484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256488: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256488u;
    SET_GPR_U32(ctx, 31, 0x256490u);
    ctx->pc = 0x25648Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256488u;
            // 0x25648c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256490u; }
        if (ctx->pc != 0x256490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256490u; }
        if (ctx->pc != 0x256490u) { return; }
    }
    ctx->pc = 0x256490u;
label_256490:
    // 0x256490: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x256490u;
    {
        const bool branch_taken_0x256490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256490u;
            // 0x256494: 0x109100  sll         $s2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256490) {
            ctx->pc = 0x2564F4u;
            goto label_2564f4;
        }
    }
    ctx->pc = 0x256498u;
label_256498:
    // 0x256498: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x256498u;
    {
        const bool branch_taken_0x256498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256498u;
            // 0x25649c: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256498) {
            ctx->pc = 0x256508u;
            goto label_256508;
        }
    }
    ctx->pc = 0x2564A0u;
    // 0x2564a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2564a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2564a4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2564A4u;
    SET_GPR_U32(ctx, 31, 0x2564ACu);
    ctx->pc = 0x2564A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564A4u;
            // 0x2564a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564ACu; }
        if (ctx->pc != 0x2564ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564ACu; }
        if (ctx->pc != 0x2564ACu) { return; }
    }
    ctx->pc = 0x2564ACu;
label_2564ac:
    // 0x2564ac: 0x26740100  addiu       $s4, $s3, 0x100
    ctx->pc = 0x2564acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x2564b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2564b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2564b4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2564B4u;
    SET_GPR_U32(ctx, 31, 0x2564BCu);
    ctx->pc = 0x2564B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564B4u;
            // 0x2564b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564BCu; }
        if (ctx->pc != 0x2564BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564BCu; }
        if (ctx->pc != 0x2564BCu) { return; }
    }
    ctx->pc = 0x2564BCu;
label_2564bc:
    // 0x2564bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2564bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564c0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2564C0u;
    SET_GPR_U32(ctx, 31, 0x2564C8u);
    ctx->pc = 0x2564C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564C0u;
            // 0x2564c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564C8u; }
        if (ctx->pc != 0x2564C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564C8u; }
        if (ctx->pc != 0x2564C8u) { return; }
    }
    ctx->pc = 0x2564C8u;
label_2564c8:
    // 0x2564c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2564c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564cc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2564CCu;
    SET_GPR_U32(ctx, 31, 0x2564D4u);
    ctx->pc = 0x2564D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564CCu;
            // 0x2564d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564D4u; }
        if (ctx->pc != 0x2564D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564D4u; }
        if (ctx->pc != 0x2564D4u) { return; }
    }
    ctx->pc = 0x2564D4u;
label_2564d4:
    // 0x2564d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2564d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2564d8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2564D8u;
    SET_GPR_U32(ctx, 31, 0x2564E0u);
    ctx->pc = 0x2564DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564D8u;
            // 0x2564dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564E0u; }
        if (ctx->pc != 0x2564E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564E0u; }
        if (ctx->pc != 0x2564E0u) { return; }
    }
    ctx->pc = 0x2564E0u;
label_2564e0:
    // 0x2564e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2564e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2564e4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2564E4u;
    SET_GPR_U32(ctx, 31, 0x2564ECu);
    ctx->pc = 0x2564E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2564E4u;
            // 0x2564e8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564ECu; }
        if (ctx->pc != 0x2564ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2564ECu; }
        if (ctx->pc != 0x2564ECu) { return; }
    }
    ctx->pc = 0x2564ECu;
label_2564ec:
    // 0x2564ec: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2564ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2564f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2564f4:
    // 0x2564f4: 0x0  nop
    ctx->pc = 0x2564f4u;
    // NOP
    // 0x2564f8: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x2564f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x2564fc: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2564fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x256500: 0x1020ffe5  beqz        $at, . + 4 + (-0x1B << 2)
    ctx->pc = 0x256500u;
    {
        const bool branch_taken_0x256500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x256504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256500u;
            // 0x256504: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256500) {
            ctx->pc = 0x256498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256498;
        }
    }
    ctx->pc = 0x256508u;
label_256508:
    // 0x256508: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x256508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x25650c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x256510: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x256510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    // 0x256514: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x256514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x256518: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x256518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x25651c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25651Cu;
    {
        const bool branch_taken_0x25651c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25651Cu;
            // 0x256520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25651c) {
            ctx->pc = 0x256530u;
            goto label_256530;
        }
    }
    ctx->pc = 0x256524u;
    // 0x256524: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x256524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256528: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x256528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    // 0x25652c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25652cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256530:
    // 0x256530: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25653c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25653cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256548: 0x3e00008  jr          $ra
    ctx->pc = 0x256548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256548u;
            // 0x25654c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256550u;
}
