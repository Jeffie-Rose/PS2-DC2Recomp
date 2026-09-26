#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadReferMonsterFile__11CMonsterManFiP16BASE_MONSTER_TBLP9mgCMemory
// Address: 0x1db8f0 - 0x1dbbb0
void LoadReferMonsterFile__11CMonsterManFiP16BASE_MONSTER_TBLP9mgCMemory_0x1db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadReferMonsterFile__11CMonsterManFiP16BASE_MONSTER_TBLP9mgCMemory_0x1db8f0");
#endif

    switch (ctx->pc) {
        case 0x1db8f0u: goto label_1db8f0;
        case 0x1db8f4u: goto label_1db8f4;
        case 0x1db8f8u: goto label_1db8f8;
        case 0x1db8fcu: goto label_1db8fc;
        case 0x1db900u: goto label_1db900;
        case 0x1db904u: goto label_1db904;
        case 0x1db908u: goto label_1db908;
        case 0x1db90cu: goto label_1db90c;
        case 0x1db910u: goto label_1db910;
        case 0x1db914u: goto label_1db914;
        case 0x1db918u: goto label_1db918;
        case 0x1db91cu: goto label_1db91c;
        case 0x1db920u: goto label_1db920;
        case 0x1db924u: goto label_1db924;
        case 0x1db928u: goto label_1db928;
        case 0x1db92cu: goto label_1db92c;
        case 0x1db930u: goto label_1db930;
        case 0x1db934u: goto label_1db934;
        case 0x1db938u: goto label_1db938;
        case 0x1db93cu: goto label_1db93c;
        case 0x1db940u: goto label_1db940;
        case 0x1db944u: goto label_1db944;
        case 0x1db948u: goto label_1db948;
        case 0x1db94cu: goto label_1db94c;
        case 0x1db950u: goto label_1db950;
        case 0x1db954u: goto label_1db954;
        case 0x1db958u: goto label_1db958;
        case 0x1db95cu: goto label_1db95c;
        case 0x1db960u: goto label_1db960;
        case 0x1db964u: goto label_1db964;
        case 0x1db968u: goto label_1db968;
        case 0x1db96cu: goto label_1db96c;
        case 0x1db970u: goto label_1db970;
        case 0x1db974u: goto label_1db974;
        case 0x1db978u: goto label_1db978;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db980u: goto label_1db980;
        case 0x1db984u: goto label_1db984;
        case 0x1db988u: goto label_1db988;
        case 0x1db98cu: goto label_1db98c;
        case 0x1db990u: goto label_1db990;
        case 0x1db994u: goto label_1db994;
        case 0x1db998u: goto label_1db998;
        case 0x1db99cu: goto label_1db99c;
        case 0x1db9a0u: goto label_1db9a0;
        case 0x1db9a4u: goto label_1db9a4;
        case 0x1db9a8u: goto label_1db9a8;
        case 0x1db9acu: goto label_1db9ac;
        case 0x1db9b0u: goto label_1db9b0;
        case 0x1db9b4u: goto label_1db9b4;
        case 0x1db9b8u: goto label_1db9b8;
        case 0x1db9bcu: goto label_1db9bc;
        case 0x1db9c0u: goto label_1db9c0;
        case 0x1db9c4u: goto label_1db9c4;
        case 0x1db9c8u: goto label_1db9c8;
        case 0x1db9ccu: goto label_1db9cc;
        case 0x1db9d0u: goto label_1db9d0;
        case 0x1db9d4u: goto label_1db9d4;
        case 0x1db9d8u: goto label_1db9d8;
        case 0x1db9dcu: goto label_1db9dc;
        case 0x1db9e0u: goto label_1db9e0;
        case 0x1db9e4u: goto label_1db9e4;
        case 0x1db9e8u: goto label_1db9e8;
        case 0x1db9ecu: goto label_1db9ec;
        case 0x1db9f0u: goto label_1db9f0;
        case 0x1db9f4u: goto label_1db9f4;
        case 0x1db9f8u: goto label_1db9f8;
        case 0x1db9fcu: goto label_1db9fc;
        case 0x1dba00u: goto label_1dba00;
        case 0x1dba04u: goto label_1dba04;
        case 0x1dba08u: goto label_1dba08;
        case 0x1dba0cu: goto label_1dba0c;
        case 0x1dba10u: goto label_1dba10;
        case 0x1dba14u: goto label_1dba14;
        case 0x1dba18u: goto label_1dba18;
        case 0x1dba1cu: goto label_1dba1c;
        case 0x1dba20u: goto label_1dba20;
        case 0x1dba24u: goto label_1dba24;
        case 0x1dba28u: goto label_1dba28;
        case 0x1dba2cu: goto label_1dba2c;
        case 0x1dba30u: goto label_1dba30;
        case 0x1dba34u: goto label_1dba34;
        case 0x1dba38u: goto label_1dba38;
        case 0x1dba3cu: goto label_1dba3c;
        case 0x1dba40u: goto label_1dba40;
        case 0x1dba44u: goto label_1dba44;
        case 0x1dba48u: goto label_1dba48;
        case 0x1dba4cu: goto label_1dba4c;
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba54u: goto label_1dba54;
        case 0x1dba58u: goto label_1dba58;
        case 0x1dba5cu: goto label_1dba5c;
        case 0x1dba60u: goto label_1dba60;
        case 0x1dba64u: goto label_1dba64;
        case 0x1dba68u: goto label_1dba68;
        case 0x1dba6cu: goto label_1dba6c;
        case 0x1dba70u: goto label_1dba70;
        case 0x1dba74u: goto label_1dba74;
        case 0x1dba78u: goto label_1dba78;
        case 0x1dba7cu: goto label_1dba7c;
        case 0x1dba80u: goto label_1dba80;
        case 0x1dba84u: goto label_1dba84;
        case 0x1dba88u: goto label_1dba88;
        case 0x1dba8cu: goto label_1dba8c;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dba94u: goto label_1dba94;
        case 0x1dba98u: goto label_1dba98;
        case 0x1dba9cu: goto label_1dba9c;
        case 0x1dbaa0u: goto label_1dbaa0;
        case 0x1dbaa4u: goto label_1dbaa4;
        case 0x1dbaa8u: goto label_1dbaa8;
        case 0x1dbaacu: goto label_1dbaac;
        case 0x1dbab0u: goto label_1dbab0;
        case 0x1dbab4u: goto label_1dbab4;
        case 0x1dbab8u: goto label_1dbab8;
        case 0x1dbabcu: goto label_1dbabc;
        case 0x1dbac0u: goto label_1dbac0;
        case 0x1dbac4u: goto label_1dbac4;
        case 0x1dbac8u: goto label_1dbac8;
        case 0x1dbaccu: goto label_1dbacc;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbad4u: goto label_1dbad4;
        case 0x1dbad8u: goto label_1dbad8;
        case 0x1dbadcu: goto label_1dbadc;
        case 0x1dbae0u: goto label_1dbae0;
        case 0x1dbae4u: goto label_1dbae4;
        case 0x1dbae8u: goto label_1dbae8;
        case 0x1dbaecu: goto label_1dbaec;
        case 0x1dbaf0u: goto label_1dbaf0;
        case 0x1dbaf4u: goto label_1dbaf4;
        case 0x1dbaf8u: goto label_1dbaf8;
        case 0x1dbafcu: goto label_1dbafc;
        case 0x1dbb00u: goto label_1dbb00;
        case 0x1dbb04u: goto label_1dbb04;
        case 0x1dbb08u: goto label_1dbb08;
        case 0x1dbb0cu: goto label_1dbb0c;
        case 0x1dbb10u: goto label_1dbb10;
        case 0x1dbb14u: goto label_1dbb14;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb1cu: goto label_1dbb1c;
        case 0x1dbb20u: goto label_1dbb20;
        case 0x1dbb24u: goto label_1dbb24;
        case 0x1dbb28u: goto label_1dbb28;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb30u: goto label_1dbb30;
        case 0x1dbb34u: goto label_1dbb34;
        case 0x1dbb38u: goto label_1dbb38;
        case 0x1dbb3cu: goto label_1dbb3c;
        case 0x1dbb40u: goto label_1dbb40;
        case 0x1dbb44u: goto label_1dbb44;
        case 0x1dbb48u: goto label_1dbb48;
        case 0x1dbb4cu: goto label_1dbb4c;
        case 0x1dbb50u: goto label_1dbb50;
        case 0x1dbb54u: goto label_1dbb54;
        case 0x1dbb58u: goto label_1dbb58;
        case 0x1dbb5cu: goto label_1dbb5c;
        case 0x1dbb60u: goto label_1dbb60;
        case 0x1dbb64u: goto label_1dbb64;
        case 0x1dbb68u: goto label_1dbb68;
        case 0x1dbb6cu: goto label_1dbb6c;
        case 0x1dbb70u: goto label_1dbb70;
        case 0x1dbb74u: goto label_1dbb74;
        case 0x1dbb78u: goto label_1dbb78;
        case 0x1dbb7cu: goto label_1dbb7c;
        case 0x1dbb80u: goto label_1dbb80;
        case 0x1dbb84u: goto label_1dbb84;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb8cu: goto label_1dbb8c;
        case 0x1dbb90u: goto label_1dbb90;
        case 0x1dbb94u: goto label_1dbb94;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbb9cu: goto label_1dbb9c;
        case 0x1dbba0u: goto label_1dbba0;
        case 0x1dbba4u: goto label_1dbba4;
        case 0x1dbba8u: goto label_1dbba8;
        case 0x1dbbacu: goto label_1dbbac;
        default: break;
    }

    ctx->pc = 0x1db8f0u;

label_1db8f0:
    // 0x1db8f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1db8f4:
    // 0x1db8f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1db8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1db8f8:
    // 0x1db8f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1db8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1db8fc:
    // 0x1db8fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1db8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1db900:
    // 0x1db900: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1db900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db904:
    // 0x1db904: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1db908:
    // 0x1db908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1db90c:
    // 0x1db90c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1db90cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db910:
    // 0x1db910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db914:
    // 0x1db914: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1db914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1db918:
    // 0x1db918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db91c:
    // 0x1db91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db920:
    // 0x1db920: 0xc076e04  jal         func_1DB810
label_1db924:
    if (ctx->pc == 0x1DB924u) {
        ctx->pc = 0x1DB924u;
            // 0x1db924: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB928u;
        goto label_1db928;
    }
    ctx->pc = 0x1DB920u;
    SET_GPR_U32(ctx, 31, 0x1DB928u);
    ctx->pc = 0x1DB924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB920u;
            // 0x1db924: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB810u;
    if (runtime->hasFunction(0x1DB810u)) {
        auto targetFn = runtime->lookupFunction(0x1DB810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB928u; }
        if (ctx->pc != 0x1DB928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchReferBlock__11CMonsterManFv_0x1db810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB928u; }
        if (ctx->pc != 0x1DB928u) { return; }
    }
    ctx->pc = 0x1DB928u;
label_1db928:
    // 0x1db928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db92c:
    // 0x1db92c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db930:
    // 0x1db930: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1db934:
    if (ctx->pc == 0x1DB934u) {
        ctx->pc = 0x1DB934u;
            // 0x1db934: 0x240214c0  addiu       $v0, $zero, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
        ctx->pc = 0x1DB938u;
        goto label_1db938;
    }
    ctx->pc = 0x1DB930u;
    {
        const bool branch_taken_0x1db930 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB930u;
            // 0x1db934: 0x240214c0  addiu       $v0, $zero, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db930) {
            ctx->pc = 0x1DB940u;
            goto label_1db940;
        }
    }
    ctx->pc = 0x1DB938u;
label_1db938:
    // 0x1db938: 0x10000093  b           . + 4 + (0x93 << 2)
label_1db93c:
    if (ctx->pc == 0x1DB93Cu) {
        ctx->pc = 0x1DB93Cu;
            // 0x1db93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB940u;
        goto label_1db940;
    }
    ctx->pc = 0x1DB938u;
    {
        const bool branch_taken_0x1db938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB938u;
            // 0x1db93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db938) {
            ctx->pc = 0x1DBB88u;
            goto label_1dbb88;
        }
    }
    ctx->pc = 0x1DB940u;
label_1db940:
    // 0x1db940: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1db940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1db944:
    // 0x1db944: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1db948:
    // 0x1db948: 0x245004f0  addiu       $s0, $v0, 0x4F0
    ctx->pc = 0x1db948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1264));
label_1db94c:
    // 0x1db94c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1db950:
    if (ctx->pc == 0x1DB950u) {
        ctx->pc = 0x1DB950u;
            // 0x1db950: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1DB954u;
        goto label_1db954;
    }
    ctx->pc = 0x1DB94Cu;
    {
        const bool branch_taken_0x1db94c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB94Cu;
            // 0x1db950: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db94c) {
            ctx->pc = 0x1DB95Cu;
            goto label_1db95c;
        }
    }
    ctx->pc = 0x1DB954u;
label_1db954:
    // 0x1db954: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1db958:
    if (ctx->pc == 0x1DB958u) {
        ctx->pc = 0x1DB958u;
            // 0x1db958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB95Cu;
        goto label_1db95c;
    }
    ctx->pc = 0x1DB954u;
    {
        const bool branch_taken_0x1db954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB954u;
            // 0x1db958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db954) {
            ctx->pc = 0x1DBB88u;
            goto label_1dbb88;
        }
    }
    ctx->pc = 0x1DB95Cu;
label_1db95c:
    // 0x1db95c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1db960:
    // 0x1db960: 0x24a57ec8  addiu       $a1, $a1, 0x7EC8
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32456));
label_1db964:
    // 0x1db964: 0xc04a234  jal         func_1288D0
label_1db968:
    if (ctx->pc == 0x1DB968u) {
        ctx->pc = 0x1DB968u;
            // 0x1db968: 0x26860024  addiu       $a2, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x1DB96Cu;
        goto label_1db96c;
    }
    ctx->pc = 0x1DB964u;
    SET_GPR_U32(ctx, 31, 0x1DB96Cu);
    ctx->pc = 0x1DB968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB964u;
            // 0x1db968: 0x26860024  addiu       $a2, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB96Cu; }
        if (ctx->pc != 0x1DB96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB96Cu; }
        if (ctx->pc != 0x1DB96Cu) { return; }
    }
    ctx->pc = 0x1DB96Cu;
label_1db96c:
    // 0x1db96c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1db970:
    // 0x1db970: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1db970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1db974:
    // 0x1db974: 0x24a57ed0  addiu       $a1, $a1, 0x7ED0
    ctx->pc = 0x1db974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32464));
label_1db978:
    // 0x1db978: 0xc04a234  jal         func_1288D0
label_1db97c:
    if (ctx->pc == 0x1DB97Cu) {
        ctx->pc = 0x1DB97Cu;
            // 0x1db97c: 0x26860024  addiu       $a2, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x1DB980u;
        goto label_1db980;
    }
    ctx->pc = 0x1DB978u;
    SET_GPR_U32(ctx, 31, 0x1DB980u);
    ctx->pc = 0x1DB97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB978u;
            // 0x1db97c: 0x26860024  addiu       $a2, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB980u; }
        if (ctx->pc != 0x1DB980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB980u; }
        if (ctx->pc != 0x1DB980u) { return; }
    }
    ctx->pc = 0x1DB980u;
label_1db980:
    // 0x1db980: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_1db984:
    // 0x1db984: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_1db988:
    // 0x1db988: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x1db988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
label_1db98c:
    // 0x1db98c: 0xc04b950  jal         func_12E540
label_1db990:
    if (ctx->pc == 0x1DB990u) {
        ctx->pc = 0x1DB990u;
            // 0x1db990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB994u;
        goto label_1db994;
    }
    ctx->pc = 0x1DB98Cu;
    SET_GPR_U32(ctx, 31, 0x1DB994u);
    ctx->pc = 0x1DB990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB98Cu;
            // 0x1db990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB994u; }
        if (ctx->pc != 0x1DB994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB994u; }
        if (ctx->pc != 0x1DB994u) { return; }
    }
    ctx->pc = 0x1DB994u;
label_1db994:
    // 0x1db994: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1db998:
    // 0x1db998: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1db99c:
    // 0x1db99c: 0xc0524c8  jal         func_149320
label_1db9a0:
    if (ctx->pc == 0x1DB9A0u) {
        ctx->pc = 0x1DB9A0u;
            // 0x1db9a0: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x1DB9A4u;
        goto label_1db9a4;
    }
    ctx->pc = 0x1DB99Cu;
    SET_GPR_U32(ctx, 31, 0x1DB9A4u);
    ctx->pc = 0x1DB9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB99Cu;
            // 0x1db9a0: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9A4u; }
        if (ctx->pc != 0x1DB9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9A4u; }
        if (ctx->pc != 0x1DB9A4u) { return; }
    }
    ctx->pc = 0x1DB9A4u;
label_1db9a4:
    // 0x1db9a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1db9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1db9a8:
    // 0x1db9a8: 0x264401d8  addiu       $a0, $s2, 0x1D8
    ctx->pc = 0x1db9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
label_1db9ac:
    // 0x1db9ac: 0xc04a3dc  jal         func_128F70
label_1db9b0:
    if (ctx->pc == 0x1DB9B0u) {
        ctx->pc = 0x1DB9B0u;
            // 0x1db9b0: 0x24a57ee8  addiu       $a1, $a1, 0x7EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32488));
        ctx->pc = 0x1DB9B4u;
        goto label_1db9b4;
    }
    ctx->pc = 0x1DB9ACu;
    SET_GPR_U32(ctx, 31, 0x1DB9B4u);
    ctx->pc = 0x1DB9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9ACu;
            // 0x1db9b0: 0x24a57ee8  addiu       $a1, $a1, 0x7EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9B4u; }
        if (ctx->pc != 0x1DB9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9B4u; }
        if (ctx->pc != 0x1DB9B4u) { return; }
    }
    ctx->pc = 0x1DB9B4u;
label_1db9b4:
    // 0x1db9b4: 0x8e190010  lw          $t9, 0x10($s0)
    ctx->pc = 0x1db9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1db9b8:
    // 0x1db9b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1db9bc:
    // 0x1db9bc: 0x320f809  jalr        $t9
label_1db9c0:
    if (ctx->pc == 0x1DB9C0u) {
        ctx->pc = 0x1DB9C0u;
            // 0x1db9c0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1DB9C4u;
        goto label_1db9c4;
    }
    ctx->pc = 0x1DB9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB9C4u);
        ctx->pc = 0x1DB9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9BCu;
            // 0x1db9c0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB9C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9C4u; }
            if (ctx->pc != 0x1DB9C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB9C4u;
label_1db9c4:
    // 0x1db9c4: 0x8e190010  lw          $t9, 0x10($s0)
    ctx->pc = 0x1db9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1db9c8:
    // 0x1db9c8: 0x262a0028  addiu       $t2, $s1, 0x28
    ctx->pc = 0x1db9c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_1db9cc:
    // 0x1db9cc: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1db9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1db9d0:
    // 0x1db9d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1db9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1db9d4:
    // 0x1db9d4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1db9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1db9d8:
    // 0x1db9d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1db9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db9dc:
    // 0x1db9dc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1db9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db9e0:
    // 0x1db9e0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1db9e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1db9e4:
    // 0x1db9e4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1db9e8:
    // 0x1db9e8: 0x320f809  jalr        $t9
label_1db9ec:
    if (ctx->pc == 0x1DB9ECu) {
        ctx->pc = 0x1DB9ECu;
            // 0x1db9ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9F0u;
        goto label_1db9f0;
    }
    ctx->pc = 0x1DB9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB9F0u);
        ctx->pc = 0x1DB9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9E8u;
            // 0x1db9ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9F0u; }
            if (ctx->pc != 0x1DB9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB9F0u;
label_1db9f0:
    // 0x1db9f0: 0xa24001d8  sb          $zero, 0x1D8($s2)
    ctx->pc = 0x1db9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 472), (uint8_t)GPR_U32(ctx, 0));
label_1db9f4:
    // 0x1db9f4: 0xae141160  sw          $s4, 0x1160($s0)
    ctx->pc = 0x1db9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4448), GPR_U32(ctx, 20));
label_1db9f8:
    // 0x1db9f8: 0x8e860048  lw          $a2, 0x48($s4)
    ctx->pc = 0x1db9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1db9fc:
    // 0x1db9fc: 0x18c0001d  blez        $a2, . + 4 + (0x1D << 2)
label_1dba00:
    if (ctx->pc == 0x1DBA00u) {
        ctx->pc = 0x1DBA00u;
            // 0x1dba00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DBA04u;
        goto label_1dba04;
    }
    ctx->pc = 0x1DB9FCu;
    {
        const bool branch_taken_0x1db9fc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1DBA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9FCu;
            // 0x1dba00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9fc) {
            ctx->pc = 0x1DBA74u;
            goto label_1dba74;
        }
    }
    ctx->pc = 0x1DBA04u;
label_1dba04:
    // 0x1dba04: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x1dba04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1dba08:
    // 0x1dba08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1dba0c:
    if (ctx->pc == 0x1DBA0Cu) {
        ctx->pc = 0x1DBA0Cu;
            // 0x1dba0c: 0x28c10064  slti        $at, $a2, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->pc = 0x1DBA10u;
        goto label_1dba10;
    }
    ctx->pc = 0x1DBA08u;
    {
        const bool branch_taken_0x1dba08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA08u;
            // 0x1dba0c: 0x28c10064  slti        $at, $a2, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba08) {
            ctx->pc = 0x1DBA28u;
            goto label_1dba28;
        }
    }
    ctx->pc = 0x1DBA10u;
label_1dba10:
    // 0x1dba10: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1dba14:
    // 0x1dba14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dba18:
    // 0x1dba18: 0xc04a234  jal         func_1288D0
label_1dba1c:
    if (ctx->pc == 0x1DBA1Cu) {
        ctx->pc = 0x1DBA1Cu;
            // 0x1dba1c: 0x24a57ef0  addiu       $a1, $a1, 0x7EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32496));
        ctx->pc = 0x1DBA20u;
        goto label_1dba20;
    }
    ctx->pc = 0x1DBA18u;
    SET_GPR_U32(ctx, 31, 0x1DBA20u);
    ctx->pc = 0x1DBA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA18u;
            // 0x1dba1c: 0x24a57ef0  addiu       $a1, $a1, 0x7EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA20u; }
        if (ctx->pc != 0x1DBA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA20u; }
        if (ctx->pc != 0x1DBA20u) { return; }
    }
    ctx->pc = 0x1DBA20u;
label_1dba20:
    // 0x1dba20: 0x1000000d  b           . + 4 + (0xD << 2)
label_1dba24:
    if (ctx->pc == 0x1DBA24u) {
        ctx->pc = 0x1DBA24u;
            // 0x1dba24: 0x8f858d74  lw          $a1, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->pc = 0x1DBA28u;
        goto label_1dba28;
    }
    ctx->pc = 0x1DBA20u;
    {
        const bool branch_taken_0x1dba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA20u;
            // 0x1dba24: 0x8f858d74  lw          $a1, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba20) {
            ctx->pc = 0x1DBA58u;
            goto label_1dba58;
        }
    }
    ctx->pc = 0x1DBA28u;
label_1dba28:
    // 0x1dba28: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1dba2c:
    if (ctx->pc == 0x1DBA2Cu) {
        ctx->pc = 0x1DBA2Cu;
            // 0x1dba2c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1DBA30u;
        goto label_1dba30;
    }
    ctx->pc = 0x1DBA28u;
    {
        const bool branch_taken_0x1dba28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA28u;
            // 0x1dba2c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba28) {
            ctx->pc = 0x1DBA48u;
            goto label_1dba48;
        }
    }
    ctx->pc = 0x1DBA30u;
label_1dba30:
    // 0x1dba30: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1dba30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1dba34:
    // 0x1dba34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dba38:
    // 0x1dba38: 0xc04a234  jal         func_1288D0
label_1dba3c:
    if (ctx->pc == 0x1DBA3Cu) {
        ctx->pc = 0x1DBA3Cu;
            // 0x1dba3c: 0x24a57f10  addiu       $a1, $a1, 0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32528));
        ctx->pc = 0x1DBA40u;
        goto label_1dba40;
    }
    ctx->pc = 0x1DBA38u;
    SET_GPR_U32(ctx, 31, 0x1DBA40u);
    ctx->pc = 0x1DBA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA38u;
            // 0x1dba3c: 0x24a57f10  addiu       $a1, $a1, 0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA40u; }
        if (ctx->pc != 0x1DBA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA40u; }
        if (ctx->pc != 0x1DBA40u) { return; }
    }
    ctx->pc = 0x1DBA40u;
label_1dba40:
    // 0x1dba40: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dba44:
    if (ctx->pc == 0x1DBA44u) {
        ctx->pc = 0x1DBA48u;
        goto label_1dba48;
    }
    ctx->pc = 0x1DBA40u;
    {
        const bool branch_taken_0x1dba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dba40) {
            ctx->pc = 0x1DBA54u;
            goto label_1dba54;
        }
    }
    ctx->pc = 0x1DBA48u;
label_1dba48:
    // 0x1dba48: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dba4c:
    // 0x1dba4c: 0xc04a234  jal         func_1288D0
label_1dba50:
    if (ctx->pc == 0x1DBA50u) {
        ctx->pc = 0x1DBA50u;
            // 0x1dba50: 0x24a57f30  addiu       $a1, $a1, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
        ctx->pc = 0x1DBA54u;
        goto label_1dba54;
    }
    ctx->pc = 0x1DBA4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA54u);
    ctx->pc = 0x1DBA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA4Cu;
            // 0x1dba50: 0x24a57f30  addiu       $a1, $a1, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA54u; }
        if (ctx->pc != 0x1DBA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA54u; }
        if (ctx->pc != 0x1DBA54u) { return; }
    }
    ctx->pc = 0x1DBA54u;
label_1dba54:
    // 0x1dba54: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1dba58:
    // 0x1dba58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dba5c:
    // 0x1dba5c: 0xc0524c8  jal         func_149320
label_1dba60:
    if (ctx->pc == 0x1DBA60u) {
        ctx->pc = 0x1DBA60u;
            // 0x1dba60: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x1DBA64u;
        goto label_1dba64;
    }
    ctx->pc = 0x1DBA5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA64u);
    ctx->pc = 0x1DBA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA5Cu;
            // 0x1dba60: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA64u; }
        if (ctx->pc != 0x1DBA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA64u; }
        if (ctx->pc != 0x1DBA64u) { return; }
    }
    ctx->pc = 0x1DBA64u;
label_1dba64:
    // 0x1dba64: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1dba64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1dba68:
    // 0x1dba68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dba6c:
    // 0x1dba6c: 0xc06368c  jal         func_18DA30
label_1dba70:
    if (ctx->pc == 0x1DBA70u) {
        ctx->pc = 0x1DBA70u;
            // 0x1dba70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA74u;
        goto label_1dba74;
    }
    ctx->pc = 0x1DBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA74u);
    ctx->pc = 0x1DBA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA6Cu;
            // 0x1dba70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA74u; }
        if (ctx->pc != 0x1DBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA74u; }
        if (ctx->pc != 0x1DBA74u) { return; }
    }
    ctx->pc = 0x1DBA74u;
label_1dba74:
    // 0x1dba74: 0xae020598  sw          $v0, 0x598($s0)
    ctx->pc = 0x1dba74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 2));
label_1dba78:
    // 0x1dba78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dba78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dba7c:
    // 0x1dba7c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1dba80:
    if (ctx->pc == 0x1DBA80u) {
        ctx->pc = 0x1DBA80u;
            // 0x1dba80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA84u;
        goto label_1dba84;
    }
    ctx->pc = 0x1DBA7Cu;
    {
        const bool branch_taken_0x1dba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA7Cu;
            // 0x1dba80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba7c) {
            ctx->pc = 0x1DBB08u;
            goto label_1dbb08;
        }
    }
    ctx->pc = 0x1DBA84u;
label_1dba84:
    // 0x1dba84: 0xc04e748  jal         func_139D20
label_1dba88:
    if (ctx->pc == 0x1DBA88u) {
        ctx->pc = 0x1DBA88u;
            // 0x1dba88: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1DBA8Cu;
        goto label_1dba8c;
    }
    ctx->pc = 0x1DBA84u;
    SET_GPR_U32(ctx, 31, 0x1DBA8Cu);
    ctx->pc = 0x1DBA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA84u;
            // 0x1dba88: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA8Cu; }
        if (ctx->pc != 0x1DBA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA8Cu; }
        if (ctx->pc != 0x1DBA8Cu) { return; }
    }
    ctx->pc = 0x1DBA8Cu;
label_1dba8c:
    // 0x1dba8c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1dba90:
    // 0x1dba90: 0xc04e638  jal         func_1398E0
label_1dba94:
    if (ctx->pc == 0x1DBA94u) {
        ctx->pc = 0x1DBA94u;
            // 0x1dba94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA98u;
        goto label_1dba98;
    }
    ctx->pc = 0x1DBA90u;
    SET_GPR_U32(ctx, 31, 0x1DBA98u);
    ctx->pc = 0x1DBA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA90u;
            // 0x1dba94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA98u; }
        if (ctx->pc != 0x1DBA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA98u; }
        if (ctx->pc != 0x1DBA98u) { return; }
    }
    ctx->pc = 0x1DBA98u;
label_1dba98:
    // 0x1dba98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1dba9c:
    if (ctx->pc == 0x1DBA9Cu) {
        ctx->pc = 0x1DBA9Cu;
            // 0x1dba9c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1DBAA0u;
        goto label_1dbaa0;
    }
    ctx->pc = 0x1DBA98u;
    {
        const bool branch_taken_0x1dba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA98u;
            // 0x1dba9c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba98) {
            ctx->pc = 0x1DBAC0u;
            goto label_1dbac0;
        }
    }
    ctx->pc = 0x1DBAA0u;
label_1dbaa0:
    // 0x1dbaa0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1dbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_1dbaa4:
    // 0x1dbaa4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1dbaa8:
    // 0x1dbaa8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1dbaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1dbaac:
    // 0x1dbaac: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1dbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1dbab0:
    // 0x1dbab0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1dbab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_1dbab4:
    // 0x1dbab4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1dbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_1dbab8:
    // 0x1dbab8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1dbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
label_1dbabc:
    // 0x1dbabc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1dbabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_1dbac0:
    // 0x1dbac0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1dbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1dbac4:
    // 0x1dbac4: 0xac620580  sw          $v0, 0x580($v1)
    ctx->pc = 0x1dbac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1408), GPR_U32(ctx, 2));
label_1dbac8:
    // 0x1dbac8: 0x24750580  addiu       $s5, $v1, 0x580
    ctx->pc = 0x1dbac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
label_1dbacc:
    // 0x1dbacc: 0x8c640580  lw          $a0, 0x580($v1)
    ctx->pc = 0x1dbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1408)));
label_1dbad0:
    // 0x1dbad0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dbad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dbad4:
    // 0x1dbad4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1dbad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dbad8:
    // 0x1dbad8: 0xc0bd7ac  jal         func_2F5EB0
label_1dbadc:
    if (ctx->pc == 0x1DBADCu) {
        ctx->pc = 0x1DBADCu;
            // 0x1dbadc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1DBAE0u;
        goto label_1dbae0;
    }
    ctx->pc = 0x1DBAD8u;
    SET_GPR_U32(ctx, 31, 0x1DBAE0u);
    ctx->pc = 0x1DBADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAD8u;
            // 0x1dbadc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EB0u;
    if (runtime->hasFunction(0x2F5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAE0u; }
        if (ctx->pc != 0x1DBAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17CSWordAfterEffectFP9mgCMemoryii_0x2f5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAE0u; }
        if (ctx->pc != 0x1DBAE0u) { return; }
    }
    ctx->pc = 0x1DBAE0u;
label_1dbae0:
    // 0x1dbae0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dbae4:
    // 0x1dbae4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1dbae8:
    // 0x1dbae8: 0x8f868e9c  lw          $a2, -0x7164($gp)
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1dbaec:
    // 0x1dbaec: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1dbaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1dbaf0:
    // 0x1dbaf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbaf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbaf4:
    // 0x1dbaf4: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1dbaf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dbaf8:
    // 0x1dbaf8: 0xc0bd720  jal         func_2F5C80
label_1dbafc:
    if (ctx->pc == 0x1DBAFCu) {
        ctx->pc = 0x1DBAFCu;
            // 0x1dbafc: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB00u;
        goto label_1dbb00;
    }
    ctx->pc = 0x1DBAF8u;
    SET_GPR_U32(ctx, 31, 0x1DBB00u);
    ctx->pc = 0x1DBAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAF8u;
            // 0x1dbafc: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C80u;
    if (runtime->hasFunction(0x2F5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2F5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB00u; }
        if (ctx->pc != 0x1DBB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__17CSWordAfterEffectFiP10mgCTextureiiii_0x2f5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB00u; }
        if (ctx->pc != 0x1DBB00u) { return; }
    }
    ctx->pc = 0x1DBB00u;
label_1dbb00:
    // 0x1dbb00: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1dbb00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dbb04:
    // 0x1dbb04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dbb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dbb08:
    // 0x1dbb08: 0x8282006b  lb          $v0, 0x6B($s4)
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 107)));
label_1dbb0c:
    // 0x1dbb0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1dbb0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dbb10:
    // 0x1dbb10: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_1dbb14:
    if (ctx->pc == 0x1DBB14u) {
        ctx->pc = 0x1DBB14u;
            // 0x1dbb14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB18u;
        goto label_1dbb18;
    }
    ctx->pc = 0x1DBB10u;
    {
        const bool branch_taken_0x1dbb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB10u;
            // 0x1dbb14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb10) {
            ctx->pc = 0x1DBA84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dba84;
        }
    }
    ctx->pc = 0x1DBB18u;
label_1dbb18:
    // 0x1dbb18: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1dbb1c:
    // 0x1dbb1c: 0x26860034  addiu       $a2, $s4, 0x34
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_1dbb20:
    // 0x1dbb20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dbb24:
    // 0x1dbb24: 0xc04a234  jal         func_1288D0
label_1dbb28:
    if (ctx->pc == 0x1DBB28u) {
        ctx->pc = 0x1DBB28u;
            // 0x1dbb28: 0x24a57f50  addiu       $a1, $a1, 0x7F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32592));
        ctx->pc = 0x1DBB2Cu;
        goto label_1dbb2c;
    }
    ctx->pc = 0x1DBB24u;
    SET_GPR_U32(ctx, 31, 0x1DBB2Cu);
    ctx->pc = 0x1DBB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB24u;
            // 0x1dbb28: 0x24a57f50  addiu       $a1, $a1, 0x7F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB2Cu; }
        if (ctx->pc != 0x1DBB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB2Cu; }
        if (ctx->pc != 0x1DBB2Cu) { return; }
    }
    ctx->pc = 0x1DBB2Cu;
label_1dbb2c:
    // 0x1dbb2c: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1dbb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1dbb30:
    // 0x1dbb30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dbb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dbb34:
    // 0x1dbb34: 0xc0524c8  jal         func_149320
label_1dbb38:
    if (ctx->pc == 0x1DBB38u) {
        ctx->pc = 0x1DBB38u;
            // 0x1dbb38: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x1DBB3Cu;
        goto label_1dbb3c;
    }
    ctx->pc = 0x1DBB34u;
    SET_GPR_U32(ctx, 31, 0x1DBB3Cu);
    ctx->pc = 0x1DBB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB34u;
            // 0x1dbb38: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB3Cu; }
        if (ctx->pc != 0x1DBB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB3Cu; }
        if (ctx->pc != 0x1DBB3Cu) { return; }
    }
    ctx->pc = 0x1DBB3Cu;
label_1dbb3c:
    // 0x1dbb3c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1dbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1dbb40:
    // 0x1dbb40: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1dbb44:
    if (ctx->pc == 0x1DBB44u) {
        ctx->pc = 0x1DBB44u;
            // 0x1dbb44: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1DBB48u;
        goto label_1dbb48;
    }
    ctx->pc = 0x1DBB40u;
    {
        const bool branch_taken_0x1dbb40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB40u;
            // 0x1dbb44: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb40) {
            ctx->pc = 0x1DBB50u;
            goto label_1dbb50;
        }
    }
    ctx->pc = 0x1DBB48u;
label_1dbb48:
    // 0x1dbb48: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1dbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1dbb4c:
    // 0x1dbb4c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1dbb4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1dbb50:
    // 0x1dbb50: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1dbb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dbb54:
    // 0x1dbb54: 0xc04e704  jal         func_139C10
label_1dbb58:
    if (ctx->pc == 0x1DBB58u) {
        ctx->pc = 0x1DBB58u;
            // 0x1dbb58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB5Cu;
        goto label_1dbb5c;
    }
    ctx->pc = 0x1DBB54u;
    SET_GPR_U32(ctx, 31, 0x1DBB5Cu);
    ctx->pc = 0x1DBB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB54u;
            // 0x1dbb58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB5Cu; }
        if (ctx->pc != 0x1DBB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB5Cu; }
        if (ctx->pc != 0x1DBB5Cu) { return; }
    }
    ctx->pc = 0x1DBB5Cu;
label_1dbb5c:
    // 0x1dbb5c: 0xae0214b0  sw          $v0, 0x14B0($s0)
    ctx->pc = 0x1dbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5296), GPR_U32(ctx, 2));
label_1dbb60:
    // 0x1dbb60: 0x8e0414b0  lw          $a0, 0x14B0($s0)
    ctx->pc = 0x1dbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
label_1dbb64:
    // 0x1dbb64: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1dbb68:
    if (ctx->pc == 0x1DBB68u) {
        ctx->pc = 0x1DBB68u;
            // 0x1dbb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB6Cu;
        goto label_1dbb6c;
    }
    ctx->pc = 0x1DBB64u;
    {
        const bool branch_taken_0x1dbb64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB64u;
            // 0x1dbb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb64) {
            ctx->pc = 0x1DBB74u;
            goto label_1dbb74;
        }
    }
    ctx->pc = 0x1DBB6Cu;
label_1dbb6c:
    // 0x1dbb6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dbb70:
    if (ctx->pc == 0x1DBB70u) {
        ctx->pc = 0x1DBB70u;
            // 0x1dbb70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1DBB74u;
        goto label_1dbb74;
    }
    ctx->pc = 0x1DBB6Cu;
    {
        const bool branch_taken_0x1dbb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB6Cu;
            // 0x1dbb70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb6c) {
            ctx->pc = 0x1DBB8Cu;
            goto label_1dbb8c;
        }
    }
    ctx->pc = 0x1DBB74u;
label_1dbb74:
    // 0x1dbb74: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x1dbb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1dbb78:
    // 0x1dbb78: 0xc049c18  jal         func_127060
label_1dbb7c:
    if (ctx->pc == 0x1DBB7Cu) {
        ctx->pc = 0x1DBB7Cu;
            // 0x1dbb7c: 0x8f858d74  lw          $a1, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->pc = 0x1DBB80u;
        goto label_1dbb80;
    }
    ctx->pc = 0x1DBB78u;
    SET_GPR_U32(ctx, 31, 0x1DBB80u);
    ctx->pc = 0x1DBB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB78u;
            // 0x1dbb7c: 0x8f858d74  lw          $a1, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB80u; }
        if (ctx->pc != 0x1DBB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB80u; }
        if (ctx->pc != 0x1DBB80u) { return; }
    }
    ctx->pc = 0x1DBB80u;
label_1dbb80:
    // 0x1dbb80: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1dbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_1dbb84:
    // 0x1dbb84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dbb88:
    // 0x1dbb88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1dbb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1dbb8c:
    // 0x1dbb8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dbb8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dbb90:
    // 0x1dbb90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dbb90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dbb94:
    // 0x1dbb94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dbb94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbb98:
    // 0x1dbb98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dbb98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dbb9c:
    // 0x1dbb9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbb9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbba0:
    // 0x1dbba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dbba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbba4:
    // 0x1dbba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dbba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbba8:
    // 0x1dbba8: 0x3e00008  jr          $ra
label_1dbbac:
    if (ctx->pc == 0x1DBBACu) {
        ctx->pc = 0x1DBBACu;
            // 0x1dbbac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1DBBB0u;
        goto label_fallthrough_0x1dbba8;
    }
    ctx->pc = 0x1DBBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBA8u;
            // 0x1dbbac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dbba8:
    ctx->pc = 0x1DBBB0u;
}
