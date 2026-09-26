#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INVENT_DATASET__FP9SPI_STACKi
// Address: 0x200100 - 0x2002c8
void ps2__INVENT_DATASET__FP9SPI_STACKi_0x200100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INVENT_DATASET__FP9SPI_STACKi_0x200100");
#endif

    switch (ctx->pc) {
        case 0x200144u: goto label_200144;
        case 0x200160u: goto label_200160;
        case 0x200170u: goto label_200170;
        case 0x200180u: goto label_200180;
        case 0x2001d8u: goto label_2001d8;
        case 0x2001e8u: goto label_2001e8;
        case 0x200200u: goto label_200200;
        case 0x200210u: goto label_200210;
        case 0x200238u: goto label_200238;
        case 0x20024cu: goto label_20024c;
        case 0x200260u: goto label_200260;
        case 0x200274u: goto label_200274;
        case 0x200284u: goto label_200284;
        default: break;
    }

    ctx->pc = 0x200100u;

    // 0x200100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x200100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x200104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x200104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x200108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x200108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20010c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x200110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20011c: 0x8f8390dc  lw          $v1, -0x6F24($gp)
    ctx->pc = 0x20011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
    // 0x200120: 0x87829104  lh          $v0, -0x6EFC($gp)
    ctx->pc = 0x200120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938884)));
    // 0x200124: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x200124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200128: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x200128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20012c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20012Cu;
    {
        const bool branch_taken_0x20012c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x200130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20012Cu;
            // 0x200130: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20012c) {
            ctx->pc = 0x20013Cu;
            goto label_20013c;
        }
    }
    ctx->pc = 0x200134u;
    // 0x200134: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x200134u;
    {
        const bool branch_taken_0x200134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200134u;
            // 0x200138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200134) {
            ctx->pc = 0x2002A8u;
            goto label_2002a8;
        }
    }
    ctx->pc = 0x20013Cu;
label_20013c:
    // 0x20013c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x20013Cu;
    SET_GPR_U32(ctx, 31, 0x200144u);
    ctx->pc = 0x200140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20013Cu;
            // 0x200140: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200144u; }
        if (ctx->pc != 0x200144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200144u; }
        if (ctx->pc != 0x200144u) { return; }
    }
    ctx->pc = 0x200144u;
label_200144:
    // 0x200144: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x200144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20014c: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x200150: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x200150u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x200154: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x200154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200158: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x200158u;
    SET_GPR_U32(ctx, 31, 0x200160u);
    ctx->pc = 0x20015Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200158u;
            // 0x20015c: 0x24510002  addiu       $s1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200160u; }
        if (ctx->pc != 0x200160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200160u; }
        if (ctx->pc != 0x200160u) { return; }
    }
    ctx->pc = 0x200160u;
label_200160:
    // 0x200160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200164: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x200164u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x200168: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x200168u;
    SET_GPR_U32(ctx, 31, 0x200170u);
    ctx->pc = 0x20016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200168u;
            // 0x20016c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200170u; }
        if (ctx->pc != 0x200170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200170u; }
        if (ctx->pc != 0x200170u) { return; }
    }
    ctx->pc = 0x200170u;
label_200170:
    // 0x200170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200174: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x200174u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x200178: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x200178u;
    SET_GPR_U32(ctx, 31, 0x200180u);
    ctx->pc = 0x20017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200178u;
            // 0x20017c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200180u; }
        if (ctx->pc != 0x200180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200180u; }
        if (ctx->pc != 0x200180u) { return; }
    }
    ctx->pc = 0x200180u;
label_200180:
    // 0x200180: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x200180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x200184: 0x2603fff7  addiu       $v1, $s0, -0x9
    ctx->pc = 0x200184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    // 0x200188: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x20018c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x20018cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x200190: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200190u;
    {
        const bool branch_taken_0x200190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x200194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200190u;
            // 0x200194: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200190) {
            ctx->pc = 0x2001A0u;
            goto label_2001a0;
        }
    }
    ctx->pc = 0x200198u;
    // 0x200198: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20019c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2001a0:
    // 0x2001a0: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2001a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2001a4: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2001a8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2001A8u;
    {
        const bool branch_taken_0x2001a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2001ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2001A8u;
            // 0x2001ac: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001a8) {
            ctx->pc = 0x2001B8u;
            goto label_2001b8;
        }
    }
    ctx->pc = 0x2001B0u;
    // 0x2001b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2001B0u;
    {
        const bool branch_taken_0x2001b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2001B0u;
            // 0x2001b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001b0) {
            ctx->pc = 0x2002A8u;
            goto label_2002a8;
        }
    }
    ctx->pc = 0x2001B8u;
label_2001b8:
    // 0x2001b8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2001b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2001bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2001BCu;
    {
        const bool branch_taken_0x2001bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2001BCu;
            // 0x2001c0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001bc) {
            ctx->pc = 0x2001CCu;
            goto label_2001cc;
        }
    }
    ctx->pc = 0x2001C4u;
    // 0x2001c4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2001c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2001c8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2001c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2001cc:
    // 0x2001cc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2001ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2001d0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2001D0u;
    SET_GPR_U32(ctx, 31, 0x2001D8u);
    ctx->pc = 0x2001D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001D0u;
            // 0x2001d4: 0x2484b7a0  addiu       $a0, $a0, -0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001D8u; }
        if (ctx->pc != 0x2001D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001D8u; }
        if (ctx->pc != 0x2001D8u) { return; }
    }
    ctx->pc = 0x2001D8u;
label_2001d8:
    // 0x2001d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2001d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2001dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2001dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2001E0u;
    {
        const bool branch_taken_0x2001e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2001E0u;
            // 0x2001e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001e0) {
            ctx->pc = 0x200220u;
            goto label_200220;
        }
    }
    ctx->pc = 0x2001E8u;
label_2001e8:
    // 0x2001e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2001e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2001ec: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x2001ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2001f0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2001F0u;
    {
        const bool branch_taken_0x2001f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2001F0u;
            // 0x2001f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001f0) {
            ctx->pc = 0x200214u;
            goto label_200214;
        }
    }
    ctx->pc = 0x2001F8u;
    // 0x2001f8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2001F8u;
    SET_GPR_U32(ctx, 31, 0x200200u);
    ctx->pc = 0x2001FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001F8u;
            // 0x2001fc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200200u; }
        if (ctx->pc != 0x200200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200200u; }
        if (ctx->pc != 0x200200u) { return; }
    }
    ctx->pc = 0x200200u;
label_200200:
    // 0x200200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200204: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x200204u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x200208: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x200208u;
    SET_GPR_U32(ctx, 31, 0x200210u);
    ctx->pc = 0x20020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200208u;
            // 0x20020c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200210u; }
        if (ctx->pc != 0x200210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200210u; }
        if (ctx->pc != 0x200210u) { return; }
    }
    ctx->pc = 0x200210u;
label_200210:
    // 0x200210: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x200210u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_200214:
    // 0x200214: 0x0  nop
    ctx->pc = 0x200214u;
    // NOP
    // 0x200218: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x200218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x20021c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20021cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_200220:
    // 0x200220: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200224: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x200224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200228: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x200228u;
    {
        const bool branch_taken_0x200228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200228u;
            // 0x20022c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200228) {
            ctx->pc = 0x2001E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2001e8;
        }
    }
    ctx->pc = 0x200230u;
    // 0x200230: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x200230u;
    SET_GPR_U32(ctx, 31, 0x200238u);
    ctx->pc = 0x200234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200230u;
            // 0x200234: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200238u; }
        if (ctx->pc != 0x200238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200238u; }
        if (ctx->pc != 0x200238u) { return; }
    }
    ctx->pc = 0x200238u;
label_200238:
    // 0x200238: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x200238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x20023c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200240: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x200240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x200244: 0xc05190c  jal         func_146430
    ctx->pc = 0x200244u;
    SET_GPR_U32(ctx, 31, 0x20024Cu);
    ctx->pc = 0x200248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200244u;
            // 0x200248: 0xa4620010  sh          $v0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20024Cu; }
        if (ctx->pc != 0x20024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20024Cu; }
        if (ctx->pc != 0x20024Cu) { return; }
    }
    ctx->pc = 0x20024Cu;
label_20024c:
    // 0x20024c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200254: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x200254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x200258: 0xc05190c  jal         func_146430
    ctx->pc = 0x200258u;
    SET_GPR_U32(ctx, 31, 0x200260u);
    ctx->pc = 0x20025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200258u;
            // 0x20025c: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200260u; }
        if (ctx->pc != 0x200260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200260u; }
        if (ctx->pc != 0x200260u) { return; }
    }
    ctx->pc = 0x200260u;
label_200260:
    // 0x200260: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x200260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200264: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200268: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x200268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20026c: 0xc05190c  jal         func_146430
    ctx->pc = 0x20026Cu;
    SET_GPR_U32(ctx, 31, 0x200274u);
    ctx->pc = 0x200270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20026Cu;
            // 0x200270: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200274u; }
        if (ctx->pc != 0x200274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200274u; }
        if (ctx->pc != 0x200274u) { return; }
    }
    ctx->pc = 0x200274u;
label_200274:
    // 0x200274: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x200274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20027c: 0xc05190c  jal         func_146430
    ctx->pc = 0x20027Cu;
    SET_GPR_U32(ctx, 31, 0x200284u);
    ctx->pc = 0x200280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20027Cu;
            // 0x200280: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200284u; }
        if (ctx->pc != 0x200284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200284u; }
        if (ctx->pc != 0x200284u) { return; }
    }
    ctx->pc = 0x200284u;
label_200284:
    // 0x200284: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x200284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20028c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x20028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x200290: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x200294: 0x87839104  lh          $v1, -0x6EFC($gp)
    ctx->pc = 0x200294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938884)));
    // 0x200298: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x200298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x20029c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2002a0: 0xaf849100  sw          $a0, -0x6F00($gp)
    ctx->pc = 0x2002a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938880), GPR_U32(ctx, 4));
    // 0x2002a4: 0xa7839104  sh          $v1, -0x6EFC($gp)
    ctx->pc = 0x2002a4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938884), (uint16_t)GPR_U32(ctx, 3));
label_2002a8:
    // 0x2002a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2002a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2002ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2002acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2002b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2002b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2002b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2002b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2002b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2002b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2002bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2002bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2002c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2002C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2002C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2002C0u;
            // 0x2002c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2002C8u;
}
