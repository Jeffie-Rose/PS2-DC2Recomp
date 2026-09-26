#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSaveInit__FP9mgCMemoryPii
// Address: 0x2c51d0 - 0x2c585c
void MenuSaveInit__FP9mgCMemoryPii_0x2c51d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSaveInit__FP9mgCMemoryPii_0x2c51d0");
#endif

    switch (ctx->pc) {
        case 0x2c5218u: goto label_2c5218;
        case 0x2c5228u: goto label_2c5228;
        case 0x2c5234u: goto label_2c5234;
        case 0x2c5244u: goto label_2c5244;
        case 0x2c52dcu: goto label_2c52dc;
        case 0x2c52e8u: goto label_2c52e8;
        case 0x2c52f8u: goto label_2c52f8;
        case 0x2c5308u: goto label_2c5308;
        case 0x2c5310u: goto label_2c5310;
        case 0x2c5320u: goto label_2c5320;
        case 0x2c532cu: goto label_2c532c;
        case 0x2c5334u: goto label_2c5334;
        case 0x2c5348u: goto label_2c5348;
        case 0x2c5354u: goto label_2c5354;
        case 0x2c53a0u: goto label_2c53a0;
        case 0x2c53ccu: goto label_2c53cc;
        case 0x2c53ecu: goto label_2c53ec;
        case 0x2c5400u: goto label_2c5400;
        case 0x2c5420u: goto label_2c5420;
        case 0x2c5434u: goto label_2c5434;
        case 0x2c5454u: goto label_2c5454;
        case 0x2c546cu: goto label_2c546c;
        case 0x2c5474u: goto label_2c5474;
        case 0x2c5488u: goto label_2c5488;
        case 0x2c5490u: goto label_2c5490;
        case 0x2c54a0u: goto label_2c54a0;
        case 0x2c54b0u: goto label_2c54b0;
        case 0x2c54c8u: goto label_2c54c8;
        case 0x2c54d8u: goto label_2c54d8;
        case 0x2c54e4u: goto label_2c54e4;
        case 0x2c54fcu: goto label_2c54fc;
        case 0x2c550cu: goto label_2c550c;
        case 0x2c5518u: goto label_2c5518;
        case 0x2c5530u: goto label_2c5530;
        case 0x2c5540u: goto label_2c5540;
        case 0x2c554cu: goto label_2c554c;
        case 0x2c5564u: goto label_2c5564;
        case 0x2c5574u: goto label_2c5574;
        case 0x2c5590u: goto label_2c5590;
        case 0x2c55a0u: goto label_2c55a0;
        case 0x2c55b4u: goto label_2c55b4;
        case 0x2c55c4u: goto label_2c55c4;
        case 0x2c55ccu: goto label_2c55cc;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c55e8u: goto label_2c55e8;
        case 0x2c55f8u: goto label_2c55f8;
        case 0x2c5618u: goto label_2c5618;
        case 0x2c5624u: goto label_2c5624;
        case 0x2c5658u: goto label_2c5658;
        case 0x2c566cu: goto label_2c566c;
        case 0x2c5680u: goto label_2c5680;
        case 0x2c5698u: goto label_2c5698;
        case 0x2c56a8u: goto label_2c56a8;
        case 0x2c56c0u: goto label_2c56c0;
        case 0x2c56c8u: goto label_2c56c8;
        case 0x2c56d8u: goto label_2c56d8;
        case 0x2c56f0u: goto label_2c56f0;
        case 0x2c5708u: goto label_2c5708;
        case 0x2c5720u: goto label_2c5720;
        case 0x2c5738u: goto label_2c5738;
        case 0x2c5750u: goto label_2c5750;
        case 0x2c576cu: goto label_2c576c;
        case 0x2c5788u: goto label_2c5788;
        case 0x2c57b0u: goto label_2c57b0;
        case 0x2c57bcu: goto label_2c57bc;
        case 0x2c57d4u: goto label_2c57d4;
        case 0x2c57e4u: goto label_2c57e4;
        case 0x2c57f0u: goto label_2c57f0;
        case 0x2c5814u: goto label_2c5814;
        case 0x2c582cu: goto label_2c582c;
        case 0x2c583cu: goto label_2c583c;
        default: break;
    }

    ctx->pc = 0x2c51d0u;

    // 0x2c51d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c51d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c51d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c51d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c51d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c51dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c51dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c51e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c51e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c51e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c51e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c51e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c51ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c51f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c51f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51f4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2c51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c51f8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2c51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2c51fc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2c51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c5200: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2c5200u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c5204: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c5204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c5208: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c520c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2c520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5210: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2C5210u;
    SET_GPR_U32(ctx, 31, 0x2C5218u);
    ctx->pc = 0x2C5214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5210u;
            // 0x2c5214: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5218u; }
        if (ctx->pc != 0x2C5218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5218u; }
        if (ctx->pc != 0x2C5218u) { return; }
    }
    ctx->pc = 0x2C5218u;
label_2c5218:
    // 0x2c5218: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c521c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2c521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2c5220: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C5220u;
    SET_GPR_U32(ctx, 31, 0x2C5228u);
    ctx->pc = 0x2C5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5220u;
            // 0x2c5224: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5228u; }
        if (ctx->pc != 0x2C5228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5228u; }
        if (ctx->pc != 0x2C5228u) { return; }
    }
    ctx->pc = 0x2C5228u;
label_2c5228:
    // 0x2c5228: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x2c5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x2c522c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C522Cu;
    SET_GPR_U32(ctx, 31, 0x2C5234u);
    ctx->pc = 0x2C5230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C522Cu;
            // 0x2c5230: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5234u; }
        if (ctx->pc != 0x2C5234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5234u; }
        if (ctx->pc != 0x2C5234u) { return; }
    }
    ctx->pc = 0x2C5234u;
label_2c5234:
    // 0x2c5234: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C5234u;
    {
        const bool branch_taken_0x2c5234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5234u;
            // 0x2c5238: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5234) {
            ctx->pc = 0x2C52C8u;
            goto label_2c52c8;
        }
    }
    ctx->pc = 0x2C523Cu;
    // 0x2c523c: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x2C523Cu;
    SET_GPR_U32(ctx, 31, 0x2C5244u);
    ctx->pc = 0x2C5240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C523Cu;
            // 0x2c5240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5244u; }
        if (ctx->pc != 0x2C5244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5244u; }
        if (ctx->pc != 0x2C5244u) { return; }
    }
    ctx->pc = 0x2C5244u;
label_2c5244:
    // 0x2c5244: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2c5244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2c5248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c524c: 0x244262d0  addiu       $v0, $v0, 0x62D0
    ctx->pc = 0x2c524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25296));
    // 0x2c5250: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x2c5250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x2c5254: 0xa2030110  sb          $v1, 0x110($s0)
    ctx->pc = 0x2c5254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5258: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c525c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x2c525cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x2c5260: 0xa200011c  sb          $zero, 0x11C($s0)
    ctx->pc = 0x2c5260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5264: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2c5264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2c5268: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x2c5268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x2c526c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x2c526cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x2c5270: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x2c5270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x2c5274: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x2c5274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x2c5278: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x2c5278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x2c527c: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x2c527cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x2c5280: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x2c5280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x2c5284: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x2c5284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x2c5288: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x2c5288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x2c528c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x2c528cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x2c5290: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x2c5290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x2c5294: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x2c5294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x2c5298: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x2c5298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x2c529c: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x2c529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x2c52a0: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x2c52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x2c52a4: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2c52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x2c52a8: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x2c52a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x2c52ac: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x2c52acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x2c52b0: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x2c52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x2c52b4: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x2c52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x2c52b8: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x2c52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x2c52bc: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x2c52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
    // 0x2c52c0: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x2c52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x2c52c4: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x2c52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_2c52c8:
    // 0x2c52c8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c52cc: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x2c52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x2c52d0: 0x2484d260  addiu       $a0, $a0, -0x2DA0
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
    // 0x2c52d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C52D4u;
    SET_GPR_U32(ctx, 31, 0x2C52DCu);
    ctx->pc = 0x2C52D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52D4u;
            // 0x2c52d8: 0xaf909cc8  sw          $s0, -0x6338($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941896), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52DCu; }
        if (ctx->pc != 0x2C52DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52DCu; }
        if (ctx->pc != 0x2C52DCu) { return; }
    }
    ctx->pc = 0x2C52DCu;
label_2c52dc:
    // 0x2c52dc: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x2c52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x2c52e0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C52E0u;
    SET_GPR_U32(ctx, 31, 0x2C52E8u);
    ctx->pc = 0x2C52E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52E0u;
            // 0x2c52e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52E8u; }
        if (ctx->pc != 0x2C52E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52E8u; }
        if (ctx->pc != 0x2C52E8u) { return; }
    }
    ctx->pc = 0x2C52E8u;
label_2c52e8:
    // 0x2c52e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C52E8u;
    {
        const bool branch_taken_0x2c52e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52e8) {
            ctx->pc = 0x2C52F8u;
            goto label_2c52f8;
        }
    }
    ctx->pc = 0x2C52F0u;
    // 0x2c52f0: 0xc0bc598  jal         func_2F1660
    ctx->pc = 0x2C52F0u;
    SET_GPR_U32(ctx, 31, 0x2C52F8u);
    ctx->pc = 0x2C52F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52F0u;
            // 0x2c52f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1660u;
    if (runtime->hasFunction(0x2F1660u)) {
        auto targetFn = runtime->lookupFunction(0x2F1660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52F8u; }
        if (ctx->pc != 0x2C52F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CMemoryCardManagerFv_0x2f1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52F8u; }
        if (ctx->pc != 0x2C52F8u) { return; }
    }
    ctx->pc = 0x2C52F8u;
label_2c52f8:
    // 0x2c52f8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c52f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c52fc: 0xaf829cc4  sw          $v0, -0x633C($gp)
    ctx->pc = 0x2c52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941892), GPR_U32(ctx, 2));
    // 0x2c5300: 0xc0aff14  jal         func_2BFC50
    ctx->pc = 0x2C5300u;
    SET_GPR_U32(ctx, 31, 0x2C5308u);
    ctx->pc = 0x2C5304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5300u;
            // 0x2c5304: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC50u;
    if (runtime->hasFunction(0x2BFC50u)) {
        auto targetFn = runtime->lookupFunction(0x2BFC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5308u; }
        if (ctx->pc != 0x2C5308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuReturnMsg__FP9mgCMemory_0x2bfc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5308u; }
        if (ctx->pc != 0x2C5308u) { return; }
    }
    ctx->pc = 0x2C5308u;
label_2c5308:
    // 0x2c5308: 0xc0aff4c  jal         func_2BFD30
    ctx->pc = 0x2C5308u;
    SET_GPR_U32(ctx, 31, 0x2C5310u);
    ctx->pc = 0x2C530Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5308u;
            // 0x2c530c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFD30u;
    if (runtime->hasFunction(0x2BFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2BFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5310u; }
        if (ctx->pc != 0x2C5310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuReturnMsgCtrl__Fi_0x2bfd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5310u; }
        if (ctx->pc != 0x2C5310u) { return; }
    }
    ctx->pc = 0x2C5310u;
label_2c5310:
    // 0x2c5310: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5314: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2c5314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2c5318: 0xc0bc5a4  jal         func_2F1690
    ctx->pc = 0x2C5318u;
    SET_GPR_U32(ctx, 31, 0x2C5320u);
    ctx->pc = 0x2C531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5318u;
            // 0x2c531c: 0x24a5d260  addiu       $a1, $a1, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1690u;
    if (runtime->hasFunction(0x2F1690u)) {
        auto targetFn = runtime->lookupFunction(0x2F1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5320u; }
        if (ctx->pc != 0x2C5320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5320u; }
        if (ctx->pc != 0x2C5320u) { return; }
    }
    ctx->pc = 0x2C5320u;
label_2c5320:
    // 0x2c5320: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5324: 0xc0bc66c  jal         func_2F19B0
    ctx->pc = 0x2C5324u;
    SET_GPR_U32(ctx, 31, 0x2C532Cu);
    ctx->pc = 0x2C5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5324u;
            // 0x2c5328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19B0u;
    if (runtime->hasFunction(0x2F19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C532Cu; }
        if (ctx->pc != 0x2C532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_Album__18CMemoryCardManagerFPc_0x2f19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C532Cu; }
        if (ctx->pc != 0x2C532Cu) { return; }
    }
    ctx->pc = 0x2C532Cu;
label_2c532c:
    // 0x2c532c: 0xc0bc650  jal         func_2F1940
    ctx->pc = 0x2C532Cu;
    SET_GPR_U32(ctx, 31, 0x2C5334u);
    ctx->pc = 0x2C5330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C532Cu;
            // 0x2c5330: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1940u;
    if (runtime->hasFunction(0x2F1940u)) {
        auto targetFn = runtime->lookupFunction(0x2F1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5334u; }
        if (ctx->pc != 0x2C5334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitForMC__18CMemoryCardManagerFv_0x2f1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5334u; }
        if (ctx->pc != 0x2C5334u) { return; }
    }
    ctx->pc = 0x2C5334u;
label_2c5334:
    // 0x2c5334: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2C5334u;
    {
        const bool branch_taken_0x2c5334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5334u;
            // 0x2c5338: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5334) {
            ctx->pc = 0x2C583Cu;
            goto label_2c583c;
        }
    }
    ctx->pc = 0x2C533Cu;
    // 0x2c533c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2c533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2c5340: 0xc04e704  jal         func_139C10
    ctx->pc = 0x2C5340u;
    SET_GPR_U32(ctx, 31, 0x2C5348u);
    ctx->pc = 0x2C5344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5340u;
            // 0x2c5344: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5348u; }
        if (ctx->pc != 0x2C5348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5348u; }
        if (ctx->pc != 0x2C5348u) { return; }
    }
    ctx->pc = 0x2C5348u;
label_2c5348:
    // 0x2c5348: 0x8f849cc8  lw          $a0, -0x6338($gp)
    ctx->pc = 0x2c5348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c534c: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2C534Cu;
    SET_GPR_U32(ctx, 31, 0x2C5354u);
    ctx->pc = 0x2C5350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C534Cu;
            // 0x2c5350: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5354u; }
        if (ctx->pc != 0x2C5354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5354u; }
        if (ctx->pc != 0x2C5354u) { return; }
    }
    ctx->pc = 0x2C5354u;
label_2c5354:
    // 0x2c5354: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c5354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5358: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5358u;
    {
        const bool branch_taken_0x2c5358 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C535Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5358u;
            // 0x2c535c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5358) {
            ctx->pc = 0x2C536Cu;
            goto label_2c536c;
        }
    }
    ctx->pc = 0x2C5360u;
    // 0x2c5360: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5364: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x2c5364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x2c5368: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c536c:
    // 0x2c536c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C536Cu;
    {
        const bool branch_taken_0x2c536c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C536Cu;
            // 0x2c5370: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c536c) {
            ctx->pc = 0x2C5384u;
            goto label_2c5384;
        }
    }
    ctx->pc = 0x2C5374u;
    // 0x2c5374: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c5374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c537c: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x2c537cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x2c5380: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2c5380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2c5384:
    // 0x2c5384: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5384u;
    {
        const bool branch_taken_0x2c5384 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5384u;
            // 0x2c5388: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5384) {
            ctx->pc = 0x2C5398u;
            goto label_2c5398;
        }
    }
    ctx->pc = 0x2C538Cu;
    // 0x2c538c: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5394: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x2c5394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
label_2c5398:
    // 0x2c5398: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2C5398u;
    SET_GPR_U32(ctx, 31, 0x2C53A0u);
    ctx->pc = 0x2C539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5398u;
            // 0x2c539c: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53A0u; }
        if (ctx->pc != 0x2C53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53A0u; }
        if (ctx->pc != 0x2C53A0u) { return; }
    }
    ctx->pc = 0x2C53A0u;
label_2c53a0:
    // 0x2c53a0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c53a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c53a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2c53a8: 0x8c23d284  lw          $v1, -0x2D7C($at)
    ctx->pc = 0x2c53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955652)));
    // 0x2c53ac: 0x2484fcf8  addiu       $a0, $a0, -0x308
    ctx->pc = 0x2c53acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966520));
    // 0x2c53b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c53b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c53b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c53b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c53b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c53bc: 0x8c22d280  lw          $v0, -0x2D80($at)
    ctx->pc = 0x2c53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955648)));
    // 0x2c53c0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2c53c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c53c4: 0xc094440  jal         func_251100
    ctx->pc = 0x2C53C4u;
    SET_GPR_U32(ctx, 31, 0x2C53CCu);
    ctx->pc = 0x2C53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53C4u;
            // 0x2c53c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53CCu; }
        if (ctx->pc != 0x2C53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53CCu; }
        if (ctx->pc != 0x2C53CCu) { return; }
    }
    ctx->pc = 0x2C53CCu;
label_2c53cc:
    // 0x2c53cc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c53ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c53d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C53D0u;
    {
        const bool branch_taken_0x2c53d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53D0u;
            // 0x2c53d4: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53d0) {
            ctx->pc = 0x2C53E0u;
            goto label_2c53e0;
        }
    }
    ctx->pc = 0x2C53D8u;
    // 0x2c53d8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2c53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2c53dc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2c53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c53e0:
    // 0x2c53e0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c53e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c53e4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C53E4u;
    SET_GPR_U32(ctx, 31, 0x2C53ECu);
    ctx->pc = 0x2C53E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53E4u;
            // 0x2c53e8: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53ECu; }
        if (ctx->pc != 0x2C53ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53ECu; }
        if (ctx->pc != 0x2C53ECu) { return; }
    }
    ctx->pc = 0x2C53ECu;
label_2c53ec:
    // 0x2c53ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c53ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c53f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c53f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53f4: 0x24a5fd08  addiu       $a1, $a1, -0x2F8
    ctx->pc = 0x2c53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966536));
    // 0x2c53f8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C53F8u;
    SET_GPR_U32(ctx, 31, 0x2C5400u);
    ctx->pc = 0x2C53FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53F8u;
            // 0x2c53fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5400u; }
        if (ctx->pc != 0x2C5400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5400u; }
        if (ctx->pc != 0x2C5400u) { return; }
    }
    ctx->pc = 0x2C5400u;
label_2c5400:
    // 0x2c5400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5404: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2c5404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2c5408: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c5408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c540c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2c540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2c5410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5414: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c5414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c5418: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C5418u;
    SET_GPR_U32(ctx, 31, 0x2C5420u);
    ctx->pc = 0x2C541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5418u;
            // 0x2c541c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5420u; }
        if (ctx->pc != 0x2C5420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5420u; }
        if (ctx->pc != 0x2C5420u) { return; }
    }
    ctx->pc = 0x2C5420u;
label_2c5420:
    // 0x2c5420: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5428: 0x24a5fd10  addiu       $a1, $a1, -0x2F0
    ctx->pc = 0x2c5428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966544));
    // 0x2c542c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C542Cu;
    SET_GPR_U32(ctx, 31, 0x2C5434u);
    ctx->pc = 0x2C5430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C542Cu;
            // 0x2c5430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5434u; }
        if (ctx->pc != 0x2C5434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5434u; }
        if (ctx->pc != 0x2C5434u) { return; }
    }
    ctx->pc = 0x2C5434u;
label_2c5434:
    // 0x2c5434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5438: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2c5438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2c543c: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5440: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2c5440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2c5444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5448: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c5448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c544c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2C544Cu;
    SET_GPR_U32(ctx, 31, 0x2C5454u);
    ctx->pc = 0x2C5450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C544Cu;
            // 0x2c5450: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5454u; }
        if (ctx->pc != 0x2C5454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5454u; }
        if (ctx->pc != 0x2C5454u) { return; }
    }
    ctx->pc = 0x2C5454u;
label_2c5454:
    // 0x2c5454: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2c5458: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c545c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2c545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2c5460: 0x24a5fd20  addiu       $a1, $a1, -0x2E0
    ctx->pc = 0x2c5460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966560));
    // 0x2c5464: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2C5464u;
    SET_GPR_U32(ctx, 31, 0x2C546Cu);
    ctx->pc = 0x2C5468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5464u;
            // 0x2c5468: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C546Cu; }
        if (ctx->pc != 0x2C546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C546Cu; }
        if (ctx->pc != 0x2C546Cu) { return; }
    }
    ctx->pc = 0x2C546Cu;
label_2c546c:
    // 0x2c546c: 0xc088914  jal         func_222450
    ctx->pc = 0x2C546Cu;
    SET_GPR_U32(ctx, 31, 0x2C5474u);
    ctx->pc = 0x2C5470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C546Cu;
            // 0x2c5470: 0xaf829d10  sw          $v0, -0x62F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222450u;
    if (runtime->hasFunction(0x222450u)) {
        auto targetFn = runtime->lookupFunction(0x222450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5474u; }
        if (ctx->pc != 0x2C5474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuDlTexture__Fv_0x222450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5474u; }
        if (ctx->pc != 0x2C5474u) { return; }
    }
    ctx->pc = 0x2C5474u;
label_2c5474:
    // 0x2c5474: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c5474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c5478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c547c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c547cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5480: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C5480u;
    SET_GPR_U32(ctx, 31, 0x2C5488u);
    ctx->pc = 0x2C5484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5480u;
            // 0x2c5484: 0xac620174  sw          $v0, 0x174($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5488u; }
        if (ctx->pc != 0x2C5488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5488u; }
        if (ctx->pc != 0x2C5488u) { return; }
    }
    ctx->pc = 0x2C5488u;
label_2c5488:
    // 0x2c5488: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2C5488u;
    SET_GPR_U32(ctx, 31, 0x2C5490u);
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5490u; }
        if (ctx->pc != 0x2C5490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5490u; }
        if (ctx->pc != 0x2C5490u) { return; }
    }
    ctx->pc = 0x2C5490u;
label_2c5490:
    // 0x2c5490: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5494: 0x8c31ca48  lw          $s1, -0x35B8($at)
    ctx->pc = 0x2c5494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2c5498: 0xc065a18  jal         func_196860
    ctx->pc = 0x2C5498u;
    SET_GPR_U32(ctx, 31, 0x2C54A0u);
    ctx->pc = 0x2C549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5498u;
            // 0x2c549c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54A0u; }
        if (ctx->pc != 0x2C54A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54A0u; }
        if (ctx->pc != 0x2C54A0u) { return; }
    }
    ctx->pc = 0x2C54A0u;
label_2c54a0:
    // 0x2c54a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c54a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c54a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54a8: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C54A8u;
    SET_GPR_U32(ctx, 31, 0x2C54B0u);
    ctx->pc = 0x2C54ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54A8u;
            // 0x2c54ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54B0u; }
        if (ctx->pc != 0x2C54B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54B0u; }
        if (ctx->pc != 0x2C54B0u) { return; }
    }
    ctx->pc = 0x2C54B0u;
label_2c54b0:
    // 0x2c54b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c54b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c54b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c54b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54b8: 0x8c31ca4c  lw          $s1, -0x35B4($at)
    ctx->pc = 0x2c54b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2c54bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c54bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54c0: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C54C0u;
    SET_GPR_U32(ctx, 31, 0x2C54C8u);
    ctx->pc = 0x2C54C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54C0u;
            // 0x2c54c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54C8u; }
        if (ctx->pc != 0x2C54C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54C8u; }
        if (ctx->pc != 0x2C54C8u) { return; }
    }
    ctx->pc = 0x2C54C8u;
label_2c54c8:
    // 0x2c54c8: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c54c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c54cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c54ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54d0: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C54D0u;
    SET_GPR_U32(ctx, 31, 0x2C54D8u);
    ctx->pc = 0x2C54D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54D0u;
            // 0x2c54d4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54D8u; }
        if (ctx->pc != 0x2C54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54D8u; }
        if (ctx->pc != 0x2C54D8u) { return; }
    }
    ctx->pc = 0x2C54D8u;
label_2c54d8:
    // 0x2c54d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c54d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54dc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C54DCu;
    SET_GPR_U32(ctx, 31, 0x2C54E4u);
    ctx->pc = 0x2C54E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54DCu;
            // 0x2c54e0: 0x24050c1c  addiu       $a1, $zero, 0xC1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54E4u; }
        if (ctx->pc != 0x2C54E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54E4u; }
        if (ctx->pc != 0x2C54E4u) { return; }
    }
    ctx->pc = 0x2C54E4u;
label_2c54e4:
    // 0x2c54e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c54e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c54e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c54e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54ec: 0x8c31ca50  lw          $s1, -0x35B0($at)
    ctx->pc = 0x2c54ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2c54f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c54f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54f4: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C54F4u;
    SET_GPR_U32(ctx, 31, 0x2C54FCu);
    ctx->pc = 0x2C54F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54F4u;
            // 0x2c54f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54FCu; }
        if (ctx->pc != 0x2C54FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54FCu; }
        if (ctx->pc != 0x2C54FCu) { return; }
    }
    ctx->pc = 0x2C54FCu;
label_2c54fc:
    // 0x2c54fc: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c54fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c5500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5504: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C5504u;
    SET_GPR_U32(ctx, 31, 0x2C550Cu);
    ctx->pc = 0x2C5508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5504u;
            // 0x2c5508: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C550Cu; }
        if (ctx->pc != 0x2C550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C550Cu; }
        if (ctx->pc != 0x2C550Cu) { return; }
    }
    ctx->pc = 0x2C550Cu;
label_2c550c:
    // 0x2c550c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5510: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C5510u;
    SET_GPR_U32(ctx, 31, 0x2C5518u);
    ctx->pc = 0x2C5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5510u;
            // 0x2c5514: 0x24050c1f  addiu       $a1, $zero, 0xC1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5518u; }
        if (ctx->pc != 0x2C5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5518u; }
        if (ctx->pc != 0x2C5518u) { return; }
    }
    ctx->pc = 0x2C5518u;
label_2c5518:
    // 0x2c5518: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c5518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c551c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5520: 0x8c31ca54  lw          $s1, -0x35AC($at)
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x2c5524: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c5524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5528: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C5528u;
    SET_GPR_U32(ctx, 31, 0x2C5530u);
    ctx->pc = 0x2C552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5528u;
            // 0x2c552c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5530u; }
        if (ctx->pc != 0x2C5530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5530u; }
        if (ctx->pc != 0x2C5530u) { return; }
    }
    ctx->pc = 0x2C5530u;
label_2c5530:
    // 0x2c5530: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c5530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c5534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5538: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C5538u;
    SET_GPR_U32(ctx, 31, 0x2C5540u);
    ctx->pc = 0x2C553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5538u;
            // 0x2c553c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5540u; }
        if (ctx->pc != 0x2C5540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5540u; }
        if (ctx->pc != 0x2C5540u) { return; }
    }
    ctx->pc = 0x2C5540u;
label_2c5540:
    // 0x2c5540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5544: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C5544u;
    SET_GPR_U32(ctx, 31, 0x2C554Cu);
    ctx->pc = 0x2C5548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5544u;
            // 0x2c5548: 0x24050c20  addiu       $a1, $zero, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C554Cu; }
        if (ctx->pc != 0x2C554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C554Cu; }
        if (ctx->pc != 0x2C554Cu) { return; }
    }
    ctx->pc = 0x2C554Cu;
label_2c554c:
    // 0x2c554c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c5550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5554: 0x8c31ca58  lw          $s1, -0x35A8($at)
    ctx->pc = 0x2c5554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x2c5558: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c5558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c555c: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C555Cu;
    SET_GPR_U32(ctx, 31, 0x2C5564u);
    ctx->pc = 0x2C5560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C555Cu;
            // 0x2c5560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5564u; }
        if (ctx->pc != 0x2C5564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5564u; }
        if (ctx->pc != 0x2C5564u) { return; }
    }
    ctx->pc = 0x2C5564u;
label_2c5564:
    // 0x2c5564: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c5564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c5568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c556c: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C556Cu;
    SET_GPR_U32(ctx, 31, 0x2C5574u);
    ctx->pc = 0x2C5570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C556Cu;
            // 0x2c5570: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5574u; }
        if (ctx->pc != 0x2C5574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5574u; }
        if (ctx->pc != 0x2C5574u) { return; }
    }
    ctx->pc = 0x2C5574u;
label_2c5574:
    // 0x2c5574: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c5574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5578: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x2c5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2c557c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C557Cu;
    {
        const bool branch_taken_0x2c557c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C557Cu;
            // 0x2c5580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c557c) {
            ctx->pc = 0x2C5598u;
            goto label_2c5598;
        }
    }
    ctx->pc = 0x2C5584u;
    // 0x2c5584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5588: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C5588u;
    SET_GPR_U32(ctx, 31, 0x2C5590u);
    ctx->pc = 0x2C558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5588u;
            // 0x2c558c: 0x24050c3b  addiu       $a1, $zero, 0xC3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3131));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5590u; }
        if (ctx->pc != 0x2C5590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5590u; }
        if (ctx->pc != 0x2C5590u) { return; }
    }
    ctx->pc = 0x2C5590u;
label_2c5590:
    // 0x2c5590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5590u;
    {
        const bool branch_taken_0x2c5590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5590) {
            ctx->pc = 0x2C55A0u;
            goto label_2c55a0;
        }
    }
    ctx->pc = 0x2C5598u;
label_2c5598:
    // 0x2c5598: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C5598u;
    SET_GPR_U32(ctx, 31, 0x2C55A0u);
    ctx->pc = 0x2C559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5598u;
            // 0x2c559c: 0x24050c3a  addiu       $a1, $zero, 0xC3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55A0u; }
        if (ctx->pc != 0x2C55A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55A0u; }
        if (ctx->pc != 0x2C55A0u) { return; }
    }
    ctx->pc = 0x2C55A0u;
label_2c55a0:
    // 0x2c55a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c55a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c55a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c55a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55a8: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c55ac: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C55ACu;
    SET_GPR_U32(ctx, 31, 0x2C55B4u);
    ctx->pc = 0x2C55B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55ACu;
            // 0x2c55b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55B4u; }
        if (ctx->pc != 0x2C55B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55B4u; }
        if (ctx->pc != 0x2C55B4u) { return; }
    }
    ctx->pc = 0x2C55B4u;
label_2c55b4:
    // 0x2c55b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c55b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c55b8: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2c55b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
    // 0x2c55bc: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2C55BCu;
    SET_GPR_U32(ctx, 31, 0x2C55C4u);
    ctx->pc = 0x2C55C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55BCu;
            // 0x2c55c0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55C4u; }
        if (ctx->pc != 0x2C55C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55C4u; }
        if (ctx->pc != 0x2C55C4u) { return; }
    }
    ctx->pc = 0x2C55C4u;
label_2c55c4:
    // 0x2c55c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c55c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c55c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c55cc:
    // 0x2c55cc: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c55d0: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x2c55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x2c55d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C55D4u;
    SET_GPR_U32(ctx, 31, 0x2C55DCu);
    ctx->pc = 0x2C55D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55D4u;
            // 0x2c55d8: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55DCu; }
        if (ctx->pc != 0x2C55DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55DCu; }
        if (ctx->pc != 0x2C55DCu) { return; }
    }
    ctx->pc = 0x2C55DCu;
label_2c55dc:
    // 0x2c55dc: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2c55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2c55e0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C55E0u;
    SET_GPR_U32(ctx, 31, 0x2C55E8u);
    ctx->pc = 0x2C55E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55E0u;
            // 0x2c55e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55E8u; }
        if (ctx->pc != 0x2C55E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55E8u; }
        if (ctx->pc != 0x2C55E8u) { return; }
    }
    ctx->pc = 0x2C55E8u;
label_2c55e8:
    // 0x2c55e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C55E8u;
    {
        const bool branch_taken_0x2c55e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55E8u;
            // 0x2c55ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55e8) {
            ctx->pc = 0x2C55F8u;
            goto label_2c55f8;
        }
    }
    ctx->pc = 0x2C55F0u;
    // 0x2c55f0: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2C55F0u;
    SET_GPR_U32(ctx, 31, 0x2C55F8u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55F8u; }
        if (ctx->pc != 0x2C55F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55F8u; }
        if (ctx->pc != 0x2C55F8u) { return; }
    }
    ctx->pc = 0x2C55F8u;
label_2c55f8:
    // 0x2c55f8: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2c55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2c55fc: 0x2463d290  addiu       $v1, $v1, -0x2D70
    ctx->pc = 0x2c55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955664));
    // 0x2c5600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5604: 0x73a021  addu        $s4, $v1, $s3
    ctx->pc = 0x2c5604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2c5608: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2c5608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2c560c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c5610: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2C5610u;
    SET_GPR_U32(ctx, 31, 0x2C5618u);
    ctx->pc = 0x2C5614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5610u;
            // 0x2c5614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5618u; }
        if (ctx->pc != 0x2C5618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5618u; }
        if (ctx->pc != 0x2C5618u) { return; }
    }
    ctx->pc = 0x2C5618u;
label_2c5618:
    // 0x2c5618: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c561c: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2C561Cu;
    SET_GPR_U32(ctx, 31, 0x2C5624u);
    ctx->pc = 0x2C5620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C561Cu;
            // 0x2c5620: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5624u; }
        if (ctx->pc != 0x2C5624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5624u; }
        if (ctx->pc != 0x2C5624u) { return; }
    }
    ctx->pc = 0x2C5624u;
label_2c5624:
    // 0x2c5624: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c5624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c5628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c5628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c562c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c562cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c5630: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x2c5630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2c5634: 0x2a22000d  slti        $v0, $s1, 0xD
    ctx->pc = 0x2c5634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2c5638: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c5638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c563c: 0xac651acc  sw          $a1, 0x1ACC($v1)
    ctx->pc = 0x2c563cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6860), GPR_U32(ctx, 5));
    // 0x2c5640: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c5644: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C5644u;
    {
        const bool branch_taken_0x2c5644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5644u;
            // 0x2c5648: 0xac641ad4  sw          $a0, 0x1AD4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5644) {
            ctx->pc = 0x2C55CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c55cc;
        }
    }
    ctx->pc = 0x2C564Cu;
    // 0x2c564c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5650: 0xc0b13ec  jal         func_2C4FB0
    ctx->pc = 0x2C5650u;
    SET_GPR_U32(ctx, 31, 0x2C5658u);
    ctx->pc = 0x2C5654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5650u;
            // 0x2c5654: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4FB0u;
    if (runtime->hasFunction(0x2C4FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5658u; }
        if (ctx->pc != 0x2C5658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMCIconData__FPUii_0x2c4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5658u; }
        if (ctx->pc != 0x2C5658u) { return; }
    }
    ctx->pc = 0x2C5658u;
label_2c5658:
    // 0x2c5658: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c565c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5660: 0x24a5fd28  addiu       $a1, $a1, -0x2D8
    ctx->pc = 0x2c5660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966568));
    // 0x2c5664: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C5664u;
    SET_GPR_U32(ctx, 31, 0x2C566Cu);
    ctx->pc = 0x2C5668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5664u;
            // 0x2c5668: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C566Cu; }
        if (ctx->pc != 0x2C566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C566Cu; }
        if (ctx->pc != 0x2C566Cu) { return; }
    }
    ctx->pc = 0x2C566Cu;
label_2c566c:
    // 0x2c566c: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x2c566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2c5670: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c5670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2c5674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5678: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2C5678u;
    SET_GPR_U32(ctx, 31, 0x2C5680u);
    ctx->pc = 0x2C567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5678u;
            // 0x2c567c: 0x24c6d260  addiu       $a2, $a2, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5680u; }
        if (ctx->pc != 0x2C5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5680u; }
        if (ctx->pc != 0x2C5680u) { return; }
    }
    ctx->pc = 0x2C5680u;
label_2c5680:
    // 0x2c5680: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5684: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c568c: 0x24a5fd38  addiu       $a1, $a1, -0x2C8
    ctx->pc = 0x2c568cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966584));
    // 0x2c5690: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2C5690u;
    SET_GPR_U32(ctx, 31, 0x2C5698u);
    ctx->pc = 0x2C5694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5690u;
            // 0x2c5694: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5698u; }
        if (ctx->pc != 0x2C5698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5698u; }
        if (ctx->pc != 0x2C5698u) { return; }
    }
    ctx->pc = 0x2C5698u;
label_2c5698:
    // 0x2c5698: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c5698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c569c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2c569cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2c56a0: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x2C56A0u;
    SET_GPR_U32(ctx, 31, 0x2C56A8u);
    ctx->pc = 0x2C56A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56A0u;
            // 0x2c56a4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56A8u; }
        if (ctx->pc != 0x2C56A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56A8u; }
        if (ctx->pc != 0x2C56A8u) { return; }
    }
    ctx->pc = 0x2C56A8u;
label_2c56a8:
    // 0x2c56a8: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c56ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c56acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c56b0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c56b4: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c56b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c56b8: 0xc08aa58  jal         func_22A960
    ctx->pc = 0x2C56B8u;
    SET_GPR_U32(ctx, 31, 0x2C56C0u);
    ctx->pc = 0x2C56BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56B8u;
            // 0x2c56bc: 0x24a5fd20  addiu       $a1, $a1, -0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A960u;
    if (runtime->hasFunction(0x22A960u)) {
        auto targetFn = runtime->lookupFunction(0x22A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56C0u; }
        if (ctx->pc != 0x2C56C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureBlockNo__14CPosDataManageFPci_0x22a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56C0u; }
        if (ctx->pc != 0x2C56C0u) { return; }
    }
    ctx->pc = 0x2C56C0u;
label_2c56c0:
    // 0x2c56c0: 0xc08aa80  jal         func_22AA00
    ctx->pc = 0x2C56C0u;
    SET_GPR_U32(ctx, 31, 0x2C56C8u);
    ctx->pc = 0x2C56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56C0u;
            // 0x2c56c4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56C8u; }
        if (ctx->pc != 0x2C56C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56C8u; }
        if (ctx->pc != 0x2C56C8u) { return; }
    }
    ctx->pc = 0x2C56C8u;
label_2c56c8:
    // 0x2c56c8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c56cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c56d0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C56D0u;
    SET_GPR_U32(ctx, 31, 0x2C56D8u);
    ctx->pc = 0x2C56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56D0u;
            // 0x2c56d4: 0x24a5fd48  addiu       $a1, $a1, -0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56D8u; }
        if (ctx->pc != 0x2C56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56D8u; }
        if (ctx->pc != 0x2C56D8u) { return; }
    }
    ctx->pc = 0x2C56D8u;
label_2c56d8:
    // 0x2c56d8: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c56dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c56dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c56e0: 0xac620178  sw          $v0, 0x178($v1)
    ctx->pc = 0x2c56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 2));
    // 0x2c56e4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c56e8: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C56E8u;
    SET_GPR_U32(ctx, 31, 0x2C56F0u);
    ctx->pc = 0x2C56ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56E8u;
            // 0x2c56ec: 0x24a5fd50  addiu       $a1, $a1, -0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56F0u; }
        if (ctx->pc != 0x2C56F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56F0u; }
        if (ctx->pc != 0x2C56F0u) { return; }
    }
    ctx->pc = 0x2C56F0u;
label_2c56f0:
    // 0x2c56f0: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c56f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c56f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c56f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c56f8: 0xac62017c  sw          $v0, 0x17C($v1)
    ctx->pc = 0x2c56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 380), GPR_U32(ctx, 2));
    // 0x2c56fc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c5700: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C5700u;
    SET_GPR_U32(ctx, 31, 0x2C5708u);
    ctx->pc = 0x2C5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5700u;
            // 0x2c5704: 0x24a5fd58  addiu       $a1, $a1, -0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5708u; }
        if (ctx->pc != 0x2C5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5708u; }
        if (ctx->pc != 0x2C5708u) { return; }
    }
    ctx->pc = 0x2C5708u;
label_2c5708:
    // 0x2c5708: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c5708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c570c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c570cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5710: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x2c5710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x2c5714: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c5714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c5718: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C5718u;
    SET_GPR_U32(ctx, 31, 0x2C5720u);
    ctx->pc = 0x2C571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5718u;
            // 0x2c571c: 0x24a5fd60  addiu       $a1, $a1, -0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5720u; }
        if (ctx->pc != 0x2C5720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5720u; }
        if (ctx->pc != 0x2C5720u) { return; }
    }
    ctx->pc = 0x2C5720u;
label_2c5720:
    // 0x2c5720: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c5720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5724: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5728: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x2c5728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x2c572c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c5730: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C5730u;
    SET_GPR_U32(ctx, 31, 0x2C5738u);
    ctx->pc = 0x2C5734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5730u;
            // 0x2c5734: 0x24a5fd68  addiu       $a1, $a1, -0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5738u; }
        if (ctx->pc != 0x2C5738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5738u; }
        if (ctx->pc != 0x2C5738u) { return; }
    }
    ctx->pc = 0x2C5738u;
label_2c5738:
    // 0x2c5738: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c5738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c573c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c573cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5740: 0xac620188  sw          $v0, 0x188($v1)
    ctx->pc = 0x2c5740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 2));
    // 0x2c5744: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2c5744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2c5748: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2C5748u;
    SET_GPR_U32(ctx, 31, 0x2C5750u);
    ctx->pc = 0x2C574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5748u;
            // 0x2c574c: 0x24a5fd70  addiu       $a1, $a1, -0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5750u; }
        if (ctx->pc != 0x2C5750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5750u; }
        if (ctx->pc != 0x2C5750u) { return; }
    }
    ctx->pc = 0x2C5750u;
label_2c5750:
    // 0x2c5750: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5754: 0xac62018c  sw          $v0, 0x18C($v1)
    ctx->pc = 0x2c5754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 2));
    // 0x2c5758: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c575c: 0x8c42018c  lw          $v0, 0x18C($v0)
    ctx->pc = 0x2c575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x2c5760: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5760u;
    {
        const bool branch_taken_0x2c5760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5760u;
            // 0x2c5764: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5760) {
            ctx->pc = 0x2C57A4u;
            goto label_2c57a4;
        }
    }
    ctx->pc = 0x2C5768u;
    // 0x2c5768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c5768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c576c:
    // 0x2c576c: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5770: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c5770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c5774: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x2c5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
    // 0x2c5778: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c5778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c577c: 0x8c64018c  lw          $a0, 0x18C($v1)
    ctx->pc = 0x2c577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x2c5780: 0xc089664  jal         func_225990
    ctx->pc = 0x2C5780u;
    SET_GPR_U32(ctx, 31, 0x2C5788u);
    ctx->pc = 0x2C5784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5780u;
            // 0x2c5784: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5788u; }
        if (ctx->pc != 0x2C5788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5788u; }
        if (ctx->pc != 0x2C5788u) { return; }
    }
    ctx->pc = 0x2C5788u;
label_2c5788:
    // 0x2c5788: 0x8f849cc8  lw          $a0, -0x6338($gp)
    ctx->pc = 0x2c5788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c578c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c578cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c5790: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x2c5790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c5794: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2c5794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2c5798: 0xac820190  sw          $v0, 0x190($a0)
    ctx->pc = 0x2c5798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 2));
    // 0x2c579c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C579Cu;
    {
        const bool branch_taken_0x2c579c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C57A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C579Cu;
            // 0x2c57a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c579c) {
            ctx->pc = 0x2C576Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c576c;
        }
    }
    ctx->pc = 0x2C57A4u;
label_2c57a4:
    // 0x2c57a4: 0x0  nop
    ctx->pc = 0x2c57a4u;
    // NOP
    // 0x2c57a8: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2C57A8u;
    SET_GPR_U32(ctx, 31, 0x2C57B0u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57B0u; }
        if (ctx->pc != 0x2C57B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57B0u; }
        if (ctx->pc != 0x2C57B0u) { return; }
    }
    ctx->pc = 0x2C57B0u;
label_2c57b0:
    // 0x2c57b0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c57b4: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2C57B4u;
    SET_GPR_U32(ctx, 31, 0x2C57BCu);
    ctx->pc = 0x2C57B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57B4u;
            // 0x2c57b8: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57BCu; }
        if (ctx->pc != 0x2C57BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57BCu; }
        if (ctx->pc != 0x2C57BCu) { return; }
    }
    ctx->pc = 0x2C57BCu;
label_2c57bc:
    // 0x2c57bc: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c57c0: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x2c57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2c57c4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C57C4u;
    {
        const bool branch_taken_0x2c57c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C57C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57C4u;
            // 0x2c57c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57c4) {
            ctx->pc = 0x2C582Cu;
            goto label_2c582c;
        }
    }
    ctx->pc = 0x2C57CCu;
    // 0x2c57cc: 0xc0942ac  jal         func_250AB0
    ctx->pc = 0x2C57CCu;
    SET_GPR_U32(ctx, 31, 0x2C57D4u);
    ctx->pc = 0x250AB0u;
    if (runtime->hasFunction(0x250AB0u)) {
        auto targetFn = runtime->lookupFunction(0x250AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57D4u; }
        if (ctx->pc != 0x2C57D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvSoundMenu__Fi_0x250ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57D4u; }
        if (ctx->pc != 0x2C57D4u) { return; }
    }
    ctx->pc = 0x2C57D4u;
label_2c57d4:
    // 0x2c57d4: 0x8f829cc8  lw          $v0, -0x6338($gp)
    ctx->pc = 0x2c57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c57d8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c57dc: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x2C57DCu;
    SET_GPR_U32(ctx, 31, 0x2C57E4u);
    ctx->pc = 0x2C57E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57DCu;
            // 0x2c57e0: 0x24450158  addiu       $a1, $v0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57E4u; }
        if (ctx->pc != 0x2C57E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57E4u; }
        if (ctx->pc != 0x2C57E4u) { return; }
    }
    ctx->pc = 0x2C57E4u;
label_2c57e4:
    // 0x2c57e4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c57e8: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C57E8u;
    SET_GPR_U32(ctx, 31, 0x2C57F0u);
    ctx->pc = 0x2C57ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57E8u;
            // 0x2c57ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57F0u; }
        if (ctx->pc != 0x2C57F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57F0u; }
        if (ctx->pc != 0x2C57F0u) { return; }
    }
    ctx->pc = 0x2C57F0u;
label_2c57f0:
    // 0x2c57f0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c57f4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c57f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c57f8: 0x8c23d284  lw          $v1, -0x2D7C($at)
    ctx->pc = 0x2c57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955652)));
    // 0x2c57fc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2c57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c5800: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c5800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c5804: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c5804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c5808: 0x8c22d280  lw          $v0, -0x2D80($at)
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955648)));
    // 0x2c580c: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C580Cu;
    SET_GPR_U32(ctx, 31, 0x2C5814u);
    ctx->pc = 0x2C5810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C580Cu;
            // 0x2c5810: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5814u; }
        if (ctx->pc != 0x2C5814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5814u; }
        if (ctx->pc != 0x2C5814u) { return; }
    }
    ctx->pc = 0x2C5814u;
label_2c5814:
    // 0x2c5814: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c5814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c5818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c581c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c581cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5824: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2C5824u;
    SET_GPR_U32(ctx, 31, 0x2C582Cu);
    ctx->pc = 0x2C5828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5824u;
            // 0x2c5828: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C582Cu; }
        if (ctx->pc != 0x2C582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C582Cu; }
        if (ctx->pc != 0x2C582Cu) { return; }
    }
    ctx->pc = 0x2C582Cu;
label_2c582c:
    // 0x2c582c: 0x8f849cc8  lw          $a0, -0x6338($gp)
    ctx->pc = 0x2c582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c5830: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c5830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5834: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2C5834u;
    SET_GPR_U32(ctx, 31, 0x2C583Cu);
    ctx->pc = 0x2C5838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5834u;
            // 0x2c5838: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C583Cu; }
        if (ctx->pc != 0x2C583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C583Cu; }
        if (ctx->pc != 0x2C583Cu) { return; }
    }
    ctx->pc = 0x2C583Cu;
label_2c583c:
    // 0x2c583c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c5840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c584c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c584cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5854: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5854u;
            // 0x2c5858: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C585Cu;
}
