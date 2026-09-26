#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PES_packet
// Address: 0x10da98 - 0x10e048
void ps2__PES_packet_0x10da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PES_packet_0x10da98");
#endif

    switch (ctx->pc) {
        case 0x10db0cu: goto label_10db0c;
        case 0x10db18u: goto label_10db18;
        case 0x10db2cu: goto label_10db2c;
        case 0x10dbccu: goto label_10dbcc;
        case 0x10dbd8u: goto label_10dbd8;
        case 0x10dbe8u: goto label_10dbe8;
        case 0x10dbf4u: goto label_10dbf4;
        case 0x10dc04u: goto label_10dc04;
        case 0x10dc14u: goto label_10dc14;
        case 0x10dc24u: goto label_10dc24;
        case 0x10dc34u: goto label_10dc34;
        case 0x10dc5cu: goto label_10dc5c;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dc74u: goto label_10dc74;
        case 0x10dc80u: goto label_10dc80;
        case 0x10dc8cu: goto label_10dc8c;
        case 0x10dc98u: goto label_10dc98;
        case 0x10dca4u: goto label_10dca4;
        case 0x10dce8u: goto label_10dce8;
        case 0x10dcf4u: goto label_10dcf4;
        case 0x10dd00u: goto label_10dd00;
        case 0x10dd0cu: goto label_10dd0c;
        case 0x10dd18u: goto label_10dd18;
        case 0x10dd24u: goto label_10dd24;
        case 0x10dd30u: goto label_10dd30;
        case 0x10dd74u: goto label_10dd74;
        case 0x10dd88u: goto label_10dd88;
        case 0x10dd9cu: goto label_10dd9c;
        case 0x10ddacu: goto label_10ddac;
        case 0x10ddbcu: goto label_10ddbc;
        case 0x10ddccu: goto label_10ddcc;
        case 0x10dddcu: goto label_10dddc;
        case 0x10dde8u: goto label_10dde8;
        case 0x10ddfcu: goto label_10ddfc;
        case 0x10de08u: goto label_10de08;
        case 0x10de14u: goto label_10de14;
        case 0x10de28u: goto label_10de28;
        case 0x10de40u: goto label_10de40;
        case 0x10de50u: goto label_10de50;
        case 0x10de64u: goto label_10de64;
        case 0x10de70u: goto label_10de70;
        case 0x10de80u: goto label_10de80;
        case 0x10de88u: goto label_10de88;
        case 0x10dec8u: goto label_10dec8;
        case 0x10df00u: goto label_10df00;
        case 0x10df28u: goto label_10df28;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10e014u: goto label_10e014;
        default: break;
    }

    ctx->pc = 0x10da98u;

    // 0x10da98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x10da98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10da9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x10da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x10daa0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10daa4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10daa8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10daa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10daac: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x10daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x10dab0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10dab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dab4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x10dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10dab8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x10dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10dabc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x10dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x10dac0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x10dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10dac4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x10dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10dac8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10dacc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10daccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10dad0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10dad4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x10dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10dad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10dadc: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x10dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x10dae0: 0x24680848  addiu       $t0, $v1, 0x848
    ctx->pc = 0x10dae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2120));
    // 0x10dae4: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x10dae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10dae8: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x10dae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10daec: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x10daecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10daf0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x10daf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10daf4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x10daf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10daf8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x10daf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10dafc: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x10dafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10db00: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x10db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10db04: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DB04u;
    SET_GPR_U32(ctx, 31, 0x10DB0Cu);
    ctx->pc = 0x10DB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB04u;
            // 0x10db08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB0Cu; }
        if (ctx->pc != 0x10DB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB0Cu; }
        if (ctx->pc != 0x10DB0Cu) { return; }
    }
    ctx->pc = 0x10DB0Cu;
label_10db0c:
    // 0x10db0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10db0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db10: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DB10u;
    SET_GPR_U32(ctx, 31, 0x10DB18u);
    ctx->pc = 0x10DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB10u;
            // 0x10db14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB18u; }
        if (ctx->pc != 0x10DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB18u; }
        if (ctx->pc != 0x10DB18u) { return; }
    }
    ctx->pc = 0x10DB18u;
label_10db18:
    // 0x10db18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10db1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db20: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x10db20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x10db24: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DB24u;
    SET_GPR_U32(ctx, 31, 0x10DB2Cu);
    ctx->pc = 0x10DB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB24u;
            // 0x10db28: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB2Cu; }
        if (ctx->pc != 0x10DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB2Cu; }
        if (ctx->pc != 0x10DB2Cu) { return; }
    }
    ctx->pc = 0x10DB2Cu;
label_10db2c:
    // 0x10db2c: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x10db2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10db30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10db34: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x10db34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x10db38: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x10db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x10db3c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10db40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10db40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db44: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x10db44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x10db48: 0x10820115  beq         $a0, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x10DB48u;
    {
        const bool branch_taken_0x10db48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB48u;
            // 0x10db4c: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db48) {
            ctx->pc = 0x10DFA0u;
            goto label_10dfa0;
        }
    }
    ctx->pc = 0x10DB50u;
    // 0x10db50: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x10db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x10db54: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10db58: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x10DB58u;
    {
        const bool branch_taken_0x10db58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10db58) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DB60u;
    // 0x10db60: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x10db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x10db64: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10db68: 0x108200f1  beq         $a0, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x10DB68u;
    {
        const bool branch_taken_0x10db68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10db68) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DB70u;
    // 0x10db70: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x10db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x10db74: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10db78: 0x108200ed  beq         $a0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x10DB78u;
    {
        const bool branch_taken_0x10db78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10db78) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DB80u;
    // 0x10db80: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x10db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x10db84: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10db88: 0x108200e9  beq         $a0, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x10DB88u;
    {
        const bool branch_taken_0x10db88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10db88) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DB90u;
    // 0x10db90: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x10db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x10db94: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10db98: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x10DB98u;
    {
        const bool branch_taken_0x10db98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10db98) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DBA0u;
    // 0x10dba0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x10dba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x10dba4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10dba8: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x10DBA8u;
    {
        const bool branch_taken_0x10dba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10dba8) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DBB0u;
    // 0x10dbb0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x10dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x10dbb4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10dbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10dbb8: 0x108200dd  beq         $a0, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x10DBB8u;
    {
        const bool branch_taken_0x10dbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10dbb8) {
            ctx->pc = 0x10DF30u;
            goto label_10df30;
        }
    }
    ctx->pc = 0x10DBC0u;
    // 0x10dbc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbc4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DBC4u;
    SET_GPR_U32(ctx, 31, 0x10DBCCu);
    ctx->pc = 0x10DBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBC4u;
            // 0x10dbc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBCCu; }
        if (ctx->pc != 0x10DBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBCCu; }
        if (ctx->pc != 0x10DBCCu) { return; }
    }
    ctx->pc = 0x10DBCCu;
label_10dbcc:
    // 0x10dbcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbd0: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DBD0u;
    SET_GPR_U32(ctx, 31, 0x10DBD8u);
    ctx->pc = 0x10DBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBD0u;
            // 0x10dbd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBD8u; }
        if (ctx->pc != 0x10DBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBD8u; }
        if (ctx->pc != 0x10DBD8u) { return; }
    }
    ctx->pc = 0x10DBD8u;
label_10dbd8:
    // 0x10dbd8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x10dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x10dbdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbe0: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DBE0u;
    SET_GPR_U32(ctx, 31, 0x10DBE8u);
    ctx->pc = 0x10DBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBE0u;
            // 0x10dbe4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBE8u; }
        if (ctx->pc != 0x10DBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBE8u; }
        if (ctx->pc != 0x10DBE8u) { return; }
    }
    ctx->pc = 0x10DBE8u;
label_10dbe8:
    // 0x10dbe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbec: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DBECu;
    SET_GPR_U32(ctx, 31, 0x10DBF4u);
    ctx->pc = 0x10DBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBECu;
            // 0x10dbf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBF4u; }
        if (ctx->pc != 0x10DBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBF4u; }
        if (ctx->pc != 0x10DBF4u) { return; }
    }
    ctx->pc = 0x10DBF4u;
label_10dbf4:
    // 0x10dbf4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10dbf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbfc: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DBFCu;
    SET_GPR_U32(ctx, 31, 0x10DC04u);
    ctx->pc = 0x10DC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBFCu;
            // 0x10dc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC04u; }
        if (ctx->pc != 0x10DC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC04u; }
        if (ctx->pc != 0x10DC04u) { return; }
    }
    ctx->pc = 0x10DC04u;
label_10dc04:
    // 0x10dc04: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x10dc08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc0c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC0Cu;
    SET_GPR_U32(ctx, 31, 0x10DC14u);
    ctx->pc = 0x10DC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC0Cu;
            // 0x10dc10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC14u; }
        if (ctx->pc != 0x10DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC14u; }
        if (ctx->pc != 0x10DC14u) { return; }
    }
    ctx->pc = 0x10DC14u;
label_10dc14:
    // 0x10dc14: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x10dc14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc1c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC1Cu;
    SET_GPR_U32(ctx, 31, 0x10DC24u);
    ctx->pc = 0x10DC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC1Cu;
            // 0x10dc20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC24u; }
        if (ctx->pc != 0x10DC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC24u; }
        if (ctx->pc != 0x10DC24u) { return; }
    }
    ctx->pc = 0x10DC24u;
label_10dc24:
    // 0x10dc24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10dc24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc2c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC2Cu;
    SET_GPR_U32(ctx, 31, 0x10DC34u);
    ctx->pc = 0x10DC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC2Cu;
            // 0x10dc30: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC34u; }
        if (ctx->pc != 0x10DC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC34u; }
        if (ctx->pc != 0x10DC34u) { return; }
    }
    ctx->pc = 0x10DC34u;
label_10dc34:
    // 0x10dc34: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x10dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x10dc38: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x10dc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x10dc3c: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x10dc3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10dc40: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x10dc40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10dc44: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x10dc44u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x10dc48: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10DC48u;
    {
        const bool branch_taken_0x10dc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC48u;
            // 0x10dc4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc48) {
            ctx->pc = 0x10DCD4u;
            goto label_10dcd4;
        }
    }
    ctx->pc = 0x10DC50u;
    // 0x10dc50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc54: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC54u;
    SET_GPR_U32(ctx, 31, 0x10DC5Cu);
    ctx->pc = 0x10DC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC54u;
            // 0x10dc58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC5Cu; }
        if (ctx->pc != 0x10DC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC5Cu; }
        if (ctx->pc != 0x10DC5Cu) { return; }
    }
    ctx->pc = 0x10DC5Cu;
label_10dc5c:
    // 0x10dc5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc60: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC60u;
    SET_GPR_U32(ctx, 31, 0x10DC68u);
    ctx->pc = 0x10DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC60u;
            // 0x10dc64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC68u; }
        if (ctx->pc != 0x10DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC68u; }
        if (ctx->pc != 0x10DC68u) { return; }
    }
    ctx->pc = 0x10DC68u;
label_10dc68:
    // 0x10dc68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc6c: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DC6Cu;
    SET_GPR_U32(ctx, 31, 0x10DC74u);
    ctx->pc = 0x10DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC6Cu;
            // 0x10dc70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC74u; }
        if (ctx->pc != 0x10DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC74u; }
        if (ctx->pc != 0x10DC74u) { return; }
    }
    ctx->pc = 0x10DC74u;
label_10dc74:
    // 0x10dc74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc78: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC78u;
    SET_GPR_U32(ctx, 31, 0x10DC80u);
    ctx->pc = 0x10DC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC78u;
            // 0x10dc7c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC80u; }
        if (ctx->pc != 0x10DC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC80u; }
        if (ctx->pc != 0x10DC80u) { return; }
    }
    ctx->pc = 0x10DC80u;
label_10dc80:
    // 0x10dc80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc84: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DC84u;
    SET_GPR_U32(ctx, 31, 0x10DC8Cu);
    ctx->pc = 0x10DC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC84u;
            // 0x10dc88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC8Cu; }
        if (ctx->pc != 0x10DC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC8Cu; }
        if (ctx->pc != 0x10DC8Cu) { return; }
    }
    ctx->pc = 0x10DC8Cu;
label_10dc8c:
    // 0x10dc8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc90: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DC90u;
    SET_GPR_U32(ctx, 31, 0x10DC98u);
    ctx->pc = 0x10DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC90u;
            // 0x10dc94: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC98u; }
        if (ctx->pc != 0x10DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC98u; }
        if (ctx->pc != 0x10DC98u) { return; }
    }
    ctx->pc = 0x10DC98u;
label_10dc98:
    // 0x10dc98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10dc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc9c: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DC9Cu;
    SET_GPR_U32(ctx, 31, 0x10DCA4u);
    ctx->pc = 0x10DCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC9Cu;
            // 0x10dca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCA4u; }
        if (ctx->pc != 0x10DCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCA4u; }
        if (ctx->pc != 0x10DCA4u) { return; }
    }
    ctx->pc = 0x10DCA4u;
label_10dca4:
    // 0x10dca4: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x10dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x10dca8: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x10dca8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x10dcac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x10dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x10dcb0: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x10dcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x10dcb4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x10dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x10dcb8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10dcbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10dcc0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10dcc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10dcc4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10dcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10dcc8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x10dcc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10dccc: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x10dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x10dcd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10dcd4:
    // 0x10dcd4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10DCD4u;
    {
        const bool branch_taken_0x10dcd4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCD4u;
            // 0x10dcd8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dcd4) {
            ctx->pc = 0x10DD60u;
            goto label_10dd60;
        }
    }
    ctx->pc = 0x10DCDCu;
    // 0x10dcdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dce0: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DCE0u;
    SET_GPR_U32(ctx, 31, 0x10DCE8u);
    ctx->pc = 0x10DCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCE0u;
            // 0x10dce4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCE8u; }
        if (ctx->pc != 0x10DCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCE8u; }
        if (ctx->pc != 0x10DCE8u) { return; }
    }
    ctx->pc = 0x10DCE8u;
label_10dce8:
    // 0x10dce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcec: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DCECu;
    SET_GPR_U32(ctx, 31, 0x10DCF4u);
    ctx->pc = 0x10DCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCECu;
            // 0x10dcf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCF4u; }
        if (ctx->pc != 0x10DCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCF4u; }
        if (ctx->pc != 0x10DCF4u) { return; }
    }
    ctx->pc = 0x10DCF4u;
label_10dcf4:
    // 0x10dcf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcf8: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DCF8u;
    SET_GPR_U32(ctx, 31, 0x10DD00u);
    ctx->pc = 0x10DCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCF8u;
            // 0x10dcfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD00u; }
        if (ctx->pc != 0x10DD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD00u; }
        if (ctx->pc != 0x10DD00u) { return; }
    }
    ctx->pc = 0x10DD00u;
label_10dd00:
    // 0x10dd00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd04: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DD04u;
    SET_GPR_U32(ctx, 31, 0x10DD0Cu);
    ctx->pc = 0x10DD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD04u;
            // 0x10dd08: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD0Cu; }
        if (ctx->pc != 0x10DD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD0Cu; }
        if (ctx->pc != 0x10DD0Cu) { return; }
    }
    ctx->pc = 0x10DD0Cu;
label_10dd0c:
    // 0x10dd0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10dd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd10: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DD10u;
    SET_GPR_U32(ctx, 31, 0x10DD18u);
    ctx->pc = 0x10DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD10u;
            // 0x10dd14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD18u; }
        if (ctx->pc != 0x10DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD18u; }
        if (ctx->pc != 0x10DD18u) { return; }
    }
    ctx->pc = 0x10DD18u;
label_10dd18:
    // 0x10dd18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd1c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DD1Cu;
    SET_GPR_U32(ctx, 31, 0x10DD24u);
    ctx->pc = 0x10DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD1Cu;
            // 0x10dd20: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD24u; }
        if (ctx->pc != 0x10DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD24u; }
        if (ctx->pc != 0x10DD24u) { return; }
    }
    ctx->pc = 0x10DD24u;
label_10dd24:
    // 0x10dd24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10dd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd28: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DD28u;
    SET_GPR_U32(ctx, 31, 0x10DD30u);
    ctx->pc = 0x10DD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD28u;
            // 0x10dd2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD30u; }
        if (ctx->pc != 0x10DD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD30u; }
        if (ctx->pc != 0x10DD30u) { return; }
    }
    ctx->pc = 0x10DD30u;
label_10dd30:
    // 0x10dd30: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x10dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x10dd34: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x10dd34u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x10dd38: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x10dd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x10dd3c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x10dd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x10dd40: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x10dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x10dd44: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10dd44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10dd48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10dd4c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10dd4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10dd50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10dd54: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x10dd54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10dd58: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x10dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x10dd5c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x10dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_10dd60:
    // 0x10dd60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10dd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dd64: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DD64u;
    {
        const bool branch_taken_0x10dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD64u;
            // 0x10dd68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd64) {
            ctx->pc = 0x10DD74u;
            goto label_10dd74;
        }
    }
    ctx->pc = 0x10DD6Cu;
    // 0x10dd6c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DD6Cu;
    SET_GPR_U32(ctx, 31, 0x10DD74u);
    ctx->pc = 0x10DD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD6Cu;
            // 0x10dd70: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD74u; }
        if (ctx->pc != 0x10DD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD74u; }
        if (ctx->pc != 0x10DD74u) { return; }
    }
    ctx->pc = 0x10DD74u;
label_10dd74:
    // 0x10dd74: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DD74u;
    {
        const bool branch_taken_0x10dd74 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD74u;
            // 0x10dd78: 0x3be1021  addu        $v0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd74) {
            ctx->pc = 0x10DD88u;
            goto label_10dd88;
        }
    }
    ctx->pc = 0x10DD7Cu;
    // 0x10dd7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd80: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DD80u;
    SET_GPR_U32(ctx, 31, 0x10DD88u);
    ctx->pc = 0x10DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD80u;
            // 0x10dd84: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD88u; }
        if (ctx->pc != 0x10DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD88u; }
        if (ctx->pc != 0x10DD88u) { return; }
    }
    ctx->pc = 0x10DD88u;
label_10dd88:
    // 0x10dd88: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x10DD88u;
    {
        const bool branch_taken_0x10dd88 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x10DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD88u;
            // 0x10dd8c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd88) {
            ctx->pc = 0x10DEA0u;
            goto label_10dea0;
        }
    }
    ctx->pc = 0x10DD90u;
    // 0x10dd90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd94: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DD94u;
    SET_GPR_U32(ctx, 31, 0x10DD9Cu);
    ctx->pc = 0x10DD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD94u;
            // 0x10dd98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD9Cu; }
        if (ctx->pc != 0x10DD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD9Cu; }
        if (ctx->pc != 0x10DD9Cu) { return; }
    }
    ctx->pc = 0x10DD9Cu;
label_10dd9c:
    // 0x10dd9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dda0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dda4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DDA4u;
    SET_GPR_U32(ctx, 31, 0x10DDACu);
    ctx->pc = 0x10DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDA4u;
            // 0x10dda8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDACu; }
        if (ctx->pc != 0x10DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDACu; }
        if (ctx->pc != 0x10DDACu) { return; }
    }
    ctx->pc = 0x10DDACu;
label_10ddac:
    // 0x10ddac: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x10ddacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddb4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DDB4u;
    SET_GPR_U32(ctx, 31, 0x10DDBCu);
    ctx->pc = 0x10DDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDB4u;
            // 0x10ddb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDBCu; }
        if (ctx->pc != 0x10DDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDBCu; }
        if (ctx->pc != 0x10DDBCu) { return; }
    }
    ctx->pc = 0x10DDBCu;
label_10ddbc:
    // 0x10ddbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ddbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddc4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DDC4u;
    SET_GPR_U32(ctx, 31, 0x10DDCCu);
    ctx->pc = 0x10DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDC4u;
            // 0x10ddc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDCCu; }
        if (ctx->pc != 0x10DDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDCCu; }
        if (ctx->pc != 0x10DDCCu) { return; }
    }
    ctx->pc = 0x10DDCCu;
label_10ddcc:
    // 0x10ddcc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10ddccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddd4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DDD4u;
    SET_GPR_U32(ctx, 31, 0x10DDDCu);
    ctx->pc = 0x10DDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDD4u;
            // 0x10ddd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDDCu; }
        if (ctx->pc != 0x10DDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDDCu; }
        if (ctx->pc != 0x10DDDCu) { return; }
    }
    ctx->pc = 0x10DDDCu;
label_10dddc:
    // 0x10dddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dde0: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DDE0u;
    SET_GPR_U32(ctx, 31, 0x10DDE8u);
    ctx->pc = 0x10DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDE0u;
            // 0x10dde4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDE8u; }
        if (ctx->pc != 0x10DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDE8u; }
        if (ctx->pc != 0x10DDE8u) { return; }
    }
    ctx->pc = 0x10DDE8u;
label_10dde8:
    // 0x10dde8: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x10DDE8u;
    {
        const bool branch_taken_0x10dde8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x10DDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDE8u;
            // 0x10ddec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dde8) {
            ctx->pc = 0x10DE14u;
            goto label_10de14;
        }
    }
    ctx->pc = 0x10DDF0u;
    // 0x10ddf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddf4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DDF4u;
    SET_GPR_U32(ctx, 31, 0x10DDFCu);
    ctx->pc = 0x10DDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DDF4u;
            // 0x10ddf8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDFCu; }
        if (ctx->pc != 0x10DDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DDFCu; }
        if (ctx->pc != 0x10DDFCu) { return; }
    }
    ctx->pc = 0x10DDFCu;
label_10ddfc:
    // 0x10ddfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de00: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DE00u;
    SET_GPR_U32(ctx, 31, 0x10DE08u);
    ctx->pc = 0x10DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE00u;
            // 0x10de04: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE08u; }
        if (ctx->pc != 0x10DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE08u; }
        if (ctx->pc != 0x10DE08u) { return; }
    }
    ctx->pc = 0x10DE08u;
label_10de08:
    // 0x10de08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10de08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de0c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DE0Cu;
    SET_GPR_U32(ctx, 31, 0x10DE14u);
    ctx->pc = 0x10DE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE0Cu;
            // 0x10de10: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE14u; }
        if (ctx->pc != 0x10DE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE14u; }
        if (ctx->pc != 0x10DE14u) { return; }
    }
    ctx->pc = 0x10DE14u;
label_10de14:
    // 0x10de14: 0x17d50006  bne         $fp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DE14u;
    {
        const bool branch_taken_0x10de14 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x10DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE14u;
            // 0x10de18: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de14) {
            ctx->pc = 0x10DE30u;
            goto label_10de30;
        }
    }
    ctx->pc = 0x10DE1Cu;
    // 0x10de1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de20: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10DE20u;
    SET_GPR_U32(ctx, 31, 0x10DE28u);
    ctx->pc = 0x10DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE20u;
            // 0x10de24: 0x24a50858  addiu       $a1, $a1, 0x858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE28u; }
        if (ctx->pc != 0x10DE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE28u; }
        if (ctx->pc != 0x10DE28u) { return; }
    }
    ctx->pc = 0x10DE28u;
label_10de28:
    // 0x10de28: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x10DE28u;
    {
        const bool branch_taken_0x10de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE28u;
            // 0x10de2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de28) {
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10DE30u;
label_10de30:
    // 0x10de30: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DE30u;
    {
        const bool branch_taken_0x10de30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x10DE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE30u;
            // 0x10de34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de30) {
            ctx->pc = 0x10DE40u;
            goto label_10de40;
        }
    }
    ctx->pc = 0x10DE38u;
    // 0x10de38: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DE38u;
    SET_GPR_U32(ctx, 31, 0x10DE40u);
    ctx->pc = 0x10DE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE38u;
            // 0x10de3c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE40u; }
        if (ctx->pc != 0x10DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE40u; }
        if (ctx->pc != 0x10DE40u) { return; }
    }
    ctx->pc = 0x10DE40u;
label_10de40:
    // 0x10de40: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DE40u;
    {
        const bool branch_taken_0x10de40 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x10DE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE40u;
            // 0x10de44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de40) {
            ctx->pc = 0x10DE50u;
            goto label_10de50;
        }
    }
    ctx->pc = 0x10DE48u;
    // 0x10de48: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DE48u;
    SET_GPR_U32(ctx, 31, 0x10DE50u);
    ctx->pc = 0x10DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE48u;
            // 0x10de4c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE50u; }
        if (ctx->pc != 0x10DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE50u; }
        if (ctx->pc != 0x10DE50u) { return; }
    }
    ctx->pc = 0x10DE50u;
label_10de50:
    // 0x10de50: 0x16350013  bne         $s1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x10DE50u;
    {
        const bool branch_taken_0x10de50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x10DE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE50u;
            // 0x10de54: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de50) {
            ctx->pc = 0x10DEA0u;
            goto label_10dea0;
        }
    }
    ctx->pc = 0x10DE58u;
    // 0x10de58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10de58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de5c: 0xc04345c  jal         func_10D170
    ctx->pc = 0x10DE5Cu;
    SET_GPR_U32(ctx, 31, 0x10DE64u);
    ctx->pc = 0x10DE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE5Cu;
            // 0x10de60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D170u;
    if (runtime->hasFunction(0x10D170u)) {
        auto targetFn = runtime->lookupFunction(0x10D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE64u; }
        if (ctx->pc != 0x10DE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x10d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE64u; }
        if (ctx->pc != 0x10DE64u) { return; }
    }
    ctx->pc = 0x10DE64u;
label_10de64:
    // 0x10de64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10de64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de68: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DE68u;
    SET_GPR_U32(ctx, 31, 0x10DE70u);
    ctx->pc = 0x10DE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE68u;
            // 0x10de6c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE70u; }
        if (ctx->pc != 0x10DE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE70u; }
        if (ctx->pc != 0x10DE70u) { return; }
    }
    ctx->pc = 0x10DE70u;
label_10de70:
    // 0x10de70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10de70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de74: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10DE74u;
    {
        const bool branch_taken_0x10de74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE74u;
            // 0x10de78: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de74) {
            ctx->pc = 0x10DEA0u;
            goto label_10dea0;
        }
    }
    ctx->pc = 0x10DE7Cu;
    // 0x10de7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10de80:
    // 0x10de80: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DE80u;
    SET_GPR_U32(ctx, 31, 0x10DE88u);
    ctx->pc = 0x10DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE80u;
            // 0x10de84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE88u; }
        if (ctx->pc != 0x10DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DE88u; }
        if (ctx->pc != 0x10DE88u) { return; }
    }
    ctx->pc = 0x10DE88u;
label_10de88:
    // 0x10de88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10de88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10de8c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x10de8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x10de90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10DE90u;
    {
        const bool branch_taken_0x10de90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE90u;
            // 0x10de94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de90) {
            ctx->pc = 0x10DE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10de80;
        }
    }
    ctx->pc = 0x10DE98u;
    // 0x10de98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DE98u;
    {
        const bool branch_taken_0x10de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DE98u;
            // 0x10de9c: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de98) {
            ctx->pc = 0x10DEA4u;
            goto label_10dea4;
        }
    }
    ctx->pc = 0x10DEA0u;
label_10dea0:
    // 0x10dea0: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x10dea0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_10dea4:
    // 0x10dea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x10dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10dea8: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x10dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x10deac: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x10deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x10deb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10deb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10deb4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x10deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10deb8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DEB8u;
    {
        const bool branch_taken_0x10deb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10deb8) {
            ctx->pc = 0x10DEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEB8u;
            // 0x10debc: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10DECCu;
            goto label_10decc;
        }
    }
    ctx->pc = 0x10DEC0u;
    // 0x10dec0: 0xc04346e  jal         func_10D1B8
    ctx->pc = 0x10DEC0u;
    SET_GPR_U32(ctx, 31, 0x10DEC8u);
    ctx->pc = 0x10DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEC0u;
            // 0x10dec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D1B8u;
    if (runtime->hasFunction(0x10D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DEC8u; }
        if (ctx->pc != 0x10DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x10d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DEC8u; }
        if (ctx->pc != 0x10DEC8u) { return; }
    }
    ctx->pc = 0x10DEC8u;
label_10dec8:
    // 0x10dec8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x10dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_10decc:
    // 0x10decc: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x10deccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x10ded0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x10ded0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x10ded4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10ded8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x10ded8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10dedc: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x10dedcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10dee0: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x10dee4: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x10dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x10dee8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x10dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10deec: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DEECu;
    {
        const bool branch_taken_0x10deec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEECu;
            // 0x10def0: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10deec) {
            ctx->pc = 0x10DF18u;
            goto label_10df18;
        }
    }
    ctx->pc = 0x10DEF4u;
    // 0x10def4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10def8: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DEF8u;
    SET_GPR_U32(ctx, 31, 0x10DF00u);
    ctx->pc = 0x10DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEF8u;
            // 0x10defc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF00u; }
        if (ctx->pc != 0x10DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF00u; }
        if (ctx->pc != 0x10DF00u) { return; }
    }
    ctx->pc = 0x10DF00u;
label_10df00:
    // 0x10df00: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x10df00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10df04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10df08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10df0c: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x10df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x10df10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10df10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10df14: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x10df14u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_10df18:
    // 0x10df18: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x10DF18u;
    {
        const bool branch_taken_0x10df18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF18u;
            // 0x10df1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df18) {
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10DF20u;
    // 0x10df20: 0xc04346e  jal         func_10D1B8
    ctx->pc = 0x10DF20u;
    SET_GPR_U32(ctx, 31, 0x10DF28u);
    ctx->pc = 0x10DF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF20u;
            // 0x10df24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D1B8u;
    if (runtime->hasFunction(0x10D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF28u; }
        if (ctx->pc != 0x10DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x10d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DF28u; }
        if (ctx->pc != 0x10DF28u) { return; }
    }
    ctx->pc = 0x10DF28u;
label_10df28:
    // 0x10df28: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x10DF28u;
    {
        const bool branch_taken_0x10df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF28u;
            // 0x10df2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df28) {
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10DF30u;
label_10df30:
    // 0x10df30: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x10df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x10df34: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df38: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10DF38u;
    {
        const bool branch_taken_0x10df38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df38) {
            ctx->pc = 0x10DFA0u;
            goto label_10dfa0;
        }
    }
    ctx->pc = 0x10DF40u;
    // 0x10df40: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x10df40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x10df44: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df48: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10DF48u;
    {
        const bool branch_taken_0x10df48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df48) {
            ctx->pc = 0x10DFA8u;
            goto label_10dfa8;
        }
    }
    ctx->pc = 0x10DF50u;
    // 0x10df50: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x10df50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x10df54: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df58: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10DF58u;
    {
        const bool branch_taken_0x10df58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df58) {
            ctx->pc = 0x10DFA0u;
            goto label_10dfa0;
        }
    }
    ctx->pc = 0x10DF60u;
    // 0x10df60: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x10df60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x10df64: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df68: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10DF68u;
    {
        const bool branch_taken_0x10df68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df68) {
            ctx->pc = 0x10DFA0u;
            goto label_10dfa0;
        }
    }
    ctx->pc = 0x10DF70u;
    // 0x10df70: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x10df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x10df74: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df78: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DF78u;
    {
        const bool branch_taken_0x10df78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df78) {
            ctx->pc = 0x10DFA0u;
            goto label_10dfa0;
        }
    }
    ctx->pc = 0x10DF80u;
    // 0x10df80: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x10df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x10df84: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df88: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DF88u;
    {
        const bool branch_taken_0x10df88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df88) {
            ctx->pc = 0x10DFA0u;
            goto label_10dfa0;
        }
    }
    ctx->pc = 0x10DF90u;
    // 0x10df90: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x10df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x10df94: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10df98: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10DF98u;
    {
        const bool branch_taken_0x10df98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10df98) {
            ctx->pc = 0x10DFF0u;
            goto label_10dff0;
        }
    }
    ctx->pc = 0x10DFA0u;
label_10dfa0:
    // 0x10dfa0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x10dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x10dfa4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10dfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_10dfa8:
    // 0x10dfa8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DFA8u;
    {
        const bool branch_taken_0x10dfa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFA8u;
            // 0x10dfac: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfa8) {
            ctx->pc = 0x10DFD4u;
            goto label_10dfd4;
        }
    }
    ctx->pc = 0x10DFB0u;
    // 0x10dfb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfb4: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DFB4u;
    SET_GPR_U32(ctx, 31, 0x10DFBCu);
    ctx->pc = 0x10DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFB4u;
            // 0x10dfb8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFBCu; }
        if (ctx->pc != 0x10DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFBCu; }
        if (ctx->pc != 0x10DFBCu) { return; }
    }
    ctx->pc = 0x10DFBCu;
label_10dfbc:
    // 0x10dfbc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x10dfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x10dfc0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x10dfc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10dfc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10dfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10dfc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10dfcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10dfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10dfd0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x10dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_10dfd4:
    // 0x10dfd4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10DFD4u;
    {
        const bool branch_taken_0x10dfd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFD4u;
            // 0x10dfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfd4) {
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10DFDCu;
    // 0x10dfdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfe0: 0xc04346e  jal         func_10D1B8
    ctx->pc = 0x10DFE0u;
    SET_GPR_U32(ctx, 31, 0x10DFE8u);
    ctx->pc = 0x10DFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFE0u;
            // 0x10dfe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D1B8u;
    if (runtime->hasFunction(0x10D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFE8u; }
        if (ctx->pc != 0x10DFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x10d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFE8u; }
        if (ctx->pc != 0x10DFE8u) { return; }
    }
    ctx->pc = 0x10DFE8u;
label_10dfe8:
    // 0x10dfe8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10DFE8u;
    {
        const bool branch_taken_0x10dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFE8u;
            // 0x10dfec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfe8) {
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10DFF0u;
label_10dff0:
    // 0x10dff0: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x10dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x10dff4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10dff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10dff8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DFF8u;
    {
        const bool branch_taken_0x10dff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFF8u;
            // 0x10dffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dff8) {
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10E000u;
    // 0x10e000: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x10e000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10e004: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E004u;
    {
        const bool branch_taken_0x10e004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E004u;
            // 0x10e008: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e004) {
            ctx->pc = 0x10E01Cu;
            goto label_10e01c;
        }
    }
    ctx->pc = 0x10E00Cu;
    // 0x10e00c: 0xc04346e  jal         func_10D1B8
    ctx->pc = 0x10E00Cu;
    SET_GPR_U32(ctx, 31, 0x10E014u);
    ctx->pc = 0x10E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E00Cu;
            // 0x10e010: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D1B8u;
    if (runtime->hasFunction(0x10D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E014u; }
        if (ctx->pc != 0x10E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x10d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E014u; }
        if (ctx->pc != 0x10E014u) { return; }
    }
    ctx->pc = 0x10E014u;
label_10e014:
    // 0x10e014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e018:
    // 0x10e018: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x10e018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_10e01c:
    // 0x10e01c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10e01cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10e020: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x10e020u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10e024: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10e024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10e028: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10e028u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10e02c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10e02cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10e030: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10e030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e034: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10e034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e038: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10e038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e03c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10e03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e040: 0x3e00008  jr          $ra
    ctx->pc = 0x10E040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E040u;
            // 0x10e044: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E048u;
}
