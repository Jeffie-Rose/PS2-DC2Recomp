#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGameObject__6CSceneFiiP9mgCMemory
// Address: 0x2cb5a0 - 0x2cb8f8
void LoadGameObject__6CSceneFiiP9mgCMemory_0x2cb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGameObject__6CSceneFiiP9mgCMemory_0x2cb5a0");
#endif

    switch (ctx->pc) {
        case 0x2cb5e8u: goto label_2cb5e8;
        case 0x2cb5f4u: goto label_2cb5f4;
        case 0x2cb600u: goto label_2cb600;
        case 0x2cb60cu: goto label_2cb60c;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb630u: goto label_2cb630;
        case 0x2cb640u: goto label_2cb640;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb6ccu: goto label_2cb6cc;
        case 0x2cb6dcu: goto label_2cb6dc;
        case 0x2cb6f4u: goto label_2cb6f4;
        case 0x2cb728u: goto label_2cb728;
        case 0x2cb738u: goto label_2cb738;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb790u: goto label_2cb790;
        case 0x2cb7a0u: goto label_2cb7a0;
        case 0x2cb7b8u: goto label_2cb7b8;
        case 0x2cb7ecu: goto label_2cb7ec;
        case 0x2cb7fcu: goto label_2cb7fc;
        case 0x2cb824u: goto label_2cb824;
        case 0x2cb858u: goto label_2cb858;
        case 0x2cb868u: goto label_2cb868;
        case 0x2cb880u: goto label_2cb880;
        case 0x2cb8b4u: goto label_2cb8b4;
        case 0x2cb8c4u: goto label_2cb8c4;
        default: break;
    }

    ctx->pc = 0x2cb5a0u;

    // 0x2cb5a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cb5a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2cb5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2cb5a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2cb5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2cb5ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cb5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2cb5b0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2cb5b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2cb5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2cb5b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cb5b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cb5c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2cb5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cb5c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2cb5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cb5d0: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2cb5d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cb5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cb5d8: 0x8c92003c  lw          $s2, 0x3C($a0)
    ctx->pc = 0x2cb5d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2cb5dc: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2cb5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2cb5e0: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2CB5E0u;
    SET_GPR_U32(ctx, 31, 0x2CB5E8u);
    ctx->pc = 0x2CB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5E0u;
            // 0x2cb5e4: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5E8u; }
        if (ctx->pc != 0x2CB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5E8u; }
        if (ctx->pc != 0x2CB5E8u) { return; }
    }
    ctx->pc = 0x2CB5E8u;
label_2cb5e8:
    // 0x2cb5e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5ec: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2CB5ECu;
    SET_GPR_U32(ctx, 31, 0x2CB5F4u);
    ctx->pc = 0x2CB5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5ECu;
            // 0x2cb5f0: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5F4u; }
        if (ctx->pc != 0x2CB5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5F4u; }
        if (ctx->pc != 0x2CB5F4u) { return; }
    }
    ctx->pc = 0x2CB5F4u;
label_2cb5f4:
    // 0x2cb5f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5f8: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2CB5F8u;
    SET_GPR_U32(ctx, 31, 0x2CB600u);
    ctx->pc = 0x2CB5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5F8u;
            // 0x2cb5fc: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB600u; }
        if (ctx->pc != 0x2CB600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB600u; }
        if (ctx->pc != 0x2CB600u) { return; }
    }
    ctx->pc = 0x2CB600u;
label_2cb600:
    // 0x2cb600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb604: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2CB604u;
    SET_GPR_U32(ctx, 31, 0x2CB60Cu);
    ctx->pc = 0x2CB608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB604u;
            // 0x2cb608: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB60Cu; }
        if (ctx->pc != 0x2CB60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB60Cu; }
        if (ctx->pc != 0x2CB60Cu) { return; }
    }
    ctx->pc = 0x2CB60Cu;
label_2cb60c:
    // 0x2cb60c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2cb60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2cb610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cb610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb614: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2CB614u;
    SET_GPR_U32(ctx, 31, 0x2CB61Cu);
    ctx->pc = 0x2CB618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB614u;
            // 0x2cb618: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB61Cu; }
        if (ctx->pc != 0x2CB61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB61Cu; }
        if (ctx->pc != 0x2CB61Cu) { return; }
    }
    ctx->pc = 0x2CB61Cu;
label_2cb61c:
    // 0x2cb61c: 0x8ea33040  lw          $v1, 0x3040($s5)
    ctx->pc = 0x2cb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12352)));
    // 0x2cb620: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB620u;
    {
        const bool branch_taken_0x2cb620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB620u;
            // 0x2cb624: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb620) {
            ctx->pc = 0x2CB640u;
            goto label_2cb640;
        }
    }
    ctx->pc = 0x2CB628u;
    // 0x2cb628: 0xc0c69d0  jal         func_31A740
    ctx->pc = 0x2CB628u;
    SET_GPR_U32(ctx, 31, 0x2CB630u);
    ctx->pc = 0x2CB62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB628u;
            // 0x2cb62c: 0x8c641a08  lw          $a0, 0x1A08($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A740u;
    if (runtime->hasFunction(0x31A740u)) {
        auto targetFn = runtime->lookupFunction(0x31A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB630u; }
        if (ctx->pc != 0x2CB630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameChapter__Fi_0x31a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB630u; }
        if (ctx->pc != 0x2CB630u) { return; }
    }
    ctx->pc = 0x2CB630u;
label_2cb630:
    // 0x2cb630: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2cb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cb634: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB634u;
    {
        const bool branch_taken_0x2cb634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cb634) {
            ctx->pc = 0x2CB640u;
            goto label_2cb640;
        }
    }
    ctx->pc = 0x2CB63Cu;
    // 0x2cb63c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2cb63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb640:
    // 0x2cb640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb644: 0x46000a2  bltz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2CB644u;
    {
        const bool branch_taken_0x2cb644 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2cb644) {
            ctx->pc = 0x2CB8D0u;
            goto label_2cb8d0;
        }
    }
    ctx->pc = 0x2CB64Cu;
    // 0x2cb64c: 0x1476009d  bne         $v1, $s6, . + 4 + (0x9D << 2)
    ctx->pc = 0x2CB64Cu;
    {
        const bool branch_taken_0x2cb64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2cb64c) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB654u;
    // 0x2cb654: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cb654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cb658: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb65c: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2CB65Cu;
    {
        const bool branch_taken_0x2cb65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB65Cu;
            // 0x2cb660: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb65c) {
            ctx->pc = 0x2CB804u;
            goto label_2cb804;
        }
    }
    ctx->pc = 0x2CB664u;
    // 0x2cb664: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CB664u;
    {
        const bool branch_taken_0x2cb664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB664u;
            // 0x2cb668: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb664) {
            ctx->pc = 0x2CB740u;
            goto label_2cb740;
        }
    }
    ctx->pc = 0x2CB66Cu;
    // 0x2cb66c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB66Cu;
    {
        const bool branch_taken_0x2cb66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cb66c) {
            ctx->pc = 0x2CB67Cu;
            goto label_2cb67c;
        }
    }
    ctx->pc = 0x2CB674u;
    // 0x2cb674: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2CB674u;
    {
        const bool branch_taken_0x2cb674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb674) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB67Cu;
label_2cb67c:
    // 0x2cb67c: 0x0  nop
    ctx->pc = 0x2cb67cu;
    // NOP
    // 0x2cb680: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cb680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cb684: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x2cb684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x2cb688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb68c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb690: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CB690u;
    SET_GPR_U32(ctx, 31, 0x2CB698u);
    ctx->pc = 0x2CB694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB690u;
            // 0x2cb694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB698u; }
        if (ctx->pc != 0x2CB698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB698u; }
        if (ctx->pc != 0x2CB698u) { return; }
    }
    ctx->pc = 0x2CB698u;
label_2cb698:
    // 0x2cb698: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2CB698u;
    {
        const bool branch_taken_0x2cb698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb698) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB6A0u;
    // 0x2cb6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb6a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2cb6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2cb6ac: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x2cb6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2cb6b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb6b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6bc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cb6bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6c0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cb6c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6c4: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CB6C4u;
    SET_GPR_U32(ctx, 31, 0x2CB6CCu);
    ctx->pc = 0x2CB6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6C4u;
            // 0x2cb6c8: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6CCu; }
        if (ctx->pc != 0x2CB6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6CCu; }
        if (ctx->pc != 0x2CB6CCu) { return; }
    }
    ctx->pc = 0x2CB6CCu;
label_2cb6cc:
    // 0x2cb6cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb6d4: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB6D4u;
    SET_GPR_U32(ctx, 31, 0x2CB6DCu);
    ctx->pc = 0x2CB6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6D4u;
            // 0x2cb6d8: 0x2406007a  addiu       $a2, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6DCu; }
        if (ctx->pc != 0x2CB6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6DCu; }
        if (ctx->pc != 0x2CB6DCu) { return; }
    }
    ctx->pc = 0x2CB6DCu;
label_2cb6dc:
    // 0x2cb6dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cb6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cb6e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6e4: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2cb6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2cb6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6ec: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CB6ECu;
    SET_GPR_U32(ctx, 31, 0x2CB6F4u);
    ctx->pc = 0x2CB6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB6ECu;
            // 0x2cb6f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6F4u; }
        if (ctx->pc != 0x2CB6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB6F4u; }
        if (ctx->pc != 0x2CB6F4u) { return; }
    }
    ctx->pc = 0x2CB6F4u;
label_2cb6f4:
    // 0x2cb6f4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2CB6F4u;
    {
        const bool branch_taken_0x2cb6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6f4) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB6FCu;
    // 0x2cb6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb700: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb704: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2cb704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2cb708: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x2cb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2cb70c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb714: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb718: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cb718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb71c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cb71cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb720: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CB720u;
    SET_GPR_U32(ctx, 31, 0x2CB728u);
    ctx->pc = 0x2CB724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB720u;
            // 0x2cb724: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB728u; }
        if (ctx->pc != 0x2CB728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB728u; }
        if (ctx->pc != 0x2CB728u) { return; }
    }
    ctx->pc = 0x2CB728u;
label_2cb728:
    // 0x2cb728: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb730: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB730u;
    SET_GPR_U32(ctx, 31, 0x2CB738u);
    ctx->pc = 0x2CB734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB730u;
            // 0x2cb734: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB738u; }
        if (ctx->pc != 0x2CB738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB738u; }
        if (ctx->pc != 0x2CB738u) { return; }
    }
    ctx->pc = 0x2CB738u;
label_2cb738:
    // 0x2cb738: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2CB738u;
    {
        const bool branch_taken_0x2cb738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb738) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB740u;
label_2cb740:
    // 0x2cb740: 0x16200060  bnez        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2CB740u;
    {
        const bool branch_taken_0x2cb740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB740u;
            // 0x2cb744: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb740) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB748u;
    // 0x2cb748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb74c: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x2cb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x2cb750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb754: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CB754u;
    SET_GPR_U32(ctx, 31, 0x2CB75Cu);
    ctx->pc = 0x2CB758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB754u;
            // 0x2cb758: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB75Cu; }
        if (ctx->pc != 0x2CB75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB75Cu; }
        if (ctx->pc != 0x2CB75Cu) { return; }
    }
    ctx->pc = 0x2CB75Cu;
label_2cb75c:
    // 0x2cb75c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2CB75Cu;
    {
        const bool branch_taken_0x2cb75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb75c) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB764u;
    // 0x2cb764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb768: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb76c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2cb76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2cb770: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2cb770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2cb774: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb77c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb780: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cb780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb784: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cb784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb788: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CB788u;
    SET_GPR_U32(ctx, 31, 0x2CB790u);
    ctx->pc = 0x2CB78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB788u;
            // 0x2cb78c: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB790u; }
        if (ctx->pc != 0x2CB790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB790u; }
        if (ctx->pc != 0x2CB790u) { return; }
    }
    ctx->pc = 0x2CB790u;
label_2cb790:
    // 0x2cb790: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb798: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB798u;
    SET_GPR_U32(ctx, 31, 0x2CB7A0u);
    ctx->pc = 0x2CB79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB798u;
            // 0x2cb79c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7A0u; }
        if (ctx->pc != 0x2CB7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7A0u; }
        if (ctx->pc != 0x2CB7A0u) { return; }
    }
    ctx->pc = 0x2CB7A0u;
label_2cb7a0:
    // 0x2cb7a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cb7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cb7a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7a8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x2cb7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7b0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CB7B0u;
    SET_GPR_U32(ctx, 31, 0x2CB7B8u);
    ctx->pc = 0x2CB7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7B0u;
            // 0x2cb7b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7B8u; }
        if (ctx->pc != 0x2CB7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7B8u; }
        if (ctx->pc != 0x2CB7B8u) { return; }
    }
    ctx->pc = 0x2CB7B8u;
label_2cb7b8:
    // 0x2cb7b8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CB7B8u;
    {
        const bool branch_taken_0x2cb7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb7b8) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB7C0u;
    // 0x2cb7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb7c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2cb7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2cb7cc: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2cb7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x2cb7d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb7d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7dc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cb7dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7e0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cb7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7e4: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CB7E4u;
    SET_GPR_U32(ctx, 31, 0x2CB7ECu);
    ctx->pc = 0x2CB7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7E4u;
            // 0x2cb7e8: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7ECu; }
        if (ctx->pc != 0x2CB7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7ECu; }
        if (ctx->pc != 0x2CB7ECu) { return; }
    }
    ctx->pc = 0x2CB7ECu;
label_2cb7ec:
    // 0x2cb7ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb7f4: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB7F4u;
    SET_GPR_U32(ctx, 31, 0x2CB7FCu);
    ctx->pc = 0x2CB7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB7F4u;
            // 0x2cb7f8: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7FCu; }
        if (ctx->pc != 0x2CB7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7FCu; }
        if (ctx->pc != 0x2CB7FCu) { return; }
    }
    ctx->pc = 0x2CB7FCu;
label_2cb7fc:
    // 0x2cb7fc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2CB7FCu;
    {
        const bool branch_taken_0x2cb7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb7fc) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB804u;
label_2cb804:
    // 0x2cb804: 0x0  nop
    ctx->pc = 0x2cb804u;
    // NOP
    // 0x2cb808: 0x1620002e  bnez        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2CB808u;
    {
        const bool branch_taken_0x2cb808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB808u;
            // 0x2cb80c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb808) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB810u;
    // 0x2cb810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb814: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x2cb814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x2cb818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb81c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CB81Cu;
    SET_GPR_U32(ctx, 31, 0x2CB824u);
    ctx->pc = 0x2CB820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB81Cu;
            // 0x2cb820: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB824u; }
        if (ctx->pc != 0x2CB824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB824u; }
        if (ctx->pc != 0x2CB824u) { return; }
    }
    ctx->pc = 0x2CB824u;
label_2cb824:
    // 0x2cb824: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CB824u;
    {
        const bool branch_taken_0x2cb824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb824) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB82Cu;
    // 0x2cb82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb830: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb834: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2cb834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2cb838: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2cb838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2cb83c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb844: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb848: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cb848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb84c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cb84cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb850: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CB850u;
    SET_GPR_U32(ctx, 31, 0x2CB858u);
    ctx->pc = 0x2CB854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB850u;
            // 0x2cb854: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB858u; }
        if (ctx->pc != 0x2CB858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB858u; }
        if (ctx->pc != 0x2CB858u) { return; }
    }
    ctx->pc = 0x2CB858u;
label_2cb858:
    // 0x2cb858: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb85c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb860: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB860u;
    SET_GPR_U32(ctx, 31, 0x2CB868u);
    ctx->pc = 0x2CB864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB860u;
            // 0x2cb864: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB868u; }
        if (ctx->pc != 0x2CB868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB868u; }
        if (ctx->pc != 0x2CB868u) { return; }
    }
    ctx->pc = 0x2CB868u;
label_2cb868:
    // 0x2cb868: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cb868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cb86c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cb86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb870: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x2cb870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x2cb874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb878: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CB878u;
    SET_GPR_U32(ctx, 31, 0x2CB880u);
    ctx->pc = 0x2CB87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB878u;
            // 0x2cb87c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB880u; }
        if (ctx->pc != 0x2CB880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB880u; }
        if (ctx->pc != 0x2CB880u) { return; }
    }
    ctx->pc = 0x2CB880u;
label_2cb880:
    // 0x2cb880: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB880u;
    {
        const bool branch_taken_0x2cb880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb880) {
            ctx->pc = 0x2CB8C4u;
            goto label_2cb8c4;
        }
    }
    ctx->pc = 0x2CB888u;
    // 0x2cb888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb88c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb890: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2cb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2cb894: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2cb894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x2cb898: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb89c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cb8a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8a4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2cb8a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8a8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cb8a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8ac: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CB8ACu;
    SET_GPR_U32(ctx, 31, 0x2CB8B4u);
    ctx->pc = 0x2CB8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8ACu;
            // 0x2cb8b0: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8B4u; }
        if (ctx->pc != 0x2CB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8B4u; }
        if (ctx->pc != 0x2CB8B4u) { return; }
    }
    ctx->pc = 0x2CB8B4u;
label_2cb8b4:
    // 0x2cb8b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cb8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb8bc: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB8BCu;
    SET_GPR_U32(ctx, 31, 0x2CB8C4u);
    ctx->pc = 0x2CB8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8BCu;
            // 0x2cb8c0: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8C4u; }
        if (ctx->pc != 0x2CB8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB8C4u; }
        if (ctx->pc != 0x2CB8C4u) { return; }
    }
    ctx->pc = 0x2CB8C4u;
label_2cb8c4:
    // 0x2cb8c4: 0x0  nop
    ctx->pc = 0x2cb8c4u;
    // NOP
    // 0x2cb8c8: 0x1000ff5d  b           . + 4 + (-0xA3 << 2)
    ctx->pc = 0x2CB8C8u;
    {
        const bool branch_taken_0x2cb8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8C8u;
            // 0x2cb8cc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8c8) {
            ctx->pc = 0x2CB640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb640;
        }
    }
    ctx->pc = 0x2CB8D0u;
label_2cb8d0:
    // 0x2cb8d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2cb8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cb8d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cb8d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cb8d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cb8d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cb8dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cb8dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb8e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cb8e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb8e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cb8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb8e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cb8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb8ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cb8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB8F0u;
            // 0x2cb8f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB8F8u;
}
