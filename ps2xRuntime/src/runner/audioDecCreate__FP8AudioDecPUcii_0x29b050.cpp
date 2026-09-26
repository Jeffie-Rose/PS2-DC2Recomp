#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecCreate__FP8AudioDecPUcii
// Address: 0x29b050 - 0x29b16c
void audioDecCreate__FP8AudioDecPUcii_0x29b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecCreate__FP8AudioDecPUcii_0x29b050");
#endif

    switch (ctx->pc) {
        case 0x29b09cu: goto label_29b09c;
        case 0x29b0b8u: goto label_29b0b8;
        case 0x29b0ccu: goto label_29b0cc;
        case 0x29b0d4u: goto label_29b0d4;
        case 0x29b0f0u: goto label_29b0f0;
        case 0x29b104u: goto label_29b104;
        case 0x29b118u: goto label_29b118;
        case 0x29b12cu: goto label_29b12c;
        case 0x29b134u: goto label_29b134;
        case 0x29b144u: goto label_29b144;
        case 0x29b154u: goto label_29b154;
        default: break;
    }

    ctx->pc = 0x29b050u;

    // 0x29b050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b064: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29b064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29b068: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29b068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b06c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x29b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x29b070: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x29b070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x29b074: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x29b074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x29b078: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x29b078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x29b07c: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x29b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x29b080: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x29b080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x29b084: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x29b084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x29b088: 0xac900048  sw          $s0, 0x48($a0)
    ctx->pc = 0x29b088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 16));
    // 0x29b08c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x29b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x29b090: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x29b090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x29b094: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x29B094u;
    SET_GPR_U32(ctx, 31, 0x29B09Cu);
    ctx->pc = 0x29B098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B094u;
            // 0x29b098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B09Cu; }
        if (ctx->pc != 0x29B09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B09Cu; }
        if (ctx->pc != 0x29B09Cu) { return; }
    }
    ctx->pc = 0x29B09Cu;
label_29b09c:
    // 0x29b09c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x29b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x29b0a0: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x29b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x29b0a4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B0A4u;
    {
        const bool branch_taken_0x29b0a4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x29B0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0A4u;
            // 0x29b0a8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0a4) {
            ctx->pc = 0x29B0C0u;
            goto label_29b0c0;
        }
    }
    ctx->pc = 0x29B0ACu;
    // 0x29b0ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29b0b0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29B0B0u;
    SET_GPR_U32(ctx, 31, 0x29B0B8u);
    ctx->pc = 0x29B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0B0u;
            // 0x29b0b4: 0x2484df00  addiu       $a0, $a0, -0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0B8u; }
        if (ctx->pc != 0x29B0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0B8u; }
        if (ctx->pc != 0x29B0B8u) { return; }
    }
    ctx->pc = 0x29B0B8u;
label_29b0b8:
    // 0x29b0b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x29B0B8u;
    {
        const bool branch_taken_0x29b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0B8u;
            // 0x29b0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0b8) {
            ctx->pc = 0x29B158u;
            goto label_29b158;
        }
    }
    ctx->pc = 0x29B0C0u;
label_29b0c0:
    // 0x29b0c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29b0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0c4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29B0C4u;
    SET_GPR_U32(ctx, 31, 0x29B0CCu);
    ctx->pc = 0x29B0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0C4u;
            // 0x29b0c8: 0x2484df20  addiu       $a0, $a0, -0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0CCu; }
        if (ctx->pc != 0x29B0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0CCu; }
        if (ctx->pc != 0x29B0CCu) { return; }
    }
    ctx->pc = 0x29B0CCu;
label_29b0cc:
    // 0x29b0cc: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x29B0CCu;
    SET_GPR_U32(ctx, 31, 0x29B0D4u);
    ctx->pc = 0x29B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0CCu;
            // 0x29b0d0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0D4u; }
        if (ctx->pc != 0x29B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0D4u; }
        if (ctx->pc != 0x29B0D4u) { return; }
    }
    ctx->pc = 0x29B0D4u;
label_29b0d4:
    // 0x29b0d4: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x29b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x29b0d8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x29b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x29b0dc: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B0DCu;
    {
        const bool branch_taken_0x29b0dc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x29B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0DCu;
            // 0x29b0e0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0dc) {
            ctx->pc = 0x29B0F8u;
            goto label_29b0f8;
        }
    }
    ctx->pc = 0x29B0E4u;
    // 0x29b0e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29b0e8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29B0E8u;
    SET_GPR_U32(ctx, 31, 0x29B0F0u);
    ctx->pc = 0x29B0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0E8u;
            // 0x29b0ec: 0x2484df00  addiu       $a0, $a0, -0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0F0u; }
        if (ctx->pc != 0x29B0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B0F0u; }
        if (ctx->pc != 0x29B0F0u) { return; }
    }
    ctx->pc = 0x29B0F0u;
label_29b0f0:
    // 0x29b0f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29B0F0u;
    {
        const bool branch_taken_0x29b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0F0u;
            // 0x29b0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0f0) {
            ctx->pc = 0x29B158u;
            goto label_29b158;
        }
    }
    ctx->pc = 0x29B0F8u;
label_29b0f8:
    // 0x29b0f8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x29b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29b0fc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29B0FCu;
    SET_GPR_U32(ctx, 31, 0x29B104u);
    ctx->pc = 0x29B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0FCu;
            // 0x29b100: 0x2484df20  addiu       $a0, $a0, -0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B104u; }
        if (ctx->pc != 0x29B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B104u; }
        if (ctx->pc != 0x29B104u) { return; }
    }
    ctx->pc = 0x29B104u;
label_29b104:
    // 0x29b104: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29b104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29b108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b10c: 0x24845500  addiu       $a0, $a0, 0x5500
    ctx->pc = 0x29b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21760));
    // 0x29b110: 0xc049c86  jal         func_127218
    ctx->pc = 0x29B110u;
    SET_GPR_U32(ctx, 31, 0x29B118u);
    ctx->pc = 0x29B114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B110u;
            // 0x29b114: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B118u; }
        if (ctx->pc != 0x29B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B118u; }
        if (ctx->pc != 0x29B118u) { return; }
    }
    ctx->pc = 0x29B118u;
label_29b118:
    // 0x29b118: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x29b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x29b11c: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x29b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x29b120: 0x24a55500  addiu       $a1, $a1, 0x5500
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21760));
    // 0x29b124: 0xc0a6db8  jal         func_29B6E0
    ctx->pc = 0x29B124u;
    SET_GPR_U32(ctx, 31, 0x29B12Cu);
    ctx->pc = 0x29B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B124u;
            // 0x29b128: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6E0u;
    if (runtime->hasFunction(0x29B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B12Cu; }
        if (ctx->pc != 0x29B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP__FiPUci_0x29b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B12Cu; }
        if (ctx->pc != 0x29B12Cu) { return; }
    }
    ctx->pc = 0x29B12Cu;
label_29b12c:
    // 0x29b12c: 0xc0a6dd8  jal         func_29B760
    ctx->pc = 0x29B12Cu;
    SET_GPR_U32(ctx, 31, 0x29B134u);
    ctx->pc = 0x29B130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B12Cu;
            // 0x29b130: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B760u;
    if (runtime->hasFunction(0x29B760u)) {
        auto targetFn = runtime->lookupFunction(0x29B760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B134u; }
        if (ctx->pc != 0x29B134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeMasterVolume__FUi_0x29b760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B134u; }
        if (ctx->pc != 0x29B134u) { return; }
    }
    ctx->pc = 0x29B134u;
label_29b134:
    // 0x29b134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29b138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29b138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29b13c: 0xc063478  jal         func_18D1E0
    ctx->pc = 0x29B13Cu;
    SET_GPR_U32(ctx, 31, 0x29B144u);
    ctx->pc = 0x29B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B13Cu;
            // 0x29b140: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D1E0u;
    if (runtime->hasFunction(0x18D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B144u; }
        if (ctx->pc != 0x29B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMasterVol__Fif_0x18d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B144u; }
        if (ctx->pc != 0x29B144u) { return; }
    }
    ctx->pc = 0x29B144u;
label_29b144:
    // 0x29b144: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29b148: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29b148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29b14c: 0xc063478  jal         func_18D1E0
    ctx->pc = 0x29B14Cu;
    SET_GPR_U32(ctx, 31, 0x29B154u);
    ctx->pc = 0x29B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B14Cu;
            // 0x29b150: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D1E0u;
    if (runtime->hasFunction(0x18D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B154u; }
        if (ctx->pc != 0x29B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMasterVol__Fif_0x18d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B154u; }
        if (ctx->pc != 0x29B154u) { return; }
    }
    ctx->pc = 0x29B154u;
label_29b154:
    // 0x29b154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b158:
    // 0x29b158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b164: 0x3e00008  jr          $ra
    ctx->pc = 0x29B164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B164u;
            // 0x29b168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B16Cu;
}
