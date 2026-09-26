#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMovie__FPcP9mgCMemoryb
// Address: 0x2647b0 - 0x264fa8
void LoadMovie__FPcP9mgCMemoryb_0x2647b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMovie__FPcP9mgCMemoryb_0x2647b0");
#endif

    switch (ctx->pc) {
        case 0x26480cu: goto label_26480c;
        case 0x26483cu: goto label_26483c;
        case 0x264870u: goto label_264870;
        case 0x2648a0u: goto label_2648a0;
        case 0x2648b0u: goto label_2648b0;
        case 0x2648ecu: goto label_2648ec;
        case 0x264908u: goto label_264908;
        case 0x264938u: goto label_264938;
        case 0x264940u: goto label_264940;
        case 0x264958u: goto label_264958;
        case 0x264974u: goto label_264974;
        case 0x264988u: goto label_264988;
        case 0x26499cu: goto label_26499c;
        case 0x2649a4u: goto label_2649a4;
        case 0x2649acu: goto label_2649ac;
        case 0x2649b4u: goto label_2649b4;
        case 0x2649bcu: goto label_2649bc;
        case 0x2649c4u: goto label_2649c4;
        case 0x2649e0u: goto label_2649e0;
        case 0x2649f0u: goto label_2649f0;
        case 0x264a18u: goto label_264a18;
        case 0x264a2cu: goto label_264a2c;
        case 0x264a40u: goto label_264a40;
        case 0x264a44u: goto label_264a44;
        case 0x264a54u: goto label_264a54;
        case 0x264a64u: goto label_264a64;
        case 0x264a6cu: goto label_264a6c;
        case 0x264a8cu: goto label_264a8c;
        case 0x264aa0u: goto label_264aa0;
        case 0x264ab0u: goto label_264ab0;
        case 0x264ab8u: goto label_264ab8;
        case 0x264ac8u: goto label_264ac8;
        case 0x264ae0u: goto label_264ae0;
        case 0x264af0u: goto label_264af0;
        case 0x264b04u: goto label_264b04;
        case 0x264b18u: goto label_264b18;
        case 0x264b2cu: goto label_264b2c;
        case 0x264b4cu: goto label_264b4c;
        case 0x264b74u: goto label_264b74;
        case 0x264b88u: goto label_264b88;
        case 0x264ba8u: goto label_264ba8;
        case 0x264bd0u: goto label_264bd0;
        case 0x264be0u: goto label_264be0;
        case 0x264bfcu: goto label_264bfc;
        case 0x264c04u: goto label_264c04;
        case 0x264c0cu: goto label_264c0c;
        case 0x264c44u: goto label_264c44;
        case 0x264c4cu: goto label_264c4c;
        case 0x264c64u: goto label_264c64;
        case 0x264c6cu: goto label_264c6c;
        case 0x264c84u: goto label_264c84;
        case 0x264ca0u: goto label_264ca0;
        case 0x264ca8u: goto label_264ca8;
        case 0x264cb8u: goto label_264cb8;
        case 0x264cd0u: goto label_264cd0;
        case 0x264ce0u: goto label_264ce0;
        case 0x264cf4u: goto label_264cf4;
        case 0x264d08u: goto label_264d08;
        case 0x264d1cu: goto label_264d1c;
        case 0x264d3cu: goto label_264d3c;
        case 0x264d64u: goto label_264d64;
        case 0x264d78u: goto label_264d78;
        case 0x264d98u: goto label_264d98;
        case 0x264dc0u: goto label_264dc0;
        case 0x264dd0u: goto label_264dd0;
        case 0x264ddcu: goto label_264ddc;
        case 0x264de8u: goto label_264de8;
        case 0x264e10u: goto label_264e10;
        case 0x264e60u: goto label_264e60;
        case 0x264e80u: goto label_264e80;
        case 0x264e88u: goto label_264e88;
        case 0x264eb0u: goto label_264eb0;
        case 0x264eb8u: goto label_264eb8;
        case 0x264ed4u: goto label_264ed4;
        case 0x264f04u: goto label_264f04;
        case 0x264f3cu: goto label_264f3c;
        case 0x264f60u: goto label_264f60;
        case 0x264f68u: goto label_264f68;
        default: break;
    }

    ctx->pc = 0x2647b0u;

    // 0x2647b0: 0x3c01fffd  lui         $at, 0xFFFD
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65533 << 16));
    // 0x2647b4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2647b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647b8: 0x3421c230  ori         $at, $at, 0xC230
    ctx->pc = 0x2647b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49712);
    // 0x2647bc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2647bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2647c0: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2647c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2647c4: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2647c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2647c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2647c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2647cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2647ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2647d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2647d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2647d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2647d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647d8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2647d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2647dc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2647dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2647e0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2647e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2647e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2647e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2647e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2647e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2647ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2647ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2647f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2647f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2647f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2647f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2647f8: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x2647f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x2647fc: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x264800: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x264800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264804: 0xc0a62cc  jal         func_298B30
    ctx->pc = 0x264804u;
    SET_GPR_U32(ctx, 31, 0x26480Cu);
    ctx->pc = 0x264808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264804u;
            // 0x264808: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B30u;
    if (runtime->hasFunction(0x298B30u)) {
        auto targetFn = runtime->lookupFunction(0x298B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26480Cu; }
        if (ctx->pc != 0x26480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__6CMovieFPcP9mgCMemoryiibbb_0x298b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26480Cu; }
        if (ctx->pc != 0x26480Cu) { return; }
    }
    ctx->pc = 0x26480Cu;
label_26480c:
    // 0x26480c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x26480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x264810: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x264810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x264814: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x264814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x264818: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x264818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26481c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x264820: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264820u;
    {
        const bool branch_taken_0x264820 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x264824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264820u;
            // 0x264824: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264820) {
            ctx->pc = 0x264830u;
            goto label_264830;
        }
    }
    ctx->pc = 0x264828u;
    // 0x264828: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x26482c: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x26482cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_264830:
    // 0x264830: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x264830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x264834: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x264834u;
    SET_GPR_U32(ctx, 31, 0x26483Cu);
    ctx->pc = 0x264838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264834u;
            // 0x264838: 0x2484c730  addiu       $a0, $a0, -0x38D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26483Cu; }
        if (ctx->pc != 0x26483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26483Cu; }
        if (ctx->pc != 0x26483Cu) { return; }
    }
    ctx->pc = 0x26483Cu;
label_26483c:
    // 0x26483c: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x26483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x264840: 0x8c622e7c  lw          $v0, 0x2E7C($v1)
    ctx->pc = 0x264840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11900)));
    // 0x264844: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x264844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x264848: 0x8c622e80  lw          $v0, 0x2E80($v1)
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11904)));
    // 0x26484c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26484Cu;
    {
        const bool branch_taken_0x26484c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x264850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26484Cu;
            // 0x264850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26484c) {
            ctx->pc = 0x26485Cu;
            goto label_26485c;
        }
    }
    ctx->pc = 0x264854u;
    // 0x264854: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x264854u;
    {
        const bool branch_taken_0x264854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264854) {
            ctx->pc = 0x264F70u;
            goto label_264f70;
        }
    }
    ctx->pc = 0x26485Cu;
label_26485c:
    // 0x26485c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x26485cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x264860: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x264860u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x264864: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0
    ctx->pc = 0x264864u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
    // 0x264868: 0xc04b950  jal         func_12E540
    ctx->pc = 0x264868u;
    SET_GPR_U32(ctx, 31, 0x264870u);
    ctx->pc = 0x26486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264868u;
            // 0x26486c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264870u; }
        if (ctx->pc != 0x264870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264870u; }
        if (ctx->pc != 0x264870u) { return; }
    }
    ctx->pc = 0x264870u;
label_264870:
    // 0x264870: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x264870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x264874: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x264874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x264878: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x264878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x26487c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264880: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x264880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x264884: 0x24c6c768  addiu       $a2, $a2, -0x3898
    ctx->pc = 0x264884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952808));
    // 0x264888: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x264888u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x26488c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26488cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264890: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x264894: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x264894u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x264898: 0xc04b450  jal         func_12D140
    ctx->pc = 0x264898u;
    SET_GPR_U32(ctx, 31, 0x2648A0u);
    ctx->pc = 0x26489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264898u;
            // 0x26489c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648A0u; }
        if (ctx->pc != 0x2648A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648A0u; }
        if (ctx->pc != 0x2648A0u) { return; }
    }
    ctx->pc = 0x2648A0u;
label_2648a0:
    // 0x2648a0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2648a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2648a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2648a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2648a8: 0xc0991d8  jal         func_264760
    ctx->pc = 0x2648A8u;
    SET_GPR_U32(ctx, 31, 0x2648B0u);
    ctx->pc = 0x2648ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2648A8u;
            // 0x2648ac: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264760u;
    if (runtime->hasFunction(0x264760u)) {
        auto targetFn = runtime->lookupFunction(0x264760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648B0u; }
        if (ctx->pc != 0x2648B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetConfigCaptionOff__Fv_0x264760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648B0u; }
        if (ctx->pc != 0x2648B0u) { return; }
    }
    ctx->pc = 0x2648B0u;
label_2648b0:
    // 0x2648b0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2648b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2648b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2648b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2648b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2648b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2648bc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2648bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2648c0: 0x8c22e634  lw          $v0, -0x19CC($at)
    ctx->pc = 0x2648c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960692)));
    // 0x2648c4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2648C4u;
    {
        const bool branch_taken_0x2648c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648c4) {
            ctx->pc = 0x264964u;
            goto label_264964;
        }
    }
    ctx->pc = 0x2648CCu;
    // 0x2648cc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2648ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2648d0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2648D0u;
    {
        const bool branch_taken_0x2648d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2648d0) {
            ctx->pc = 0x264964u;
            goto label_264964;
        }
    }
    ctx->pc = 0x2648D8u;
    // 0x2648d8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x2648d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2648dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2648dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2648e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2648e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2648e4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2648E4u;
    SET_GPR_U32(ctx, 31, 0x2648ECu);
    ctx->pc = 0x2648E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2648E4u;
            // 0x2648e8: 0x24a5c778  addiu       $a1, $a1, -0x3888 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648ECu; }
        if (ctx->pc != 0x2648ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648ECu; }
        if (ctx->pc != 0x2648ECu) { return; }
    }
    ctx->pc = 0x2648ECu;
label_2648ec:
    // 0x2648ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2648ECu;
    {
        const bool branch_taken_0x2648ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2648ECu;
            // 0x2648f0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648ec) {
            ctx->pc = 0x264960u;
            goto label_264960;
        }
    }
    ctx->pc = 0x2648F4u;
    // 0x2648f4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2648f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2648f8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2648f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2648fc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2648fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264900: 0xc04b950  jal         func_12E540
    ctx->pc = 0x264900u;
    SET_GPR_U32(ctx, 31, 0x264908u);
    ctx->pc = 0x264904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264900u;
            // 0x264904: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264908u; }
        if (ctx->pc != 0x264908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264908u; }
        if (ctx->pc != 0x264908u) { return; }
    }
    ctx->pc = 0x264908u;
label_264908:
    // 0x264908: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x264908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x26490c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x26490cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x264910: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x264910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x264914: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264918: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x264918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26491c: 0x24c6c780  addiu       $a2, $a2, -0x3880
    ctx->pc = 0x26491cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952832));
    // 0x264920: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x264920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x264924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264928: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x264928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x26492c: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x26492cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x264930: 0xc04b450  jal         func_12D140
    ctx->pc = 0x264930u;
    SET_GPR_U32(ctx, 31, 0x264938u);
    ctx->pc = 0x264934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264930u;
            // 0x264934: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264938u; }
        if (ctx->pc != 0x264938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264938u; }
        if (ctx->pc != 0x264938u) { return; }
    }
    ctx->pc = 0x264938u;
label_264938:
    // 0x264938: 0xc0b61f8  jal         func_2D87E0
    ctx->pc = 0x264938u;
    SET_GPR_U32(ctx, 31, 0x264940u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264940u; }
        if (ctx->pc != 0x264940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264940u; }
        if (ctx->pc != 0x264940u) { return; }
    }
    ctx->pc = 0x264940u;
label_264940:
    // 0x264940: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x264940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x264944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264948: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26494c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26494cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264950: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x264950u;
    SET_GPR_U32(ctx, 31, 0x264958u);
    ctx->pc = 0x264954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264950u;
            // 0x264954: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264958u; }
        if (ctx->pc != 0x264958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264958u; }
        if (ctx->pc != 0x264958u) { return; }
    }
    ctx->pc = 0x264958u;
label_264958:
    // 0x264958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264958u;
    {
        const bool branch_taken_0x264958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264958u;
            // 0x26495c: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264958) {
            ctx->pc = 0x264968u;
            goto label_264968;
        }
    }
    ctx->pc = 0x264960u;
label_264960:
    // 0x264960: 0xac20e634  sw          $zero, -0x19CC($at)
    ctx->pc = 0x264960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960692), GPR_U32(ctx, 0));
label_264964:
    // 0x264964: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_264968:
    // 0x264968: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26496c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x26496Cu;
    SET_GPR_U32(ctx, 31, 0x264974u);
    ctx->pc = 0x264970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26496Cu;
            // 0x264970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264974u; }
        if (ctx->pc != 0x264974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264974u; }
        if (ctx->pc != 0x264974u) { return; }
    }
    ctx->pc = 0x264974u;
label_264974:
    // 0x264974: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x264974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x264978: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x264978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26497c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264980: 0xc04b414  jal         func_12D050
    ctx->pc = 0x264980u;
    SET_GPR_U32(ctx, 31, 0x264988u);
    ctx->pc = 0x264984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264980u;
            // 0x264984: 0x24a5c768  addiu       $a1, $a1, -0x3898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264988u; }
        if (ctx->pc != 0x264988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264988u; }
        if (ctx->pc != 0x264988u) { return; }
    }
    ctx->pc = 0x264988u;
label_264988:
    // 0x264988: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x264988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26498c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x26498cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x264990: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x264990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x264994: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x264994u;
    SET_GPR_U32(ctx, 31, 0x26499Cu);
    ctx->pc = 0x264998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264994u;
            // 0x264998: 0x24a5c768  addiu       $a1, $a1, -0x3898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298B80u;
    if (runtime->hasFunction(0x298B80u)) {
        auto targetFn = runtime->lookupFunction(0x298B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26499Cu; }
        if (ctx->pc != 0x26499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__6CMovieFPc_0x298b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26499Cu; }
        if (ctx->pc != 0x26499Cu) { return; }
    }
    ctx->pc = 0x26499Cu;
label_26499c:
    // 0x26499c: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x26499Cu;
    SET_GPR_U32(ctx, 31, 0x2649A4u);
    ctx->pc = 0x2649A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26499Cu;
            // 0x2649a0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649A4u; }
        if (ctx->pc != 0x2649A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649A4u; }
        if (ctx->pc != 0x2649A4u) { return; }
    }
    ctx->pc = 0x2649A4u;
label_2649a4:
    // 0x2649a4: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2649A4u;
    SET_GPR_U32(ctx, 31, 0x2649ACu);
    ctx->pc = 0x2649A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2649A4u;
            // 0x2649a8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649ACu; }
        if (ctx->pc != 0x2649ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649ACu; }
        if (ctx->pc != 0x2649ACu) { return; }
    }
    ctx->pc = 0x2649ACu;
label_2649ac:
    // 0x2649ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2649ACu;
    {
        const bool branch_taken_0x2649ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2649ac) {
            ctx->pc = 0x2649D4u;
            goto label_2649d4;
        }
    }
    ctx->pc = 0x2649B4u;
label_2649b4:
    // 0x2649b4: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2649B4u;
    SET_GPR_U32(ctx, 31, 0x2649BCu);
    ctx->pc = 0x2649B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2649B4u;
            // 0x2649b8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649BCu; }
        if (ctx->pc != 0x2649BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649BCu; }
        if (ctx->pc != 0x2649BCu) { return; }
    }
    ctx->pc = 0x2649BCu;
label_2649bc:
    // 0x2649bc: 0xc0a63dc  jal         func_298F70
    ctx->pc = 0x2649BCu;
    SET_GPR_U32(ctx, 31, 0x2649C4u);
    ctx->pc = 0x2649C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2649BCu;
            // 0x2649c0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F70u;
    if (runtime->hasFunction(0x298F70u)) {
        auto targetFn = runtime->lookupFunction(0x298F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649C4u; }
        if (ctx->pc != 0x2649C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsStarted__6CMovieFv_0x298f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649C4u; }
        if (ctx->pc != 0x2649C4u) { return; }
    }
    ctx->pc = 0x2649C4u;
label_2649c4:
    // 0x2649c4: 0x0  nop
    ctx->pc = 0x2649c4u;
    // NOP
    // 0x2649c8: 0x0  nop
    ctx->pc = 0x2649c8u;
    // NOP
    // 0x2649cc: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2649CCu;
    {
        const bool branch_taken_0x2649cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649cc) {
            ctx->pc = 0x2649B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2649b4;
        }
    }
    ctx->pc = 0x2649D4u;
label_2649d4:
    // 0x2649d4: 0x0  nop
    ctx->pc = 0x2649d4u;
    // NOP
    // 0x2649d8: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2649D8u;
    SET_GPR_U32(ctx, 31, 0x2649E0u);
    ctx->pc = 0x2649DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2649D8u;
            // 0x2649dc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649E0u; }
        if (ctx->pc != 0x2649E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649E0u; }
        if (ctx->pc != 0x2649E0u) { return; }
    }
    ctx->pc = 0x2649E0u;
label_2649e0:
    // 0x2649e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2649e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2649e4: 0x34213a60  ori         $at, $at, 0x3A60
    ctx->pc = 0x2649e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14944);
    // 0x2649e8: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x2649E8u;
    SET_GPR_U32(ctx, 31, 0x2649F0u);
    ctx->pc = 0x2649ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2649E8u;
            // 0x2649ec: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649F0u; }
        if (ctx->pc != 0x2649F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649F0u; }
        if (ctx->pc != 0x2649F0u) { return; }
    }
    ctx->pc = 0x2649F0u;
label_2649f0:
    // 0x2649f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2649f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2649f4: 0x8c22e634  lw          $v0, -0x19CC($at)
    ctx->pc = 0x2649f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960692)));
    // 0x2649f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2649F8u;
    {
        const bool branch_taken_0x2649f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649F8u;
            // 0x2649fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649f8) {
            ctx->pc = 0x264A44u;
            goto label_264a44;
        }
    }
    ctx->pc = 0x264A00u;
    // 0x264a00: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x264a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264a04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x264A04u;
    {
        const bool branch_taken_0x264a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A04u;
            // 0x264a08: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a04) {
            ctx->pc = 0x264A40u;
            goto label_264a40;
        }
    }
    ctx->pc = 0x264A0Cu;
    // 0x264a0c: 0x34213a60  ori         $at, $at, 0x3A60
    ctx->pc = 0x264a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14944);
    // 0x264a10: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x264A10u;
    SET_GPR_U32(ctx, 31, 0x264A18u);
    ctx->pc = 0x264A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A10u;
            // 0x264a14: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A18u; }
        if (ctx->pc != 0x264A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A18u; }
        if (ctx->pc != 0x264A18u) { return; }
    }
    ctx->pc = 0x264A18u;
label_264a18:
    // 0x264a18: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264a1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x264a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x264a20: 0x34213a60  ori         $at, $at, 0x3A60
    ctx->pc = 0x264a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14944);
    // 0x264a24: 0xc0b5720  jal         func_2D5C80
    ctx->pc = 0x264A24u;
    SET_GPR_U32(ctx, 31, 0x264A2Cu);
    ctx->pc = 0x264A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A24u;
            // 0x264a28: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C80u;
    if (runtime->hasFunction(0x2D5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2D5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A2Cu; }
        if (ctx->pc != 0x264A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__5CFontFi_0x2d5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A2Cu; }
        if (ctx->pc != 0x264A2Cu) { return; }
    }
    ctx->pc = 0x264A2Cu;
label_264a2c:
    // 0x264a2c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264a30: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x264a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x264a34: 0x34213a60  ori         $at, $at, 0x3A60
    ctx->pc = 0x264a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14944);
    // 0x264a38: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x264A38u;
    SET_GPR_U32(ctx, 31, 0x264A40u);
    ctx->pc = 0x264A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A38u;
            // 0x264a3c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A40u; }
        if (ctx->pc != 0x264A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A40u; }
        if (ctx->pc != 0x264A40u) { return; }
    }
    ctx->pc = 0x264A40u;
label_264a40:
    // 0x264a40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x264a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264a44:
    // 0x264a44: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264A44u;
    {
        const bool branch_taken_0x264a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A44u;
            // 0x264a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a44) {
            ctx->pc = 0x264A54u;
            goto label_264a54;
        }
    }
    ctx->pc = 0x264A4Cu;
    // 0x264a4c: 0xc050878  jal         func_1421E0
    ctx->pc = 0x264A4Cu;
    SET_GPR_U32(ctx, 31, 0x264A54u);
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A54u; }
        if (ctx->pc != 0x264A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A54u; }
        if (ctx->pc != 0x264A54u) { return; }
    }
    ctx->pc = 0x264A54u;
label_264a54:
    // 0x264a54: 0x0  nop
    ctx->pc = 0x264a54u;
    // NOP
    // 0x264a58: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x264a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x264a5c: 0xc052a4c  jal         func_14A930
    ctx->pc = 0x264A5Cu;
    SET_GPR_U32(ctx, 31, 0x264A64u);
    ctx->pc = 0x264A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A5Cu;
            // 0x264a60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A64u; }
        if (ctx->pc != 0x264A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A64u; }
        if (ctx->pc != 0x264A64u) { return; }
    }
    ctx->pc = 0x264A64u;
label_264a64:
    // 0x264a64: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x264A64u;
    SET_GPR_U32(ctx, 31, 0x264A6Cu);
    ctx->pc = 0x264A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A64u;
            // 0x264a68: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A6Cu; }
        if (ctx->pc != 0x264A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCheck__6CMovieFv_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A6Cu; }
        if (ctx->pc != 0x264A6Cu) { return; }
    }
    ctx->pc = 0x264A6Cu;
label_264a6c:
    // 0x264a6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x264A6Cu;
    {
        const bool branch_taken_0x264a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264a6c) {
            ctx->pc = 0x264A94u;
            goto label_264a94;
        }
    }
    ctx->pc = 0x264A74u;
    // 0x264a74: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x264a78: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x264A78u;
    {
        const bool branch_taken_0x264a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A78u;
            // 0x264a7c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a78) {
            ctx->pc = 0x264C90u;
            goto label_264c90;
        }
    }
    ctx->pc = 0x264A80u;
    // 0x264a80: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x264a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x264a84: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x264A84u;
    SET_GPR_U32(ctx, 31, 0x264A8Cu);
    ctx->pc = 0x264A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A84u;
            // 0x264a88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A8Cu; }
        if (ctx->pc != 0x264A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A8Cu; }
        if (ctx->pc != 0x264A8Cu) { return; }
    }
    ctx->pc = 0x264A8Cu;
label_264a8c:
    // 0x264a8c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x264A8Cu;
    {
        const bool branch_taken_0x264a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a8c) {
            ctx->pc = 0x264C90u;
            goto label_264c90;
        }
    }
    ctx->pc = 0x264A94u;
label_264a94:
    // 0x264a94: 0x0  nop
    ctx->pc = 0x264a94u;
    // NOP
    // 0x264a98: 0xc0a6378  jal         func_298DE0
    ctx->pc = 0x264A98u;
    SET_GPR_U32(ctx, 31, 0x264AA0u);
    ctx->pc = 0x264A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A98u;
            // 0x264a9c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298DE0u;
    if (runtime->hasFunction(0x298DE0u)) {
        auto targetFn = runtime->lookupFunction(0x298DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AA0u; }
        if (ctx->pc != 0x264AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Term__6CMovieFv_0x298de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AA0u; }
        if (ctx->pc != 0x264AA0u) { return; }
    }
    ctx->pc = 0x264AA0u;
label_264aa0:
    // 0x264aa0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x264aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x264aa4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264aa8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x264AA8u;
    SET_GPR_U32(ctx, 31, 0x264AB0u);
    ctx->pc = 0x264AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264AA8u;
            // 0x264aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AB0u; }
        if (ctx->pc != 0x264AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AB0u; }
        if (ctx->pc != 0x264AB0u) { return; }
    }
    ctx->pc = 0x264AB0u;
label_264ab0:
    // 0x264ab0: 0xc050878  jal         func_1421E0
    ctx->pc = 0x264AB0u;
    SET_GPR_U32(ctx, 31, 0x264AB8u);
    ctx->pc = 0x264AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264AB0u;
            // 0x264ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AB8u; }
        if (ctx->pc != 0x264AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AB8u; }
        if (ctx->pc != 0x264AB8u) { return; }
    }
    ctx->pc = 0x264AB8u;
label_264ab8:
    // 0x264ab8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264abc: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264ac0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x264AC0u;
    SET_GPR_U32(ctx, 31, 0x264AC8u);
    ctx->pc = 0x264AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264AC0u;
            // 0x264ac4: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AC8u; }
        if (ctx->pc != 0x264AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AC8u; }
        if (ctx->pc != 0x264AC8u) { return; }
    }
    ctx->pc = 0x264AC8u;
label_264ac8:
    // 0x264ac8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ad0: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ad8: 0xc04d104  jal         func_134410
    ctx->pc = 0x264AD8u;
    SET_GPR_U32(ctx, 31, 0x264AE0u);
    ctx->pc = 0x264ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264AD8u;
            // 0x264adc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AE0u; }
        if (ctx->pc != 0x264AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AE0u; }
        if (ctx->pc != 0x264AE0u) { return; }
    }
    ctx->pc = 0x264AE0u;
label_264ae0:
    // 0x264ae0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264ae4: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264ae8: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x264AE8u;
    SET_GPR_U32(ctx, 31, 0x264AF0u);
    ctx->pc = 0x264AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264AE8u;
            // 0x264aec: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AF0u; }
        if (ctx->pc != 0x264AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AF0u; }
        if (ctx->pc != 0x264AF0u) { return; }
    }
    ctx->pc = 0x264AF0u;
label_264af0:
    // 0x264af0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264af8: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264afc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x264AFCu;
    SET_GPR_U32(ctx, 31, 0x264B04u);
    ctx->pc = 0x264B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264AFCu;
            // 0x264b00: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B04u; }
        if (ctx->pc != 0x264B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B04u; }
        if (ctx->pc != 0x264B04u) { return; }
    }
    ctx->pc = 0x264B04u;
label_264b04:
    // 0x264b04: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264b0c: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264b10: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x264B10u;
    SET_GPR_U32(ctx, 31, 0x264B18u);
    ctx->pc = 0x264B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264B10u;
            // 0x264b14: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B18u; }
        if (ctx->pc != 0x264B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B18u; }
        if (ctx->pc != 0x264B18u) { return; }
    }
    ctx->pc = 0x264B18u;
label_264b18:
    // 0x264b18: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264b1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x264b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x264b20: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264b24: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x264B24u;
    SET_GPR_U32(ctx, 31, 0x264B2Cu);
    ctx->pc = 0x264B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264B24u;
            // 0x264b28: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B2Cu; }
        if (ctx->pc != 0x264B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B2Cu; }
        if (ctx->pc != 0x264B2Cu) { return; }
    }
    ctx->pc = 0x264B2Cu;
label_264b2c:
    // 0x264b2c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b34: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264b38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b3c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b44: 0xc04d320  jal         func_134C80
    ctx->pc = 0x264B44u;
    SET_GPR_U32(ctx, 31, 0x264B4Cu);
    ctx->pc = 0x264B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264B44u;
            // 0x264b48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B4Cu; }
        if (ctx->pc != 0x264B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B4Cu; }
        if (ctx->pc != 0x264B4Cu) { return; }
    }
    ctx->pc = 0x264B4Cu;
label_264b4c:
    // 0x264b4c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b54: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b5c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264b60: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x264b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x264b64: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x264b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x264b68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x264b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b6c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x264B6Cu;
    SET_GPR_U32(ctx, 31, 0x264B74u);
    ctx->pc = 0x264B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264B6Cu;
            // 0x264b70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B74u; }
        if (ctx->pc != 0x264B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B74u; }
        if (ctx->pc != 0x264B74u) { return; }
    }
    ctx->pc = 0x264B74u;
label_264b74:
    // 0x264b74: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x264b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264b78: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264b7c: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264b80: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x264B80u;
    SET_GPR_U32(ctx, 31, 0x264B88u);
    ctx->pc = 0x264B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264B80u;
            // 0x264b84: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B88u; }
        if (ctx->pc != 0x264B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B88u; }
        if (ctx->pc != 0x264B88u) { return; }
    }
    ctx->pc = 0x264B88u;
label_264b88:
    // 0x264b88: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264b8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x264b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x264b90: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264b94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x264b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b98: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264b9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x264b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ba0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x264BA0u;
    SET_GPR_U32(ctx, 31, 0x264BA8u);
    ctx->pc = 0x264BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264BA0u;
            // 0x264ba4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BA8u; }
        if (ctx->pc != 0x264BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BA8u; }
        if (ctx->pc != 0x264BA8u) { return; }
    }
    ctx->pc = 0x264BA8u;
label_264ba8:
    // 0x264ba8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bb0: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bb8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264bbc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x264bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x264bc0: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x264bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x264bc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x264bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bc8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x264BC8u;
    SET_GPR_U32(ctx, 31, 0x264BD0u);
    ctx->pc = 0x264BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264BC8u;
            // 0x264bcc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BD0u; }
        if (ctx->pc != 0x264BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BD0u; }
        if (ctx->pc != 0x264BD0u) { return; }
    }
    ctx->pc = 0x264BD0u;
label_264bd0:
    // 0x264bd0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264bd4: 0x34213b10  ori         $at, $at, 0x3B10
    ctx->pc = 0x264bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15120);
    // 0x264bd8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x264BD8u;
    SET_GPR_U32(ctx, 31, 0x264BE0u);
    ctx->pc = 0x264BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264BD8u;
            // 0x264bdc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BE0u; }
        if (ctx->pc != 0x264BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BE0u; }
        if (ctx->pc != 0x264BE0u) { return; }
    }
    ctx->pc = 0x264BE0u;
label_264be0:
    // 0x264be0: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x264be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x264be4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x264be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x264be8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264bec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x264becu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x264bf0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x264bf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x264bf4: 0xc05f610  jal         func_17D840
    ctx->pc = 0x264BF4u;
    SET_GPR_U32(ctx, 31, 0x264BFCu);
    ctx->pc = 0x264BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264BF4u;
            // 0x264bf8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BFCu; }
        if (ctx->pc != 0x264BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BFCu; }
        if (ctx->pc != 0x264BFCu) { return; }
    }
    ctx->pc = 0x264BFCu;
label_264bfc:
    // 0x264bfc: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x264BFCu;
    SET_GPR_U32(ctx, 31, 0x264C04u);
    ctx->pc = 0x264C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264BFCu;
            // 0x264c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C04u; }
        if (ctx->pc != 0x264C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C04u; }
        if (ctx->pc != 0x264C04u) { return; }
    }
    ctx->pc = 0x264C04u;
label_264c04:
    // 0x264c04: 0xc050878  jal         func_1421E0
    ctx->pc = 0x264C04u;
    SET_GPR_U32(ctx, 31, 0x264C0Cu);
    ctx->pc = 0x264C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264C04u;
            // 0x264c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C0Cu; }
        if (ctx->pc != 0x264C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C0Cu; }
        if (ctx->pc != 0x264C0Cu) { return; }
    }
    ctx->pc = 0x264C0Cu;
label_264c0c:
    // 0x264c0c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x264c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x264c10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x264c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264c14: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x264c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x264c18: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x264c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x264c1c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x264c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x264c20: 0x8c22e634  lw          $v0, -0x19CC($at)
    ctx->pc = 0x264c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960692)));
    // 0x264c24: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x264C24u;
    {
        const bool branch_taken_0x264c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264C24u;
            // 0x264c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c24) {
            ctx->pc = 0x264C88u;
            goto label_264c88;
        }
    }
    ctx->pc = 0x264C2Cu;
    // 0x264c2c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x264c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264c30: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x264C30u;
    {
        const bool branch_taken_0x264c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264c30) {
            ctx->pc = 0x264C84u;
            goto label_264c84;
        }
    }
    ctx->pc = 0x264C38u;
    // 0x264c38: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x264c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x264c3c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x264C3Cu;
    SET_GPR_U32(ctx, 31, 0x264C44u);
    ctx->pc = 0x264C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264C3Cu;
            // 0x264c40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C44u; }
        if (ctx->pc != 0x264C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C44u; }
        if (ctx->pc != 0x264C44u) { return; }
    }
    ctx->pc = 0x264C44u;
label_264c44:
    // 0x264c44: 0xc0b61d8  jal         func_2D8760
    ctx->pc = 0x264C44u;
    SET_GPR_U32(ctx, 31, 0x264C4Cu);
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C4Cu; }
        if (ctx->pc != 0x264C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C4Cu; }
        if (ctx->pc != 0x264C4Cu) { return; }
    }
    ctx->pc = 0x264C4Cu;
label_264c4c:
    // 0x264c4c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x264c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c5c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x264C5Cu;
    SET_GPR_U32(ctx, 31, 0x264C64u);
    ctx->pc = 0x264C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264C5Cu;
            // 0x264c60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C64u; }
        if (ctx->pc != 0x264C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C64u; }
        if (ctx->pc != 0x264C64u) { return; }
    }
    ctx->pc = 0x264C64u;
label_264c64:
    // 0x264c64: 0xc0b61f8  jal         func_2D87E0
    ctx->pc = 0x264C64u;
    SET_GPR_U32(ctx, 31, 0x264C6Cu);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C6Cu; }
        if (ctx->pc != 0x264C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C6Cu; }
        if (ctx->pc != 0x264C6Cu) { return; }
    }
    ctx->pc = 0x264C6Cu;
label_264c6c:
    // 0x264c6c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x264c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264c70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c7c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x264C7Cu;
    SET_GPR_U32(ctx, 31, 0x264C84u);
    ctx->pc = 0x264C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264C7Cu;
            // 0x264c80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C84u; }
        if (ctx->pc != 0x264C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C84u; }
        if (ctx->pc != 0x264C84u) { return; }
    }
    ctx->pc = 0x264C84u;
label_264c84:
    // 0x264c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264c88:
    // 0x264c88: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x264C88u;
    {
        const bool branch_taken_0x264c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c88) {
            ctx->pc = 0x264F70u;
            goto label_264f70;
        }
    }
    ctx->pc = 0x264C90u;
label_264c90:
    // 0x264c90: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x264c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x264c94: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c98: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x264C98u;
    SET_GPR_U32(ctx, 31, 0x264CA0u);
    ctx->pc = 0x264C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264C98u;
            // 0x264c9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CA0u; }
        if (ctx->pc != 0x264CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CA0u; }
        if (ctx->pc != 0x264CA0u) { return; }
    }
    ctx->pc = 0x264CA0u;
label_264ca0:
    // 0x264ca0: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x264CA0u;
    SET_GPR_U32(ctx, 31, 0x264CA8u);
    ctx->pc = 0x264CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264CA0u;
            // 0x264ca4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CA8u; }
        if (ctx->pc != 0x264CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CA8u; }
        if (ctx->pc != 0x264CA8u) { return; }
    }
    ctx->pc = 0x264CA8u;
label_264ca8:
    // 0x264ca8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264cac: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264cb0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x264CB0u;
    SET_GPR_U32(ctx, 31, 0x264CB8u);
    ctx->pc = 0x264CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264CB0u;
            // 0x264cb4: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CB8u; }
        if (ctx->pc != 0x264CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CB8u; }
        if (ctx->pc != 0x264CB8u) { return; }
    }
    ctx->pc = 0x264CB8u;
label_264cb8:
    // 0x264cb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264cc0: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264cc8: 0xc04d104  jal         func_134410
    ctx->pc = 0x264CC8u;
    SET_GPR_U32(ctx, 31, 0x264CD0u);
    ctx->pc = 0x264CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264CC8u;
            // 0x264ccc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CD0u; }
        if (ctx->pc != 0x264CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CD0u; }
        if (ctx->pc != 0x264CD0u) { return; }
    }
    ctx->pc = 0x264CD0u;
label_264cd0:
    // 0x264cd0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264cd4: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264cd8: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x264CD8u;
    SET_GPR_U32(ctx, 31, 0x264CE0u);
    ctx->pc = 0x264CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264CD8u;
            // 0x264cdc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CE0u; }
        if (ctx->pc != 0x264CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CE0u; }
        if (ctx->pc != 0x264CE0u) { return; }
    }
    ctx->pc = 0x264CE0u;
label_264ce0:
    // 0x264ce0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ce8: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264cec: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x264CECu;
    SET_GPR_U32(ctx, 31, 0x264CF4u);
    ctx->pc = 0x264CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264CECu;
            // 0x264cf0: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CF4u; }
        if (ctx->pc != 0x264CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264CF4u; }
        if (ctx->pc != 0x264CF4u) { return; }
    }
    ctx->pc = 0x264CF4u;
label_264cf4:
    // 0x264cf4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264cfc: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264d00: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x264D00u;
    SET_GPR_U32(ctx, 31, 0x264D08u);
    ctx->pc = 0x264D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264D00u;
            // 0x264d04: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D08u; }
        if (ctx->pc != 0x264D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D08u; }
        if (ctx->pc != 0x264D08u) { return; }
    }
    ctx->pc = 0x264D08u;
label_264d08:
    // 0x264d08: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264d0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x264d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x264d10: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264d14: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x264D14u;
    SET_GPR_U32(ctx, 31, 0x264D1Cu);
    ctx->pc = 0x264D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264D14u;
            // 0x264d18: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D1Cu; }
        if (ctx->pc != 0x264D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D1Cu; }
        if (ctx->pc != 0x264D1Cu) { return; }
    }
    ctx->pc = 0x264D1Cu;
label_264d1c:
    // 0x264d1c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d24: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d2c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d34: 0xc04d320  jal         func_134C80
    ctx->pc = 0x264D34u;
    SET_GPR_U32(ctx, 31, 0x264D3Cu);
    ctx->pc = 0x264D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264D34u;
            // 0x264d38: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D3Cu; }
        if (ctx->pc != 0x264D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D3Cu; }
        if (ctx->pc != 0x264D3Cu) { return; }
    }
    ctx->pc = 0x264D3Cu;
label_264d3c:
    // 0x264d3c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d44: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d4c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264d50: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x264d54: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x264d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x264d58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x264d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d5c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x264D5Cu;
    SET_GPR_U32(ctx, 31, 0x264D64u);
    ctx->pc = 0x264D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264D5Cu;
            // 0x264d60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D64u; }
        if (ctx->pc != 0x264D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D64u; }
        if (ctx->pc != 0x264D64u) { return; }
    }
    ctx->pc = 0x264D64u;
label_264d64:
    // 0x264d64: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x264d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264d68: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264d6c: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264d70: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x264D70u;
    SET_GPR_U32(ctx, 31, 0x264D78u);
    ctx->pc = 0x264D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264D70u;
            // 0x264d74: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D78u; }
        if (ctx->pc != 0x264D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D78u; }
        if (ctx->pc != 0x264D78u) { return; }
    }
    ctx->pc = 0x264D78u;
label_264d78:
    // 0x264d78: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264d7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x264d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x264d80: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264d84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x264d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d88: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264d8c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x264d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d90: 0xc04d320  jal         func_134C80
    ctx->pc = 0x264D90u;
    SET_GPR_U32(ctx, 31, 0x264D98u);
    ctx->pc = 0x264D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264D90u;
            // 0x264d94: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D98u; }
        if (ctx->pc != 0x264D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D98u; }
        if (ctx->pc != 0x264D98u) { return; }
    }
    ctx->pc = 0x264D98u;
label_264d98:
    // 0x264d98: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264da0: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264da8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264dac: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x264dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x264db0: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x264db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x264db4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x264db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264db8: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x264DB8u;
    SET_GPR_U32(ctx, 31, 0x264DC0u);
    ctx->pc = 0x264DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DB8u;
            // 0x264dbc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DC0u; }
        if (ctx->pc != 0x264DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DC0u; }
        if (ctx->pc != 0x264DC0u) { return; }
    }
    ctx->pc = 0x264DC0u;
label_264dc0:
    // 0x264dc0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264dc4: 0x34213c30  ori         $at, $at, 0x3C30
    ctx->pc = 0x264dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15408);
    // 0x264dc8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x264DC8u;
    SET_GPR_U32(ctx, 31, 0x264DD0u);
    ctx->pc = 0x264DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DC8u;
            // 0x264dcc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DD0u; }
        if (ctx->pc != 0x264DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DD0u; }
        if (ctx->pc != 0x264DD0u) { return; }
    }
    ctx->pc = 0x264DD0u;
label_264dd0:
    // 0x264dd0: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x264dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x264dd4: 0xc05f7b4  jal         func_17DED0
    ctx->pc = 0x264DD4u;
    SET_GPR_U32(ctx, 31, 0x264DDCu);
    ctx->pc = 0x264DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DD4u;
            // 0x264dd8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DDCu; }
        if (ctx->pc != 0x264DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DDCu; }
        if (ctx->pc != 0x264DDCu) { return; }
    }
    ctx->pc = 0x264DDCu;
label_264ddc:
    // 0x264ddc: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x264ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x264de0: 0xc05f664  jal         func_17D990
    ctx->pc = 0x264DE0u;
    SET_GPR_U32(ctx, 31, 0x264DE8u);
    ctx->pc = 0x264DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264DE0u;
            // 0x264de4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DE8u; }
        if (ctx->pc != 0x264DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DE8u; }
        if (ctx->pc != 0x264DE8u) { return; }
    }
    ctx->pc = 0x264DE8u;
label_264de8:
    // 0x264de8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x264de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264dec: 0x8c22e634  lw          $v0, -0x19CC($at)
    ctx->pc = 0x264decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960692)));
    // 0x264df0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x264DF0u;
    {
        const bool branch_taken_0x264df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264df0) {
            ctx->pc = 0x264F60u;
            goto label_264f60;
        }
    }
    ctx->pc = 0x264DF8u;
    // 0x264df8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x264df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264dfc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x264DFCu;
    {
        const bool branch_taken_0x264dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264DFCu;
            // 0x264e00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264dfc) {
            ctx->pc = 0x264F60u;
            goto label_264f60;
        }
    }
    ctx->pc = 0x264E04u;
    // 0x264e04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x264e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264e08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x264e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264e0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x264e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264e10:
    // 0x264e10: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x264e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x264e14: 0x2463e430  addiu       $v1, $v1, -0x1BD0
    ctx->pc = 0x264e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960176));
    // 0x264e18: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x264e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x264e1c: 0x8c450208  lw          $a1, 0x208($v0)
    ctx->pc = 0x264e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
    // 0x264e20: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x264e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x264e24: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x264E24u;
    {
        const bool branch_taken_0x264e24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E24u;
            // 0x264e28: 0x24550208  addiu       $s5, $v0, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e24) {
            ctx->pc = 0x264F10u;
            goto label_264f10;
        }
    }
    ctx->pc = 0x264E2Cu;
    // 0x264e2c: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x264e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x264e30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x264e34: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x264e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x264e38: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x264E38u;
    {
        const bool branch_taken_0x264e38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264E38u;
            // 0x264e3c: 0x731021  addu        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e38) {
            ctx->pc = 0x264F10u;
            goto label_264f10;
        }
    }
    ctx->pc = 0x264E40u;
    // 0x264e40: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264e44: 0x34213a60  ori         $at, $at, 0x3A60
    ctx->pc = 0x264e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14944);
    // 0x264e48: 0x24540228  addiu       $s4, $v0, 0x228
    ctx->pc = 0x264e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x264e4c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264e50: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x264e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x264e54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x264e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264e58: 0xc0b55f8  jal         func_2D57E0
    ctx->pc = 0x264E58u;
    SET_GPR_U32(ctx, 31, 0x264E60u);
    ctx->pc = 0x264E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264E58u;
            // 0x264e5c: 0x27a7010c  addiu       $a3, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D57E0u;
    if (runtime->hasFunction(0x2D57E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D57E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E60u; }
        if (ctx->pc != 0x264E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcDrawWH__5CFontFPcPiPi_0x2d57e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E60u; }
        if (ctx->pc != 0x264E60u) { return; }
    }
    ctx->pc = 0x264E60u;
label_264e60:
    // 0x264e60: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x264e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e64: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x264e68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x264e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x264e6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x264e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x264e70: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x264e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x264e74: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x264e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x264e78: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x264E78u;
    SET_GPR_U32(ctx, 31, 0x264E80u);
    ctx->pc = 0x264E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264E78u;
            // 0x264e7c: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E80u; }
        if (ctx->pc != 0x264E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E80u; }
        if (ctx->pc != 0x264E80u) { return; }
    }
    ctx->pc = 0x264E80u;
label_264e80:
    // 0x264e80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x264E80u;
    SET_GPR_U32(ctx, 31, 0x264E88u);
    ctx->pc = 0x264E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264E80u;
            // 0x264e84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E88u; }
        if (ctx->pc != 0x264E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E88u; }
        if (ctx->pc != 0x264E88u) { return; }
    }
    ctx->pc = 0x264E88u;
label_264e88:
    // 0x264e88: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x264e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e8c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x264e8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264e90: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x264e94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x264e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x264e98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x264e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x264e9c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x264e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x264ea0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x264ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x264ea4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x264ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x264ea8: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x264EA8u;
    SET_GPR_U32(ctx, 31, 0x264EB0u);
    ctx->pc = 0x264EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264EA8u;
            // 0x264eac: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EB0u; }
        if (ctx->pc != 0x264EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EB0u; }
        if (ctx->pc != 0x264EB0u) { return; }
    }
    ctx->pc = 0x264EB0u;
label_264eb0:
    // 0x264eb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x264EB0u;
    SET_GPR_U32(ctx, 31, 0x264EB8u);
    ctx->pc = 0x264EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264EB0u;
            // 0x264eb4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EB8u; }
        if (ctx->pc != 0x264EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EB8u; }
        if (ctx->pc != 0x264EB8u) { return; }
    }
    ctx->pc = 0x264EB8u;
label_264eb8:
    // 0x264eb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264ebc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x264ebcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ec0: 0x34213d50  ori         $at, $at, 0x3D50
    ctx->pc = 0x264ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15696);
    // 0x264ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ec8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264ecc: 0xc049c86  jal         func_127218
    ctx->pc = 0x264ECCu;
    SET_GPR_U32(ctx, 31, 0x264ED4u);
    ctx->pc = 0x264ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264ECCu;
            // 0x264ed0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264ED4u; }
        if (ctx->pc != 0x264ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264ED4u; }
        if (ctx->pc != 0x264ED4u) { return; }
    }
    ctx->pc = 0x264ED4u;
label_264ed4:
    // 0x264ed4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x264ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x264ed8: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x264ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x264edc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264EDCu;
    {
        const bool branch_taken_0x264edc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x264EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264EDCu;
            // 0x264ee0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264edc) {
            ctx->pc = 0x264EECu;
            goto label_264eec;
        }
    }
    ctx->pc = 0x264EE4u;
    // 0x264ee4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x264ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x264ee8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x264ee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_264eec:
    // 0x264eec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264ef0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x264ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x264ef4: 0x34213d50  ori         $at, $at, 0x3D50
    ctx->pc = 0x264ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15696);
    // 0x264ef8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x264ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264efc: 0xc04a54a  jal         func_129528
    ctx->pc = 0x264EFCu;
    SET_GPR_U32(ctx, 31, 0x264F04u);
    ctx->pc = 0x264F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264EFCu;
            // 0x264f00: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F04u; }
        if (ctx->pc != 0x264F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F04u; }
        if (ctx->pc != 0x264F04u) { return; }
    }
    ctx->pc = 0x264F04u;
label_264f04:
    // 0x264f04: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264f08: 0x34213d50  ori         $at, $at, 0x3D50
    ctx->pc = 0x264f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15696);
    // 0x264f0c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_264f10:
    // 0x264f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x264f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x264f14: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x264f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x264f18: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264f1c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x264F1Cu;
    {
        const bool branch_taken_0x264f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264F1Cu;
            // 0x264f20: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f1c) {
            ctx->pc = 0x264E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264e10;
        }
    }
    ctx->pc = 0x264F24u;
    // 0x264f24: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x264F24u;
    {
        const bool branch_taken_0x264f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264f24) {
            ctx->pc = 0x264F60u;
            goto label_264f60;
        }
    }
    ctx->pc = 0x264F2Cu;
    // 0x264f2c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x264f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x264f30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x264f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f34: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x264F34u;
    SET_GPR_U32(ctx, 31, 0x264F3Cu);
    ctx->pc = 0x264F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264F34u;
            // 0x264f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F3Cu; }
        if (ctx->pc != 0x264F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F3Cu; }
        if (ctx->pc != 0x264F3Cu) { return; }
    }
    ctx->pc = 0x264F3Cu;
label_264f3c:
    // 0x264f3c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264f40: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x264f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f44: 0x34213a60  ori         $at, $at, 0x3A60
    ctx->pc = 0x264f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14944);
    // 0x264f48: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x264f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f4c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x264f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x264f50: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264f54: 0x34213d50  ori         $at, $at, 0x3D50
    ctx->pc = 0x264f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15696);
    // 0x264f58: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x264F58u;
    SET_GPR_U32(ctx, 31, 0x264F60u);
    ctx->pc = 0x264F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264F58u;
            // 0x264f5c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F60u; }
        if (ctx->pc != 0x264F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F60u; }
        if (ctx->pc != 0x264F60u) { return; }
    }
    ctx->pc = 0x264F60u;
label_264f60:
    // 0x264f60: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x264F60u;
    SET_GPR_U32(ctx, 31, 0x264F68u);
    ctx->pc = 0x264F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264F60u;
            // 0x264f64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F68u; }
        if (ctx->pc != 0x264F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264F68u; }
        if (ctx->pc != 0x264F68u) { return; }
    }
    ctx->pc = 0x264F68u;
label_264f68:
    // 0x264f68: 0x1000feb6  b           . + 4 + (-0x14A << 2)
    ctx->pc = 0x264F68u;
    {
        const bool branch_taken_0x264f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264F68u;
            // 0x264f6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f68) {
            ctx->pc = 0x264A44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264a44;
        }
    }
    ctx->pc = 0x264F70u;
label_264f70:
    // 0x264f70: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x264f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x264f74: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x264f74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264f78: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x264f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x264f7c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x264f7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264f80: 0x34213dd0  ori         $at, $at, 0x3DD0
    ctx->pc = 0x264f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15824);
    // 0x264f84: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x264f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264f88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x264f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264f8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x264f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264f90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x264f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264f94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x264f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264f98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x264f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264f9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x264f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x264FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264FA0u;
            // 0x264fa4: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264FA8u;
}
