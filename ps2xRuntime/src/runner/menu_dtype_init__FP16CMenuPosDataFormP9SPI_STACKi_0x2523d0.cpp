#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_dtype_init__FP16CMenuPosDataFormP9SPI_STACKi
// Address: 0x2523d0 - 0x25253c
void menu_dtype_init__FP16CMenuPosDataFormP9SPI_STACKi_0x2523d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_dtype_init__FP16CMenuPosDataFormP9SPI_STACKi_0x2523d0");
#endif

    switch (ctx->pc) {
        case 0x252440u: goto label_252440;
        case 0x252454u: goto label_252454;
        case 0x252468u: goto label_252468;
        case 0x252478u: goto label_252478;
        case 0x2524c4u: goto label_2524c4;
        case 0x2524e0u: goto label_2524e0;
        case 0x2524f8u: goto label_2524f8;
        case 0x252520u: goto label_252520;
        default: break;
    }

    ctx->pc = 0x2523d0u;

    // 0x2523d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2523d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2523d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2523d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2523d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2523d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2523dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2523dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2523e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2523e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523e4: 0x8f8797bc  lw          $a3, -0x6844($gp)
    ctx->pc = 0x2523e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2523e8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2523E8u;
    {
        const bool branch_taken_0x2523e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2523ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2523E8u;
            // 0x2523ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523e8) {
            ctx->pc = 0x2523F8u;
            goto label_2523f8;
        }
    }
    ctx->pc = 0x2523F0u;
    // 0x2523f0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2523F0u;
    {
        const bool branch_taken_0x2523f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2523F0u;
            // 0x2523f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523f0) {
            ctx->pc = 0x252528u;
            goto label_252528;
        }
    }
    ctx->pc = 0x2523F8u;
label_2523f8:
    // 0x2523f8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2523f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2523fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2523fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x252400: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x252400u;
    {
        const bool branch_taken_0x252400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x252404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252400u;
            // 0x252404: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252400) {
            ctx->pc = 0x252484u;
            goto label_252484;
        }
    }
    ctx->pc = 0x252408u;
    // 0x252408: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x252408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
    // 0x25240c: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x25240cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x252410: 0xace50040  sw          $a1, 0x40($a3)
    ctx->pc = 0x252410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 5));
    // 0x252414: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x252414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252418: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25241c: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x25241cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
    // 0x252420: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252424: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x252424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x252428: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25242c: 0x14c2003d  bne         $a2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25242Cu;
    {
        const bool branch_taken_0x25242c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x252430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25242Cu;
            // 0x252430: 0xac64004c  sw          $a0, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25242c) {
            ctx->pc = 0x252524u;
            goto label_252524;
        }
    }
    ctx->pc = 0x252434u;
    // 0x252434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252438: 0xc05190c  jal         func_146430
    ctx->pc = 0x252438u;
    SET_GPR_U32(ctx, 31, 0x252440u);
    ctx->pc = 0x25243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252438u;
            // 0x25243c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252440u; }
        if (ctx->pc != 0x252440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252440u; }
        if (ctx->pc != 0x252440u) { return; }
    }
    ctx->pc = 0x252440u;
label_252440:
    // 0x252440: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252448: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x252448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25244c: 0xc05190c  jal         func_146430
    ctx->pc = 0x25244Cu;
    SET_GPR_U32(ctx, 31, 0x252454u);
    ctx->pc = 0x252450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25244Cu;
            // 0x252450: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252454u; }
        if (ctx->pc != 0x252454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252454u; }
        if (ctx->pc != 0x252454u) { return; }
    }
    ctx->pc = 0x252454u;
label_252454:
    // 0x252454: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25245c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x25245cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x252460: 0xc05190c  jal         func_146430
    ctx->pc = 0x252460u;
    SET_GPR_U32(ctx, 31, 0x252468u);
    ctx->pc = 0x252464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252460u;
            // 0x252464: 0xe4400044  swc1        $f0, 0x44($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252468u; }
        if (ctx->pc != 0x252468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252468u; }
        if (ctx->pc != 0x252468u) { return; }
    }
    ctx->pc = 0x252468u;
label_252468:
    // 0x252468: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25246c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252470: 0xc05190c  jal         func_146430
    ctx->pc = 0x252470u;
    SET_GPR_U32(ctx, 31, 0x252478u);
    ctx->pc = 0x252474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252470u;
            // 0x252474: 0xe4400048  swc1        $f0, 0x48($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252478u; }
        if (ctx->pc != 0x252478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252478u; }
        if (ctx->pc != 0x252478u) { return; }
    }
    ctx->pc = 0x252478u;
label_252478:
    // 0x252478: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25247c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x25247Cu;
    {
        const bool branch_taken_0x25247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25247Cu;
            // 0x252480: 0xe440004c  swc1        $f0, 0x4C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25247c) {
            ctx->pc = 0x252524u;
            goto label_252524;
        }
    }
    ctx->pc = 0x252484u;
label_252484:
    // 0x252484: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x252484u;
    {
        const bool branch_taken_0x252484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x252488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252484u;
            // 0x252488: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252484) {
            ctx->pc = 0x2524E8u;
            goto label_2524e8;
        }
    }
    ctx->pc = 0x25248Cu;
    // 0x25248c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x252490: 0xa4e20068  sh          $v0, 0x68($a3)
    ctx->pc = 0x252490u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x252494: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252498: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x252498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x25249c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x25249cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2524a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2524a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2524a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2524a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2524a8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2524a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2524ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2524ACu;
    {
        const bool branch_taken_0x2524ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2524ACu;
            // 0x2524b0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524ac) {
            ctx->pc = 0x2524BCu;
            goto label_2524bc;
        }
    }
    ctx->pc = 0x2524B4u;
    // 0x2524b4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2524b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2524b8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2524bc:
    // 0x2524bc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2524BCu;
    SET_GPR_U32(ctx, 31, 0x2524C4u);
    ctx->pc = 0x2524C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2524BCu;
            // 0x2524c0: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2524C4u; }
        if (ctx->pc != 0x2524C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2524C4u; }
        if (ctx->pc != 0x2524C4u) { return; }
    }
    ctx->pc = 0x2524C4u;
label_2524c4:
    // 0x2524c4: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2524c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2524c8: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x2524c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x2524cc: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x2524ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2524d0: 0x84460068  lh          $a2, 0x68($v0)
    ctx->pc = 0x2524d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2524d4: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2524d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2524d8: 0xc08b158  jal         func_22C560
    ctx->pc = 0x2524D8u;
    SET_GPR_U32(ctx, 31, 0x2524E0u);
    ctx->pc = 0x2524DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2524D8u;
            // 0x2524dc: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C560u;
    if (runtime->hasFunction(0x22C560u)) {
        auto targetFn = runtime->lookupFunction(0x22C560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2524E0u; }
        if (ctx->pc != 0x2524E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdItemIconEffectMalloc__FP9mgCMemoryP18MENUFORMPARTS_TYPEi_0x22c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2524E0u; }
        if (ctx->pc != 0x2524E0u) { return; }
    }
    ctx->pc = 0x2524E0u;
label_2524e0:
    // 0x2524e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2524E0u;
    {
        const bool branch_taken_0x2524e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2524E0u;
            // 0x2524e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524e0) {
            ctx->pc = 0x252528u;
            goto label_252528;
        }
    }
    ctx->pc = 0x2524E8u;
label_2524e8:
    // 0x2524e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2524E8u;
    {
        const bool branch_taken_0x2524e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2524ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2524E8u;
            // 0x2524ec: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524e8) {
            ctx->pc = 0x252500u;
            goto label_252500;
        }
    }
    ctx->pc = 0x2524F0u;
    // 0x2524f0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2524F0u;
    SET_GPR_U32(ctx, 31, 0x2524F8u);
    ctx->pc = 0x2524F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2524F0u;
            // 0x2524f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2524F8u; }
        if (ctx->pc != 0x2524F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2524F8u; }
        if (ctx->pc != 0x2524F8u) { return; }
    }
    ctx->pc = 0x2524F8u;
label_2524f8:
    // 0x2524f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2524F8u;
    {
        const bool branch_taken_0x2524f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2524F8u;
            // 0x2524fc: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524f8) {
            ctx->pc = 0x252524u;
            goto label_252524;
        }
    }
    ctx->pc = 0x252500u;
label_252500:
    // 0x252500: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252500u;
    {
        const bool branch_taken_0x252500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252500) {
            ctx->pc = 0x252524u;
            goto label_252524;
        }
    }
    ctx->pc = 0x252508u;
    // 0x252508: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x25250c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x25250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x252510: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x252510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x252514: 0xa3a20038  sb          $v0, 0x38($sp)
    ctx->pc = 0x252514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x252518: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x252518u;
    SET_GPR_U32(ctx, 31, 0x252520u);
    ctx->pc = 0x25251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252518u;
            // 0x25251c: 0xa3a00039  sb          $zero, 0x39($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252520u; }
        if (ctx->pc != 0x252520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252520u; }
        if (ctx->pc != 0x252520u) { return; }
    }
    ctx->pc = 0x252520u;
label_252520:
    // 0x252520: 0xa222001c  sb          $v0, 0x1C($s1)
    ctx->pc = 0x252520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
label_252524:
    // 0x252524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252528:
    // 0x252528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25252c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25252cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252534: 0x3e00008  jr          $ra
    ctx->pc = 0x252534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252534u;
            // 0x252538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25253Cu;
}
