#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi
// Address: 0x2ed720 - 0x2ed984
void GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x2ed720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditPartsAlt__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x2ed720");
#endif

    switch (ctx->pc) {
        case 0x2ed720u: goto label_2ed720;
        case 0x2ed724u: goto label_2ed724;
        case 0x2ed728u: goto label_2ed728;
        case 0x2ed72cu: goto label_2ed72c;
        case 0x2ed730u: goto label_2ed730;
        case 0x2ed734u: goto label_2ed734;
        case 0x2ed738u: goto label_2ed738;
        case 0x2ed73cu: goto label_2ed73c;
        case 0x2ed740u: goto label_2ed740;
        case 0x2ed744u: goto label_2ed744;
        case 0x2ed748u: goto label_2ed748;
        case 0x2ed74cu: goto label_2ed74c;
        case 0x2ed750u: goto label_2ed750;
        case 0x2ed754u: goto label_2ed754;
        case 0x2ed758u: goto label_2ed758;
        case 0x2ed75cu: goto label_2ed75c;
        case 0x2ed760u: goto label_2ed760;
        case 0x2ed764u: goto label_2ed764;
        case 0x2ed768u: goto label_2ed768;
        case 0x2ed76cu: goto label_2ed76c;
        case 0x2ed770u: goto label_2ed770;
        case 0x2ed774u: goto label_2ed774;
        case 0x2ed778u: goto label_2ed778;
        case 0x2ed77cu: goto label_2ed77c;
        case 0x2ed780u: goto label_2ed780;
        case 0x2ed784u: goto label_2ed784;
        case 0x2ed788u: goto label_2ed788;
        case 0x2ed78cu: goto label_2ed78c;
        case 0x2ed790u: goto label_2ed790;
        case 0x2ed794u: goto label_2ed794;
        case 0x2ed798u: goto label_2ed798;
        case 0x2ed79cu: goto label_2ed79c;
        case 0x2ed7a0u: goto label_2ed7a0;
        case 0x2ed7a4u: goto label_2ed7a4;
        case 0x2ed7a8u: goto label_2ed7a8;
        case 0x2ed7acu: goto label_2ed7ac;
        case 0x2ed7b0u: goto label_2ed7b0;
        case 0x2ed7b4u: goto label_2ed7b4;
        case 0x2ed7b8u: goto label_2ed7b8;
        case 0x2ed7bcu: goto label_2ed7bc;
        case 0x2ed7c0u: goto label_2ed7c0;
        case 0x2ed7c4u: goto label_2ed7c4;
        case 0x2ed7c8u: goto label_2ed7c8;
        case 0x2ed7ccu: goto label_2ed7cc;
        case 0x2ed7d0u: goto label_2ed7d0;
        case 0x2ed7d4u: goto label_2ed7d4;
        case 0x2ed7d8u: goto label_2ed7d8;
        case 0x2ed7dcu: goto label_2ed7dc;
        case 0x2ed7e0u: goto label_2ed7e0;
        case 0x2ed7e4u: goto label_2ed7e4;
        case 0x2ed7e8u: goto label_2ed7e8;
        case 0x2ed7ecu: goto label_2ed7ec;
        case 0x2ed7f0u: goto label_2ed7f0;
        case 0x2ed7f4u: goto label_2ed7f4;
        case 0x2ed7f8u: goto label_2ed7f8;
        case 0x2ed7fcu: goto label_2ed7fc;
        case 0x2ed800u: goto label_2ed800;
        case 0x2ed804u: goto label_2ed804;
        case 0x2ed808u: goto label_2ed808;
        case 0x2ed80cu: goto label_2ed80c;
        case 0x2ed810u: goto label_2ed810;
        case 0x2ed814u: goto label_2ed814;
        case 0x2ed818u: goto label_2ed818;
        case 0x2ed81cu: goto label_2ed81c;
        case 0x2ed820u: goto label_2ed820;
        case 0x2ed824u: goto label_2ed824;
        case 0x2ed828u: goto label_2ed828;
        case 0x2ed82cu: goto label_2ed82c;
        case 0x2ed830u: goto label_2ed830;
        case 0x2ed834u: goto label_2ed834;
        case 0x2ed838u: goto label_2ed838;
        case 0x2ed83cu: goto label_2ed83c;
        case 0x2ed840u: goto label_2ed840;
        case 0x2ed844u: goto label_2ed844;
        case 0x2ed848u: goto label_2ed848;
        case 0x2ed84cu: goto label_2ed84c;
        case 0x2ed850u: goto label_2ed850;
        case 0x2ed854u: goto label_2ed854;
        case 0x2ed858u: goto label_2ed858;
        case 0x2ed85cu: goto label_2ed85c;
        case 0x2ed860u: goto label_2ed860;
        case 0x2ed864u: goto label_2ed864;
        case 0x2ed868u: goto label_2ed868;
        case 0x2ed86cu: goto label_2ed86c;
        case 0x2ed870u: goto label_2ed870;
        case 0x2ed874u: goto label_2ed874;
        case 0x2ed878u: goto label_2ed878;
        case 0x2ed87cu: goto label_2ed87c;
        case 0x2ed880u: goto label_2ed880;
        case 0x2ed884u: goto label_2ed884;
        case 0x2ed888u: goto label_2ed888;
        case 0x2ed88cu: goto label_2ed88c;
        case 0x2ed890u: goto label_2ed890;
        case 0x2ed894u: goto label_2ed894;
        case 0x2ed898u: goto label_2ed898;
        case 0x2ed89cu: goto label_2ed89c;
        case 0x2ed8a0u: goto label_2ed8a0;
        case 0x2ed8a4u: goto label_2ed8a4;
        case 0x2ed8a8u: goto label_2ed8a8;
        case 0x2ed8acu: goto label_2ed8ac;
        case 0x2ed8b0u: goto label_2ed8b0;
        case 0x2ed8b4u: goto label_2ed8b4;
        case 0x2ed8b8u: goto label_2ed8b8;
        case 0x2ed8bcu: goto label_2ed8bc;
        case 0x2ed8c0u: goto label_2ed8c0;
        case 0x2ed8c4u: goto label_2ed8c4;
        case 0x2ed8c8u: goto label_2ed8c8;
        case 0x2ed8ccu: goto label_2ed8cc;
        case 0x2ed8d0u: goto label_2ed8d0;
        case 0x2ed8d4u: goto label_2ed8d4;
        case 0x2ed8d8u: goto label_2ed8d8;
        case 0x2ed8dcu: goto label_2ed8dc;
        case 0x2ed8e0u: goto label_2ed8e0;
        case 0x2ed8e4u: goto label_2ed8e4;
        case 0x2ed8e8u: goto label_2ed8e8;
        case 0x2ed8ecu: goto label_2ed8ec;
        case 0x2ed8f0u: goto label_2ed8f0;
        case 0x2ed8f4u: goto label_2ed8f4;
        case 0x2ed8f8u: goto label_2ed8f8;
        case 0x2ed8fcu: goto label_2ed8fc;
        case 0x2ed900u: goto label_2ed900;
        case 0x2ed904u: goto label_2ed904;
        case 0x2ed908u: goto label_2ed908;
        case 0x2ed90cu: goto label_2ed90c;
        case 0x2ed910u: goto label_2ed910;
        case 0x2ed914u: goto label_2ed914;
        case 0x2ed918u: goto label_2ed918;
        case 0x2ed91cu: goto label_2ed91c;
        case 0x2ed920u: goto label_2ed920;
        case 0x2ed924u: goto label_2ed924;
        case 0x2ed928u: goto label_2ed928;
        case 0x2ed92cu: goto label_2ed92c;
        case 0x2ed930u: goto label_2ed930;
        case 0x2ed934u: goto label_2ed934;
        case 0x2ed938u: goto label_2ed938;
        case 0x2ed93cu: goto label_2ed93c;
        case 0x2ed940u: goto label_2ed940;
        case 0x2ed944u: goto label_2ed944;
        case 0x2ed948u: goto label_2ed948;
        case 0x2ed94cu: goto label_2ed94c;
        case 0x2ed950u: goto label_2ed950;
        case 0x2ed954u: goto label_2ed954;
        case 0x2ed958u: goto label_2ed958;
        case 0x2ed95cu: goto label_2ed95c;
        case 0x2ed960u: goto label_2ed960;
        case 0x2ed964u: goto label_2ed964;
        case 0x2ed968u: goto label_2ed968;
        case 0x2ed96cu: goto label_2ed96c;
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed974u: goto label_2ed974;
        case 0x2ed978u: goto label_2ed978;
        case 0x2ed97cu: goto label_2ed97c;
        case 0x2ed980u: goto label_2ed980;
        default: break;
    }

    ctx->pc = 0x2ed720u;

label_2ed720:
    // 0x2ed720: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2ed720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_2ed724:
    // 0x2ed724: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ed724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2ed728:
    // 0x2ed728: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ed728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2ed72c:
    // 0x2ed72c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ed72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2ed730:
    // 0x2ed730: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2ed730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed734:
    // 0x2ed734: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ed734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2ed738:
    // 0x2ed738: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ed738u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed73c:
    // 0x2ed73c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ed73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2ed740:
    // 0x2ed740: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2ed740u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ed744:
    // 0x2ed744: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ed744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ed748:
    // 0x2ed748: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ed748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ed74c:
    // 0x2ed74c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ed74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ed750:
    // 0x2ed750: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ed750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ed754:
    // 0x2ed754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ed758:
    // 0x2ed758: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ed758u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ed75c:
    // 0x2ed75c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ed75cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ed760:
    // 0x2ed760: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2ed760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_2ed764:
    // 0x2ed764: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2ed764u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_2ed768:
    // 0x2ed768: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_2ed76c:
    if (ctx->pc == 0x2ED76Cu) {
        ctx->pc = 0x2ED76Cu;
            // 0x2ed76c: 0xafa700bc  sw          $a3, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
        ctx->pc = 0x2ED770u;
        goto label_2ed770;
    }
    ctx->pc = 0x2ED768u;
    {
        const bool branch_taken_0x2ed768 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED768u;
            // 0x2ed76c: 0xafa700bc  sw          $a3, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed768) {
            ctx->pc = 0x2ED77Cu;
            goto label_2ed77c;
        }
    }
    ctx->pc = 0x2ED770u;
label_2ed770:
    // 0x2ed770: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed774:
    // 0x2ed774: 0x10000075  b           . + 4 + (0x75 << 2)
label_2ed778:
    if (ctx->pc == 0x2ED778u) {
        ctx->pc = 0x2ED778u;
            // 0x2ed778: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2ED77Cu;
        goto label_2ed77c;
    }
    ctx->pc = 0x2ED774u;
    {
        const bool branch_taken_0x2ed774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED774u;
            // 0x2ed778: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed774) {
            ctx->pc = 0x2ED94Cu;
            goto label_2ed94c;
        }
    }
    ctx->pc = 0x2ED77Cu;
label_2ed77c:
    // 0x2ed77c: 0xc06c3d4  jal         func_1B0F50
label_2ed780:
    if (ctx->pc == 0x2ED780u) {
        ctx->pc = 0x2ED784u;
        goto label_2ed784;
    }
    ctx->pc = 0x2ED77Cu;
    SET_GPR_U32(ctx, 31, 0x2ED784u);
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED784u; }
        if (ctx->pc != 0x2ED784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED784u; }
        if (ctx->pc != 0x2ED784u) { return; }
    }
    ctx->pc = 0x2ED784u;
label_2ed784:
    // 0x2ed784: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2ed784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed788:
    // 0x2ed788: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ed788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed78c:
    // 0x2ed78c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ed78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ed790:
    // 0x2ed790: 0xc06c4d8  jal         func_1B1360
label_2ed794:
    if (ctx->pc == 0x2ED794u) {
        ctx->pc = 0x2ED794u;
            // 0x2ed794: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2ED798u;
        goto label_2ed798;
    }
    ctx->pc = 0x2ED790u;
    SET_GPR_U32(ctx, 31, 0x2ED798u);
    ctx->pc = 0x2ED794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED790u;
            // 0x2ed794: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED798u; }
        if (ctx->pc != 0x2ED798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED798u; }
        if (ctx->pc != 0x2ED798u) { return; }
    }
    ctx->pc = 0x2ED798u;
label_2ed798:
    // 0x2ed798: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ed798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed79c:
    // 0x2ed79c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x2ed79cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2ed7a0:
    // 0x2ed7a0: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x2ed7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ed7a4:
    // 0x2ed7a4: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_2ed7a8:
    if (ctx->pc == 0x2ED7A8u) {
        ctx->pc = 0x2ED7A8u;
            // 0x2ed7a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7ACu;
        goto label_2ed7ac;
    }
    ctx->pc = 0x2ED7A4u;
    {
        const bool branch_taken_0x2ed7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7A4u;
            // 0x2ed7a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7a4) {
            ctx->pc = 0x2ED940u;
            goto label_2ed940;
        }
    }
    ctx->pc = 0x2ED7ACu;
label_2ed7ac:
    // 0x2ed7ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ed7acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed7b0:
    // 0x2ed7b0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2ed7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2ed7b4:
    // 0x2ed7b4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2ed7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2ed7b8:
    // 0x2ed7b8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ed7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed7bc:
    // 0x2ed7bc: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x2ed7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_2ed7c0:
    // 0x2ed7c0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2ed7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_2ed7c4:
    // 0x2ed7c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ed7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ed7c8:
    // 0x2ed7c8: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_2ed7cc:
    if (ctx->pc == 0x2ED7CCu) {
        ctx->pc = 0x2ED7D0u;
        goto label_2ed7d0;
    }
    ctx->pc = 0x2ED7C8u;
    {
        const bool branch_taken_0x2ed7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7c8) {
            ctx->pc = 0x2ED930u;
            goto label_2ed930;
        }
    }
    ctx->pc = 0x2ED7D0u;
label_2ed7d0:
    // 0x2ed7d0: 0x8e500324  lw          $s0, 0x324($s2)
    ctx->pc = 0x2ed7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_2ed7d4:
    // 0x2ed7d4: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_2ed7d8:
    if (ctx->pc == 0x2ED7D8u) {
        ctx->pc = 0x2ED7DCu;
        goto label_2ed7dc;
    }
    ctx->pc = 0x2ED7D4u;
    {
        const bool branch_taken_0x2ed7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7d4) {
            ctx->pc = 0x2ED930u;
            goto label_2ed930;
        }
    }
    ctx->pc = 0x2ED7DCu;
label_2ed7dc:
    // 0x2ed7dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ed7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ed7e0:
    // 0x2ed7e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed7e4:
    // 0x2ed7e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ed7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ed7e8:
    // 0x2ed7e8: 0x320f809  jalr        $t9
label_2ed7ec:
    if (ctx->pc == 0x2ED7ECu) {
        ctx->pc = 0x2ED7ECu;
            // 0x2ed7ec: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2ED7F0u;
        goto label_2ed7f0;
    }
    ctx->pc = 0x2ED7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2ED7F0u);
        ctx->pc = 0x2ED7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7E8u;
            // 0x2ed7ec: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ED7F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ED7F0u; }
            if (ctx->pc != 0x2ED7F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2ED7F0u;
label_2ed7f0:
    // 0x2ed7f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2ed7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ed7f4:
    // 0x2ed7f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed7f8:
    // 0x2ed7f8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ed7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ed7fc:
    // 0x2ed7fc: 0x320f809  jalr        $t9
label_2ed800:
    if (ctx->pc == 0x2ED800u) {
        ctx->pc = 0x2ED800u;
            // 0x2ed800: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x2ED804u;
        goto label_2ed804;
    }
    ctx->pc = 0x2ED7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2ED804u);
        ctx->pc = 0x2ED800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7FCu;
            // 0x2ed800: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ED804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ED804u; }
            if (ctx->pc != 0x2ED804u) { return; }
        }
        }
    }
    ctx->pc = 0x2ED804u;
label_2ed804:
    // 0x2ed804: 0x27b201b4  addiu       $s2, $sp, 0x1B4
    ctx->pc = 0x2ed804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_2ed808:
    // 0x2ed808: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2ed808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ed80c:
    // 0x2ed80c: 0xc06c3d4  jal         func_1B0F50
label_2ed810:
    if (ctx->pc == 0x2ED810u) {
        ctx->pc = 0x2ED810u;
            // 0x2ed810: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ED814u;
        goto label_2ed814;
    }
    ctx->pc = 0x2ED80Cu;
    SET_GPR_U32(ctx, 31, 0x2ED814u);
    ctx->pc = 0x2ED810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED80Cu;
            // 0x2ed810: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED814u; }
        if (ctx->pc != 0x2ED814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED814u; }
        if (ctx->pc != 0x2ED814u) { return; }
    }
    ctx->pc = 0x2ED814u;
label_2ed814:
    // 0x2ed814: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ed814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed818:
    // 0x2ed818: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ed818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ed81c:
    // 0x2ed81c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2ed81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2ed820:
    // 0x2ed820: 0xc06c4d8  jal         func_1B1360
label_2ed824:
    if (ctx->pc == 0x2ED824u) {
        ctx->pc = 0x2ED824u;
            // 0x2ed824: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2ED828u;
        goto label_2ed828;
    }
    ctx->pc = 0x2ED820u;
    SET_GPR_U32(ctx, 31, 0x2ED828u);
    ctx->pc = 0x2ED824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED820u;
            // 0x2ed824: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED828u; }
        if (ctx->pc != 0x2ED828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED828u; }
        if (ctx->pc != 0x2ED828u) { return; }
    }
    ctx->pc = 0x2ED828u;
label_2ed828:
    // 0x2ed828: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ed828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ed82c:
    // 0x2ed82c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2ed82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ed830:
    // 0x2ed830: 0xc06c4ec  jal         func_1B13B0
label_2ed834:
    if (ctx->pc == 0x2ED834u) {
        ctx->pc = 0x2ED834u;
            // 0x2ed834: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2ED838u;
        goto label_2ed838;
    }
    ctx->pc = 0x2ED830u;
    SET_GPR_U32(ctx, 31, 0x2ED838u);
    ctx->pc = 0x2ED834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED830u;
            // 0x2ed834: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (runtime->hasFunction(0x1B13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED838u; }
        if (ctx->pc != 0x2ED838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED838u; }
        if (ctx->pc != 0x2ED838u) { return; }
    }
    ctx->pc = 0x2ED838u;
label_2ed838:
    // 0x2ed838: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2ed838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed83c:
    // 0x2ed83c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2ed83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2ed840:
    // 0x2ed840: 0xc041c3e  jal         func_1070F8
label_2ed844:
    if (ctx->pc == 0x2ED844u) {
        ctx->pc = 0x2ED844u;
            // 0x2ed844: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2ED848u;
        goto label_2ed848;
    }
    ctx->pc = 0x2ED840u;
    SET_GPR_U32(ctx, 31, 0x2ED848u);
    ctx->pc = 0x2ED844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED840u;
            // 0x2ed844: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED848u; }
        if (ctx->pc != 0x2ED848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED848u; }
        if (ctx->pc != 0x2ED848u) { return; }
    }
    ctx->pc = 0x2ED848u;
label_2ed848:
    // 0x2ed848: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2ed848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed84c:
    // 0x2ed84c: 0xc04c374  jal         func_130DD0
label_2ed850:
    if (ctx->pc == 0x2ED850u) {
        ctx->pc = 0x2ED850u;
            // 0x2ed850: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x2ED854u;
        goto label_2ed854;
    }
    ctx->pc = 0x2ED84Cu;
    SET_GPR_U32(ctx, 31, 0x2ED854u);
    ctx->pc = 0x2ED850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED84Cu;
            // 0x2ed850: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED854u; }
        if (ctx->pc != 0x2ED854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED854u; }
        if (ctx->pc != 0x2ED854u) { return; }
    }
    ctx->pc = 0x2ED854u;
label_2ed854:
    // 0x2ed854: 0x8fd40104  lw          $s4, 0x104($fp)
    ctx->pc = 0x2ed854u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
label_2ed858:
    // 0x2ed858: 0x8fd20100  lw          $s2, 0x100($fp)
    ctx->pc = 0x2ed858u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
label_2ed85c:
    // 0x2ed85c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x2ed85cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2ed860:
    // 0x2ed860: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_2ed864:
    if (ctx->pc == 0x2ED864u) {
        ctx->pc = 0x2ED864u;
            // 0x2ed864: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ED868u;
        goto label_2ed868;
    }
    ctx->pc = 0x2ED860u;
    {
        const bool branch_taken_0x2ed860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED860u;
            // 0x2ed864: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed860) {
            ctx->pc = 0x2ED930u;
            goto label_2ed930;
        }
    }
    ctx->pc = 0x2ED868u;
label_2ed868:
    // 0x2ed868: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ed868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2ed86c:
    // 0x2ed86c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2ed86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2ed870:
    // 0x2ed870: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ed870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed874:
    // 0x2ed874: 0xc04c228  jal         func_1308A0
label_2ed878:
    if (ctx->pc == 0x2ED878u) {
        ctx->pc = 0x2ED878u;
            // 0x2ed878: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2ED87Cu;
        goto label_2ed87c;
    }
    ctx->pc = 0x2ED874u;
    SET_GPR_U32(ctx, 31, 0x2ED87Cu);
    ctx->pc = 0x2ED878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED874u;
            // 0x2ed878: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED87Cu; }
        if (ctx->pc != 0x2ED87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED87Cu; }
        if (ctx->pc != 0x2ED87Cu) { return; }
    }
    ctx->pc = 0x2ED87Cu;
label_2ed87c:
    // 0x2ed87c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ed87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2ed880:
    // 0x2ed880: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2ed880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ed884:
    // 0x2ed884: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ed884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed888:
    // 0x2ed888: 0xc04c228  jal         func_1308A0
label_2ed88c:
    if (ctx->pc == 0x2ED88Cu) {
        ctx->pc = 0x2ED88Cu;
            // 0x2ed88c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2ED890u;
        goto label_2ed890;
    }
    ctx->pc = 0x2ED888u;
    SET_GPR_U32(ctx, 31, 0x2ED890u);
    ctx->pc = 0x2ED88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED888u;
            // 0x2ed88c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED890u; }
        if (ctx->pc != 0x2ED890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED890u; }
        if (ctx->pc != 0x2ED890u) { return; }
    }
    ctx->pc = 0x2ED890u;
label_2ed890:
    // 0x2ed890: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2ed890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2ed894:
    // 0x2ed894: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2ed894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2ed898:
    // 0x2ed898: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2ed898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2ed89c:
    // 0x2ed89c: 0xc0bb5bc  jal         func_2ED6F0
label_2ed8a0:
    if (ctx->pc == 0x2ED8A0u) {
        ctx->pc = 0x2ED8A0u;
            // 0x2ed8a0: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x2ED8A4u;
        goto label_2ed8a4;
    }
    ctx->pc = 0x2ED89Cu;
    SET_GPR_U32(ctx, 31, 0x2ED8A4u);
    ctx->pc = 0x2ED8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED89Cu;
            // 0x2ed8a0: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED6F0u;
    if (runtime->hasFunction(0x2ED6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8A4u; }
        if (ctx->pc != 0x2ED8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaneNormalXZ__FPfPfPfPf_0x2ed6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8A4u; }
        if (ctx->pc != 0x2ED8A4u) { return; }
    }
    ctx->pc = 0x2ED8A4u;
label_2ed8a4:
    // 0x2ed8a4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2ed8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2ed8a8:
    // 0x2ed8a8: 0x27a6022c  addiu       $a2, $sp, 0x22C
    ctx->pc = 0x2ed8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_2ed8ac:
    // 0x2ed8ac: 0xc068d50  jal         func_1A3540
label_2ed8b0:
    if (ctx->pc == 0x2ED8B0u) {
        ctx->pc = 0x2ED8B0u;
            // 0x2ed8b0: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2ED8B4u;
        goto label_2ed8b4;
    }
    ctx->pc = 0x2ED8ACu;
    SET_GPR_U32(ctx, 31, 0x2ED8B4u);
    ctx->pc = 0x2ED8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED8ACu;
            // 0x2ed8b0: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3540u;
    if (runtime->hasFunction(0x1A3540u)) {
        auto targetFn = runtime->lookupFunction(0x1A3540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8B4u; }
        if (ctx->pc != 0x2ED8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapPoly3XZ__14CEditCollisionFPA4_fPfP9mgVu0FBOX_0x1a3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED8B4u; }
        if (ctx->pc != 0x2ED8B4u) { return; }
    }
    ctx->pc = 0x2ED8B4u;
label_2ed8b4:
    // 0x2ed8b4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ed8b8:
    if (ctx->pc == 0x2ED8B8u) {
        ctx->pc = 0x2ED8BCu;
        goto label_2ed8bc;
    }
    ctx->pc = 0x2ED8B4u;
    {
        const bool branch_taken_0x2ed8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8b4) {
            ctx->pc = 0x2ED91Cu;
            goto label_2ed91c;
        }
    }
    ctx->pc = 0x2ED8BCu;
label_2ed8bc:
    // 0x2ed8bc: 0xc7a1022c  lwc1        $f1, 0x22C($sp)
    ctx->pc = 0x2ed8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ed8c0:
    // 0x2ed8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ed8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed8c4:
    // 0x2ed8c4: 0x0  nop
    ctx->pc = 0x2ed8c4u;
    // NOP
label_2ed8c8:
    // 0x2ed8c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ed8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ed8cc:
    // 0x2ed8cc: 0x0  nop
    ctx->pc = 0x2ed8ccu;
    // NOP
label_2ed8d0:
    // 0x2ed8d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ed8d4:
    if (ctx->pc == 0x2ED8D4u) {
        ctx->pc = 0x2ED8D8u;
        goto label_2ed8d8;
    }
    ctx->pc = 0x2ED8D0u;
    {
        const bool branch_taken_0x2ed8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed8d0) {
            ctx->pc = 0x2ED8DCu;
            goto label_2ed8dc;
        }
    }
    ctx->pc = 0x2ED8D8u;
label_2ed8d8:
    // 0x2ed8d8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ed8d8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2ed8dc:
    // 0x2ed8dc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2ed8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2ed8e0:
    // 0x2ed8e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2ed8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2ed8e4:
    // 0x2ed8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed8e8:
    // 0x2ed8e8: 0x0  nop
    ctx->pc = 0x2ed8e8u;
    // NOP
label_2ed8ec:
    // 0x2ed8ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ed8ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ed8f0:
    // 0x2ed8f0: 0x0  nop
    ctx->pc = 0x2ed8f0u;
    // NOP
label_2ed8f4:
    // 0x2ed8f4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2ed8f8:
    if (ctx->pc == 0x2ED8F8u) {
        ctx->pc = 0x2ED8FCu;
        goto label_2ed8fc;
    }
    ctx->pc = 0x2ED8F4u;
    {
        const bool branch_taken_0x2ed8f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed8f4) {
            ctx->pc = 0x2ED91Cu;
            goto label_2ed91c;
        }
    }
    ctx->pc = 0x2ED8FCu;
label_2ed8fc:
    // 0x2ed8fc: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x2ed8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ed900:
    // 0x2ed900: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2ed900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed904:
    // 0x2ed904: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ed908:
    // 0x2ed908: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ed908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ed90c:
    // 0x2ed90c: 0x0  nop
    ctx->pc = 0x2ed90cu;
    // NOP
label_2ed910:
    // 0x2ed910: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2ed914:
    if (ctx->pc == 0x2ED914u) {
        ctx->pc = 0x2ED918u;
        goto label_2ed918;
    }
    ctx->pc = 0x2ED910u;
    {
        const bool branch_taken_0x2ed910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed910) {
            ctx->pc = 0x2ED91Cu;
            goto label_2ed91c;
        }
    }
    ctx->pc = 0x2ED918u;
label_2ed918:
    // 0x2ed918: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ed918u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ed91c:
    // 0x2ed91c: 0x0  nop
    ctx->pc = 0x2ed91cu;
    // NOP
label_2ed920:
    // 0x2ed920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ed920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2ed924:
    // 0x2ed924: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x2ed924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2ed928:
    // 0x2ed928: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_2ed92c:
    if (ctx->pc == 0x2ED92Cu) {
        ctx->pc = 0x2ED92Cu;
            // 0x2ed92c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x2ED930u;
        goto label_2ed930;
    }
    ctx->pc = 0x2ED928u;
    {
        const bool branch_taken_0x2ed928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED928u;
            // 0x2ed92c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed928) {
            ctx->pc = 0x2ED868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed868;
        }
    }
    ctx->pc = 0x2ED930u;
label_2ed930:
    // 0x2ed930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ed930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ed934:
    // 0x2ed934: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x2ed934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2ed938:
    // 0x2ed938: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_2ed93c:
    if (ctx->pc == 0x2ED93Cu) {
        ctx->pc = 0x2ED93Cu;
            // 0x2ed93c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2ED940u;
        goto label_2ed940;
    }
    ctx->pc = 0x2ED938u;
    {
        const bool branch_taken_0x2ed938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED938u;
            // 0x2ed93c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed938) {
            ctx->pc = 0x2ED7B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed7b0;
        }
    }
    ctx->pc = 0x2ED940u;
label_2ed940:
    // 0x2ed940: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ed940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ed944:
    // 0x2ed944: 0xc06c488  jal         func_1B1220
label_2ed948:
    if (ctx->pc == 0x2ED948u) {
        ctx->pc = 0x2ED948u;
            // 0x2ed948: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2ED94Cu;
        goto label_2ed94c;
    }
    ctx->pc = 0x2ED944u;
    SET_GPR_U32(ctx, 31, 0x2ED94Cu);
    ctx->pc = 0x2ED948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED944u;
            // 0x2ed948: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1220u;
    if (runtime->hasFunction(0x1B1220u)) {
        auto targetFn = runtime->lookupFunction(0x1B1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED94Cu; }
        if (ctx->pc != 0x2ED94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAlt__8CEditMapFf_0x1b1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED94Cu; }
        if (ctx->pc != 0x2ED94Cu) { return; }
    }
    ctx->pc = 0x2ED94Cu;
label_2ed94c:
    // 0x2ed94c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ed94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ed950:
    // 0x2ed950: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ed950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ed954:
    // 0x2ed954: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ed954u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ed958:
    // 0x2ed958: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ed958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ed95c:
    // 0x2ed95c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ed95cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ed960:
    // 0x2ed960: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ed960u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ed964:
    // 0x2ed964: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ed964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ed968:
    // 0x2ed968: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ed968u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ed96c:
    // 0x2ed96c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ed96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ed970:
    // 0x2ed970: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ed970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ed974:
    // 0x2ed974: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ed974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed978:
    // 0x2ed978: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed97c:
    // 0x2ed97c: 0x3e00008  jr          $ra
label_2ed980:
    if (ctx->pc == 0x2ED980u) {
        ctx->pc = 0x2ED980u;
            // 0x2ed980: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2ED984u;
        goto label_fallthrough_0x2ed97c;
    }
    ctx->pc = 0x2ED97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED97Cu;
            // 0x2ed980: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ed97c:
    ctx->pc = 0x2ED984u;
}
